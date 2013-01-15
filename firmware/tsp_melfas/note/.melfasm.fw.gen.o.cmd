cmd_firmware/tsp_melfas/note/melfasm.fw.gen.o := /root/Kernel/toolchain/prebuilt/arm-eabi-4.4.3/bin/arm-eabi-gcc -Wp,-MD,firmware/tsp_melfas/note/.melfasm.fw.gen.o.d  -nostdinc -isystem /root/Kernel/toolchain/prebuilt/arm-eabi-4.4.3/bin/../lib/gcc/arm-eabi/4.4.3/include -I/root/Kernel/L900_LJC_Kernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include include/generated/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-exynos/include -Iarch/arm/plat-s5p/include -Iarch/arm/plat-samsung/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -gdwarf-2        -c -o firmware/tsp_melfas/note/melfasm.fw.gen.o firmware/tsp_melfas/note/melfasm.fw.gen.S

source_firmware/tsp_melfas/note/melfasm.fw.gen.o := firmware/tsp_melfas/note/melfasm.fw.gen.S

deps_firmware/tsp_melfas/note/melfasm.fw.gen.o := \
  /root/Kernel/L900_LJC_Kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

firmware/tsp_melfas/note/melfasm.fw.gen.o: $(deps_firmware/tsp_melfas/note/melfasm.fw.gen.o)

$(deps_firmware/tsp_melfas/note/melfasm.fw.gen.o):
