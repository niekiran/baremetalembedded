#http://ww1.microchip.com/downloads/en/DeviceDoc/Frequently-Asked-Questions-4.9.3.26.txt
CC= arm-none-eabi-gcc
CFLAGS= -std=gnu11 -O0 -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -c -Wall
#LDFLAGS= -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -static --specs=nano.specs -T lss.ld -Wl,-Map="file.map" 

LDFLAGS= -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -static -lc_nano -lm -lg_nano  -T lss.ld -Wl,-Map="file.map"    
LDFLAGS_SEMI= -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -static  --specs=rdimon.specs  -T ls.ld -Wl,-Map="file.map" 


all:main.o led.o startup.o syscalls.o file.elf

semi:main.o led.o startup.o file_semi.elf


main.o: main.c
	$(CC) $(CFLAGS) -o $@ $^

led.o: led.c
	$(CC) $(CFLAGS) -o $@ $^

startup.o: startup_file.c
	$(CC) $(CFLAGS) -o $@ $^

#startup.o: st.s
#	$(CC) $(CFLAGS) -o $@ $^
	
syscalls.o: syscalls.c
	$(CC) $(CFLAGS) -o $@ $^

file.elf: main.o led.o startup.o syscalls.o
	$(CC) $(LDFLAGS) -o $@ $^
	
file_semi.elf: main.o led.o startup.o
	$(CC) $(LDFLAGS_SEMI) -o $@ $^


clean:
	rm -rf *.o *.elf

sec:
	arm-none-eabi-objdump -h final.elf

dis:
	arm-none-eabi-objdump -D final.elf

load:
	openocd -f board/stm32f4discovery.cfg


	
