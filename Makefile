CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -mfloat-abi=soft -std=gnu11 -Wall -O0
LDFLAGS= -mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=nano.specs -T source/stm32_ls.ld -Wl,-Map=out/final.map
LDFLAGS_SH= -mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=rdimon.specs -T source/stm32_ls.ld -Wl,-Map=out/final.map

all: out/main.o out/led.o out/stm32_startup.o out/syscalls.o out/final.elf

semi: out/main.o out/led.o out/stm32_startup.o out/syscalls.o out/final_sh.elf

out/main.o: source/main.c
	mkdir -p out
	$(CC) $(CFLAGS) -o $@ $^

out/led.o: source/led.c
	mkdir -p out
	$(CC) $(CFLAGS) -o $@ $^

out/stm32_startup.o: source/stm32_startup.c
	mkdir -p out
	$(CC) $(CFLAGS) -o $@ $^

out/syscalls.o: source/syscalls.c
	mkdir -p out
	$(CC) $(CFLAGS) -o $@ $^
	
out/final.elf: out/main.o out/led.o out/stm32_startup.o out/syscalls.o
	$(CC) $(LDFLAGS) -o $@ $^
	
out/final_sh.elf: out/main.o out/led.o out/stm32_startup.o
	$(CC) $(LDFLAGS_SH) -o $@ $^

clean:
	rm -rf out/

load:
	openocd -f board/stm32f4discovery.cfg 
