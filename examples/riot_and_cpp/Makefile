# name of your application
APPLICATION = riot_and_cpp

# If no BOARD is found in the environment, use this default:
BOARD ?= native

# This has to be the absolute path to the RIOT base directory:
RIOTBASE ?= $(CURDIR)/../..

# Uncomment these lines if you want to use platform support from external
# repositories:
#RIOTCPU ?= $(CURDIR)/../../../thirdparty_cpu
#RIOTBOARD ?= $(CURDIR)/../../../thirdparty_boards

# Uncomment this to enable scheduler statistics for ps:
#CFLAGS += -DSCHEDSTATISTICS

# If you want to use native with valgrind, you should recompile native
# with the target all-valgrind instead of all:
# make -B clean all-valgrind

# Uncomment this to enable code in RIOT that does safety checking
# which is not needed in a production environment but helps in the
# development process:
#CFLAGS += -DDEVELHELP

# Change this to 0 show compiler invocation lines by default:
QUIET ?= 1

# Blacklist boards
BOARD_BLACKLIST := arduino-due avsextrem chronos mbed_lpc1768 msb-430h msba2 redbee-econotag telosb wsn430-v1_3b wsn430-v1_4 msb-430 pttu udoo qemu-i386 z1
# This example only works with native for now.
# msb430-based boards: msp430-g++ is not provided in mspgcc.
# (People who want use c++ can build c++ compiler from source, or get binaries from Energia http://energia.nu/)
# msba2: some changes should be applied to successfully compile c++. (_kill_r, _kill, __dso_handle)
# others: untested.

# If you want to add some extra flags when compile c++ files, add these flags
# to CXXEXFLAGS variable
CXXEXFLAGS +=

include $(RIOTBASE)/Makefile.include