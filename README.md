# baremetalembedded

Understanding build procedure and linker script for bare metal embedded systems(ARM Cortex Mx)

## Build Instructions

### Prerequisites
- GNU Arm Embedded Toolchain (arm-none-eabi-gcc)
- Make utility

### Windows
1. Download and install GNU Arm Embedded Toolchain from [official site](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads).
2. Add the toolchain bin directory to your PATH environment variable.
3. Open Command Prompt or PowerShell in the project directory.
4. Run `make` to build the project.

### Mac
1. Install Homebrew if not already installed: `/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. Install the toolchain: `brew install arm-none-eabi-gcc`
3. In Terminal, navigate to the project directory.
4. Run `make` to build the project.

### Linux (Ubuntu/Debian)
1. Install the toolchain: `sudo apt update && sudo apt install gcc-arm-none-eabi`
2. Navigate to the project directory in Terminal.
3. Run `make` to build the project.

## Project Structure

| File                  | Description |
|-----------------------|-------------|
| Makefile              | Build script for compiling source files and linking into ELF binaries. |
| source/main.c         | Main application code implementing a simple task scheduler for ARM Cortex-M. |
| source/led.c          | LED control functions for STM32 board. |
| source/led.h          | Header file with LED definitions and function prototypes. |
| source/main.h         | Header file with main application constants and macros. |
| source/stm32_startup.c| Startup code for initializing the STM32 microcontroller. |
| source/stm32_ls.ld    | Linker script defining memory layout for STM32. |
| source/syscalls.c     | System call implementations for bare-metal environment. |
