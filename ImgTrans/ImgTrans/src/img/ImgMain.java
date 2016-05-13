//#define CMD_RAM_WRITE	0b11110011			// 0xf3
//#define CMD_RAM_READ	0b10010011			// 0x93
//#define CMD_JMP_TO_ADDR 0b11111111			// 0xff

package img;

import java.io.*;
import java.util.Scanner;

import PortHelper.PortHelper;

public class ImgMain {

	/**
	 * @param args
	 */
	static int baudrate = 115200;//
	static Scanner sc;
	static PortHelper porter;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("hello world, ImgTrans Serve");
		System.out.print("input the No. of port:COM");
		sc = new Scanner(System.in);
		String Com = sc.nextLine();
		System.out.println("Choose the port COM" + Com);
		porter = new PortHelper(Com, baudrate);
		if (!porter.open())
			System.exit(-1);
		System.out.println("Success in opening COM" + Com);
		// else success
		// java wait for inputing
		boolean Exit = true;
		while (Exit) {
			Com = shell(); //sc.nextLine();
			System.out.println("Accept " + Com);
			String[] cmd = Com.split(" ");
			switch (cmd[0]) {
			case "write":
				Write(cmd);
				break;
			case "read":
				Read(cmd);
				break;
			case "run":
				Run(cmd);
				break;
			case "upload":
				Sendfile(cmd);
				break;
			case "help":
			case "h":
				Help(cmd);
				break;
			case "quit":
			case "q":
				Exit = false;
				break;
			default:
				System.out.println("no such command, please refer to the help");
			}
		}
		System.out.println("END !");
		porter.dispose();
		sc.close();
	}

	private static void Help(String[] cmd) {
		// TODO Auto-generated method stub
		if (cmd.length == 1) {
			System.out.println("This is a help message for using this client");
			// System.out.println("write : old version to write data to RAM");
			System.out.println("write [start_address]");
			// System.out.println("read : read date from RAM, address [0x80000000, 0x8fffffff]");
			System.out.println("read [start_address] [length]");
			// System.out.println("upload a hex file to the RAM");
			System.out.println("upload [file] [start_address]");
			// System.out.println("Run from 0x8000000");
			System.out.println("run (add -a parameters to send char data, nothing for hex data)");
			// System.out.println("help/h");
			System.out.println("help/h : show this message (no parameters)");
			System.out.println("quit/q : quit this client (no parameters)");
		} else {
			switch (cmd[1]) {
			case "write":
				// Write(cmd);
				System.out
						.println("write [start_address]: old version to write data to RAM");
				System.out
						.println("Here, we mostly use the {upload} to replace this command");
				System.out
						.println("start_address is not a necessary parameter, we use 0x80000000");
				System.out.println("as a default start address");
				break;
			case "read":
				// Read(cmd);
				System.out
						.println("read [start_address] [length]: read date from RAM, address [0x80000000, 0x8fffffff]");
				System.out
						.println("[start_address] : this is the address we read from in the RAM,");
				System.out
						.println("it is not necessary, and it uses 0x80000000 as default");
				System.out
						.println("[length] : this is how long data you want from the RAM");
				System.out
						.println("it is not necessary, and it uses 16 as default");

				break;
			case "run":
				// Run(cmd);
				System.out
						.println("Run : run the program in RAM from 0x8000000");
				System.out.println("no any parameters, send/recive hex data");
				System.out.println("add -a parameters, send/recive char data");

				break;
			case "upload":
				// Sendfile(cmd);
				System.out
						.println("upload [file] [start_address] : upload a hex file to the RAM");
				System.out.println("[file] : this is the hex file you point in this host machine");
				System.out.println("it is a necessary parameter, if it equal to NULL or this file ");
				System.out.println("not exists, this operaton will be ignore");
				System.out.println("[start_address] : this is the start address of the Hex file in");
				System.out.println("RAM, it is not necessary and it use 0x80000000 as default");

				break;
			case "help":
			case "h":
				System.out
						.println("help/h : show help message (no parameters)");
				break;
			case "quit":
			case "q":
				System.out.println("quit/q : quit this client (no parameters)");
				break;
			default:
				System.out.println("no such help about this command");
			}
		}
	}

	private static void Sendfile(String[] cmd) {
		// TODO Auto-generated method stub
		int start_address;
		if (cmd.length < 2) {
			System.out.println("filepath = NULL, please input");
			return;
		}
		else if (cmd.length < 3) {
			System.out.println("no Start Address, Using 0x80000000");
			start_address = 0x80000000;
		} else
			start_address = AtoI(cmd[2], 16);
		String path = cmd[1];
		if (path == "") {
			System.out.println("filepath = NULL, please input");
		}
		try {
			porter.Mode = 1;
			File file = new File(path);
			if(!file.exists()){
				System.out.println("this file not exists, interrupt...");
				return;
			}
			//porter.SendTxtFile(file, start_address);
			if(porter.Esendfile(file, start_address))
				System.out.println(path + " upload successful !");
		} catch (Exception e) {
			// TODO Auto-generated catch block
			porter.Mode = 0;
			e.printStackTrace();
		}
	}

	private static int AtoI(String str, int base) {
		// TODO Auto-generated method stub
		int num = 0, begin = 0;
		if(str.contains("X")||str.contains("x")){
			begin = 2;
		}
		int length = str.length();
		char[] arr = str.toCharArray();
		for(int i=begin; i<length; i++){
			num *= base;
			num += "0123456789ABCDEF".indexOf(arr[i]);//str[i]
		}
		return num;
	}
	
	@SuppressWarnings("static-access")
	private static void Run(String[] cmd) {
		// TODO Auto-generated method stub
		porter.Mode = 0;
		//boolean enable_os = false;
		try {
			porter.Exec(null);
			Thread.sleep(150);
			porter.Mode = 3;
			if(cmd.length > 1){
				porter.Mode = 4;
				if(cmd[1].toUpperCase().equals("OS")) porter.enable_os = true;
				else porter.enable_os = false;
			}
			//while(porter.numBytes!=0){
			//Thread.sleep(3000);
			//}
			/*
			if(porter.enable_os){
				porter.Os_Input();
				return;
			}*/
			while(true){
				String s = porter.enable_os? sc.nextLine(): shell(); //sc.nextLine();
				if(s.toUpperCase().equals("RUNEND")) break;
				porter.Exec(s);
			}
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
			porter.Mode = 0;
			System.out.println("run failed");
			return ;
		}
		System.out.println("run over!");
	}

	private static void Read(String[] cmd) {
		// TODO Auto-generated method stub
		int start_address, length;
		if (cmd.length < 2) {
			System.out.println("start_address = NULL, Using 0x80000000");
			System.out.println("length not define, using 16");
			start_address = 0x80000000;
			length = 16;
		}
		else if (cmd.length < 3) {
			System.out.println("start_address = NULL, Using 0x80000000");
			System.out.println("length not define, using 16");
			start_address = AtoI(cmd[1], 16);
			length = 16;
		} else {
			start_address = AtoI(cmd[1], 16);
			length = Integer.parseInt(cmd[2]);
		}
		try {
			//System.out.println(start_address+""+length);
			porter.Mode = 2;
			porter.Erecv(start_address, length);
			//porter.Revc(start_address, length);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			porter.Mode = 0;
			e.printStackTrace();
		}
	}

	private static void Write(String[] cmd) {
		// TODO Auto-generated method stub
		System.out.println("disable");
	}

	public String Bytes2HexString(byte[] b) {
		String ret = "";
		for (int i = 0; i < b.length; i++) {
			String hex = Integer.toHexString(b[i] & 0xFF);
			if (hex.length() == 1) {
				hex = '0' + hex;
			}
			ret += hex.toUpperCase();
		}
		return ret;
	}

	public String hexString2binaryString(String hexString) {
		if (hexString == null || hexString.length() % 2 != 0)
			return null;
		String bString = "", tmp;
		for (int i = 0; i < hexString.length(); i++) {
			tmp = "0000"
					+ Integer.toBinaryString(Integer.parseInt(
							hexString.substring(i, i + 1), 16));
			bString += tmp.substring(tmp.length() - 4);
		}
		return bString;
	}

	// public
	public static String shell(){
		System.out.println();
		System.out.print(">>");
		return sc.nextLine();
	}

}
