cmd_drivers/rtc/built-in.o :=  /root/Kernel/toolchain/prebuilt/arm-eabi-4.4.3/bin/arm-eabi-ld -EL    -r -o drivers/rtc/built-in.o drivers/rtc/rtc-lib.o drivers/rtc/hctosys.o drivers/rtc/rtc-core.o drivers/rtc/alarm.o drivers/rtc/alarm-dev.o drivers/rtc/rtc-max77686.o drivers/rtc/rtc-s3c.o 
