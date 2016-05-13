package PortHelper;

import java.awt.Component;
import java.awt.event.*;
import java.io.*;
import gnu.io.*;

public class PortHelper implements Runnable, SerialPortEventListener {
	public static SerialPort sport;
	public static CommPortIdentifier portId;
	public static String PortNum;
	public static InputStream inputstream;
	public static OutputStream outputstream;
	public static int BaudRate;
	public static int begin, end;
	public static Thread readThread;
	static int Bsize = 1024;
	public int Mode = -1;
	// boolean isOpen = false;
	public static int numBytes;
	private static byte[] readBuffer = new byte[10240];

	public boolean enable_os;

	public PortHelper(String no, int BaudRate) {
		this.PortNum = "COM" + no;
		this.BaudRate = BaudRate;
		// wait for change
	}

	public PortHelper() {
		// wait for change
	}

	public boolean open() {
		try {
			portId = CommPortIdentifier.getPortIdentifier(PortNum);
			sport = (SerialPort) portId.open("ImgTrans", 3000);
			sport.addEventListener(this);
			sport.notifyOnDataAvailable(true);
			this.SetDefault();
			inputstream = sport.getInputStream();
			outputstream = sport.getOutputStream();
		} catch (Exception e) {
			e.printStackTrace();
			sport.close();
			return false;
		}
		// readThread = new Thread(this);
		// readThread.start();
		return true;
	}

	public void dispose() {
		sport.close();
	}

	private void Send(byte[] bt) throws Exception {
		outputstream.write(bt);
	}

	/*
	 * private void SSend(int bt) throws Exception { outputstream.write(bt); }
	 */

	private void SetDefault() throws Exception {
		// BaudRate databit stopbit checkbit
		sport.setSerialPortParams(this.BaudRate, 8, 1, 0);
	}

	public void serialEvent(SerialPortEvent event) {
		// TODO Auto-generated method stub
		switch (event.getEventType()) {
		case SerialPortEvent.BI:
		case SerialPortEvent.OE:
		case SerialPortEvent.FE:
		case SerialPortEvent.PE:
		case SerialPortEvent.CD:
		case SerialPortEvent.CTS:
		case SerialPortEvent.DSR:
		case SerialPortEvent.RI:
		case SerialPortEvent.OUTPUT_BUFFER_EMPTY:
			break;
		case SerialPortEvent.DATA_AVAILABLE:// 获取到串口返回信息
			try {
				// deal_event();
				dispatch_event();
			} catch (Exception e) {
				e.printStackTrace();
			}
			break;
		default:
			break;
		}
	}

	private void dispatch_event() throws Exception {
		Thread.sleep(100);
		while (inputstream.available() > 0) {
			numBytes = inputstream.read(readBuffer);
		}
		// TODO Auto-generated method stub
		switch (Mode) {
		case 0:
			rstBuf();
			break;
		case 1:
			rstBuf();
			break;// sendfile
		case 2:
			this.PrintMem(readBuffer, numBytes);
			System.out.println();
			rstBuf();
			numBytes = 0;
			break;// readcode
		case 3:
			this.PrintLenArray(readBuffer, numBytes);
			rstBuf();
			numBytes = 0;
			break;// run hex
		case 4:
			this.PrintAscii(readBuffer, numBytes);
			rstBuf();
			numBytes = 0;
			break;// run ascii
		// case 5:
		default:
			rstBuf();
			break;// 0 -1
		}
	}

	private void rstBuf() {
		// TODO Auto-generated method stub
		readBuffer = new byte[10240];
	}

	public void run() {
		// TODO Auto-generated method stubtry
		try {
			Thread.sleep(200);
		} catch (InterruptedException e) {
		}
	}

	public void Erecv(int start_address, int length) throws Exception {
		int len = 40;// 1024; //
		if (start_address < 0x80000000) {
			System.out.println("RAM access invaild!, limit from 0x80000000");
			start_address = 0x80000000;
		}
		int end_address = length + start_address;
		if (end_address > 0x90000000) {
			System.out.println("RAM access invaild!, limit to 0x8fffffff");
			end_address = 0x90000000;
		}
		length = end_address - start_address;
		if (length % 4 != 0) {
			System.out.println("length % 4 should equal to 0");
			return;
		}
		byte[] msg;
		while (true) {
			if (length <= len)
				break;
			msg = new byte[7];
			msg[0] = (byte) (0x93);
			msg[1] = (byte) (start_address & 0xff);
			msg[2] = (byte) ((start_address >> 8) & 0xff);
			msg[3] = (byte) ((start_address >> 16) & 0xff);
			end_address = len + start_address;
			msg[4] = (byte) (end_address & 0xff);
			msg[5] = (byte) ((end_address >> 8) & 0xff);
			msg[6] = (byte) ((end_address >> 16) & 0xff);
			this.Send(msg);
			length -= len;
			start_address = end_address;
			Thread.sleep(200);
		}
		msg = new byte[7];
		msg[0] = (byte) (0x93);
		msg[1] = (byte) (start_address & 0xff);
		msg[2] = (byte) ((start_address >> 8) & 0xff);
		msg[3] = (byte) ((start_address >> 16) & 0xff);
		// System.out.print(length + "  ");
		end_address = length + start_address;
		msg[4] = (byte) (end_address & 0xff);
		msg[5] = (byte) ((end_address >> 8) & 0xff);
		msg[6] = (byte) ((end_address >> 16) & 0xff);
		this.Send(msg);
		Thread.sleep(200);
	}

	public boolean Esendfile(File file, int address_start) throws Exception {
		FileInputStream input = new FileInputStream(file);
		int length = input.available();
		byte[] tmp = new byte[length];
		input.read(tmp);
		// close the file inputstream
		input.close();
		// System.out.println(new String(tmp));
		// System.exit(0);
		tmp = hexStringToBytes(new String(tmp));
		length = tmp.length;
		int address_end;
		System.out.println("file length : " + length);
		if (length % 4 != 0) {
			//System.out
			//		.println("The size of this file is not 4n Byte, Illegal!");
			//return false;
			byte[] tmp2 = new byte[length];
			for(int i=0; i<length; i++) tmp2[i] = tmp[i];
			int alloc_length = (length/4 + 1) * 4;
			tmp = new byte[alloc_length];
			for(int i=0; i<length; i++) tmp[i] = tmp2[i];
			for(int i=length; i<alloc_length; i++) tmp[i] = 0;
			length = alloc_length;
		}
		//tmp = checkdata(tmp);
		int len = 1024 * 2; // 40;//
		byte[] msg;
		int hassend = 0;
		int fulllen = length;
		int persent = 10;
		while (true) {
			if (length <= len)
				break; // out loop
			msg = new byte[len + 7];
			msg[0] = (byte) (0xf3);
			msg[1] = (byte) (address_start & 0xff);
			msg[2] = (byte) ((address_start >> 8) & 0xff);
			msg[3] = (byte) ((address_start >> 16) & 0xff);
			address_end = address_start + len;// / 4
			msg[4] = (byte) (address_end & 0xff);
			msg[5] = (byte) ((address_end >> 8) & 0xff);
			msg[6] = (byte) ((address_end >> 16) & 0xff);
			// send file Msg
			for (int i = 0; i < len; i += 4) {
				msg[i + 7] = tmp[hassend + i];
				msg[i + 8] = tmp[hassend + i + 1];
				msg[i + 9] = tmp[hassend + i + 2];
				msg[i + 10] = tmp[hassend + i + 3];
			}
			// this.PrintArray(msg);
			this.Send(msg);
			hassend += len;
			length -= len;
			address_start = address_end;
			System.out.print(".");
			double fact_p = hassend * 100.0 / fulllen;
			if (fact_p >= persent) {
				System.out.println(persent + "% -> 0x" + Integer.toHexString(address_end));
				int tmppersent = ((int) (fact_p / 10) * 10);
				if (persent == tmppersent)
					persent += 10;
				else
					persent = tmppersent;
			}
			Thread.sleep(200);
		}
		msg = new byte[length + 7];
		msg[0] = (byte) (0xf3);
		msg[1] = (byte) (address_start & 0xff);
		msg[2] = (byte) ((address_start >> 8) & 0xff);
		msg[3] = (byte) ((address_start >> 16) & 0xff);
		address_end = address_start + length;// / 4
		msg[4] = (byte) (address_end & 0xff);
		msg[5] = (byte) ((address_end >> 8) & 0xff);
		msg[6] = (byte) ((address_end >> 16) & 0xff);
		// send file Msg
		for (int i = 0; i < length; i += 4) {
			msg[i + 7] = tmp[hassend + i];
			msg[i + 8] = tmp[hassend + i + 1];
			msg[i + 9] = tmp[hassend + i + 2];
			msg[i + 10] = tmp[hassend + i + 3];
		}
		// this.PrintArray(msg);
		this.Send(msg);
		Thread.sleep(200);
		System.out.println(".100%");
		return true;
	}

	@SuppressWarnings("unused")
	private byte[] checkdata(byte[] tmp) {
		// TODO Auto-generated method stub
		int len = tmp.length;
		int sll = 0;
		byte[] t = new byte[len];
		// int textlen = ((((4*16)+6)*16)+4)*16*16;
		for (int i = 0; i < len; i += 4) {
			// if (len < textlen) {
			if (sllcheck(tmp[i], tmp[i + 1], tmp[i + 2], tmp[i + 3])) {
				// bc de
				// ed cb
				// change b, chang tmp[i]
				t[i] = (byte) (tmp[i] | 0x01);
				t[i + 1] = tmp[i + 1];
				t[i + 2] = tmp[i + 2];
				t[i + 3] = tmp[i + 3];
				sll++;
				continue;
			}
			// }
			t[i] = tmp[i];
			t[i + 1] = tmp[i + 1];
			t[i + 2] = tmp[i + 2];
			t[i + 3] = tmp[i + 3];
		}
		System.out.println("INST - sll changed : " + sll);
		return t;
	}

	private boolean sllcheck(byte b, byte c, byte d, byte e) {
		// TODO Auto-generated method stub
		// 401a 0400 bc de
		// 0004 1a40 ed cb
		if ((e & 0xff) == 0x00) {// 00000000
			if ((d & 0xe0) == 0x00) {// 000
				// ***** ******** ** 5 + 8 + 2 = 15
				if ((b & 0x3f) == 0x00) {// ...............000000
					// if()//00000000 000ttttt dddddaaaaa000000
					if (((d & 0x1f) != 0) && ((c & 0xf8) != 0)
							&& ((c & 0x07) != 0 || (b & 0xc0) != 0))
						return true;
				}
			}
		}
		return false;
	}

	public void Exec(String s) throws Exception {
		// TODO Auto-generated method stub
		// Mode = 3;//show it is run
		if (s == null) {
			byte[] tmp = new byte[1];
			tmp[0] = (byte) 0xff;
			// this.PrintArray(tmp);
			this.Send(tmp);
			return;
		}
		byte[] stm;
		if (Mode == 3)
			stm = hexStringToBytes(s);
		else {
			// System.out.print(s);
			if (enable_os) {
				byte[] tmps = new byte[1];
				s = s + '\n';
				int slen = s.length();
				for (int i = 0; i < slen; i++) {
					tmps[0] = (byte) (((byte) s.charAt(i)) & 0xff);
					this.Send(tmps);
					Thread.sleep(200);
				}
				this.Send(tmps);
				return;
			} else {
				// System.out.print(s);
				stm = s.getBytes();// if(Mode == 4)
			}
		}
		this.Send(stm);
		Thread.sleep(200);
	}

	public static byte[] hexStringToBytes(String hexString) {
		if (hexString == null || hexString.equals("")) {
			return null;
		}
		hexString = hexString.toUpperCase();
		int length = hexString.length() / 2;
		char[] hexChars = hexString.toCharArray();
		byte[] d = new byte[length];
		for (int i = 0; i < length; i++) {
			int pos = i * 2;
			d[i] = (byte) (charToByte(hexChars[pos]) << 4 | charToByte(hexChars[pos + 1]));
		}
		return d;
	}

	private static byte charToByte(char c) {
		return (byte) "0123456789ABCDEF".indexOf(c);
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

	public String Bytes2HexString(byte[] b, int length) {
		String ret = "";
		for (int i = 0; i < length; i++) {
			String hex = Integer.toHexString(b[i] & 0xFF);
			if (hex.length() == 1) {
				hex = '0' + hex;
			}
			ret += hex.toUpperCase();
		}
		return ret;
	}

	public static String RemoveSp(String str) {
		return str.replaceAll("\n", "").replaceAll("\r", "").trim();
	}

	// old_version possible method - 17/11/2015
	public void SendTxtFile(File file, int address_start) throws Exception {
		// System.out.println(length);
		FileInputStream input = new FileInputStream(file);
		int length = input.available();
		byte[] tmp = new byte[length];
		input.read(tmp);
		// close the file inputstream
		input.close();
		// begin = address_start;
		System.out.println(new String(tmp));
		tmp = hexStringToBytes(new String(tmp));
		length = tmp.length;
		System.out.print(length);
		byte[] msg = new byte[length + 7];
		msg[0] = (byte) (0xf3);
		msg[1] = (byte) (address_start & 0xff);
		msg[2] = (byte) ((address_start >> 8) & 0xff);
		msg[3] = (byte) ((address_start >> 16) & 0xff);
		int address_end = address_start + length;// / 4
		msg[4] = (byte) (address_end & 0xff);
		msg[5] = (byte) ((address_end >> 8) & 0xff);
		msg[6] = (byte) ((address_end >> 16) & 0xff);
		// send file Msg
		for (int i = 0; i < length; i += 4) {
			msg[i + 7] = tmp[i];
			msg[i + 8] = tmp[i + 1];
			msg[i + 9] = tmp[i + 2];
			msg[i + 10] = tmp[i + 3];
		}
		this.PrintArray(msg);
		this.Send(msg);
		// recive a data
	}

	public void Revc(int start_address, int length) throws Exception {
		// TODO Auto-generated method stub
		if (start_address < 0x80000000) {
			System.out.println("RAM access invaild!, limit from 0x80000000");
			start_address = 0x80000000;
		}
		int end_address = length + start_address;
		if (end_address >= 0x90000000) {
			System.out.println("RAM access invaild!, limit to 0x8fffffff");
			end_address = 0x8fffffff;
		}
		byte[] msg = new byte[7];
		msg[0] = (byte) (0x93);
		msg[1] = (byte) (start_address & 0xff);
		msg[2] = (byte) ((start_address >> 8) & 0xff);
		msg[3] = (byte) ((start_address >> 16) & 0xff);
		msg[4] = (byte) (end_address & 0xff);
		msg[5] = (byte) ((end_address >> 8) & 0xff);
		msg[6] = (byte) ((end_address >> 16) & 0xff);
		this.Send(msg);
	}

	@SuppressWarnings("unused")
	private void deal_event() throws Exception {
		// TODO Auto-generated method stub
		while (inputstream.available() > 0) {
			numBytes = inputstream.read(readBuffer);
		}
		System.out.println("---------------------------");
		this.PrintLenArray(readBuffer, numBytes);
		System.out.println("---------------------------");
		readBuffer = new byte[10240];
	}

	// old_version methods
	public void PrintArray(byte[] st) {
		System.out.println(Bytes2HexString(st));
	}

	public void PrintLenArray(byte[] st, int length) {
		System.out.print(Bytes2HexString(st, length));
	}

	private void PrintAscii(byte[] readBuffer, int numBytes) {
		// TODO Auto-generated method stub
		System.out.print(new String(readBuffer, 0, numBytes));
	}

	private void PrintMem(byte[] readBuffer, int numBytes) {
		// TODO Auto-generated method stub
		// 4 + 40 + 1
		byte[] sp = new byte[numBytes - 5];
		System.arraycopy(readBuffer, 4, sp, 0, numBytes - 5);
		// System.out.print(numBytes);
		PrintLenArray(sp, numBytes - 5);
	}

	public byte RevcByte() {
		return 0;
	}

	public void Os_Input() {
		// TODO Auto-generated method stub

	}

}

class KeyBoard implements KeyListener {

	// Component component;

	public void AddListener() {

	}

	@Override
	public void keyPressed(KeyEvent arg0) {
		// TODO Auto-generated method stub

	}

	@Override
	public void keyReleased(KeyEvent arg0) {
		// TODO Auto-generated method stub

	}

	@Override
	public void keyTyped(KeyEvent e) {
		// TODO Auto-generated method stub

	}

}
