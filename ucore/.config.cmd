deps_config := \
	src/kern-ucore/fs/Kconfig \
	src/kern-ucore/schedule/Kconfig \
	src/kern-ucore/mm/Kconfig \
	src/kern-ucore/Kconfig \
	/home/hust/git/ucore/src/kern-ucore/arch/mips/Kconfig

include/config/auto.conf: \
	$(deps_config)

$(deps_config): ;
