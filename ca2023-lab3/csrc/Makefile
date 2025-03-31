CROSS_COMPILE ?= riscv64-unknown-elf-

ASFLAGS = -march=rv32i -mabi=ilp32
CFLAGS = -O0 -Wall -march=rv32i -mabi=ilp32
LDFLAGS = --oformat=elf32-littleriscv

AS := $(CROSS_COMPILE)as
CC := $(CROSS_COMPILE)gcc
LD := $(CROSS_COMPILE)ld
OBJCOPY := $(CROSS_COMPILE)objcopy

%.o: %.S
	$(AS) -R $(ASFLAGS) -o $@ $<
%.elf: %.S
	$(AS) -R $(ASFLAGS) -o $(@:.elf=.o) $<
	$(CROSS_COMPILE)ld -o $@ -T link.lds $(LDFLAGS) $(@:.elf=.o)
%.elf: %.c init.o
	$(CC) $(CFLAGS) -c -o $(@:.elf=.o) $<
	$(CROSS_COMPILE)ld -o $@ -T link.lds $(LDFLAGS) $(@:.elf=.o) init.o

%.asmbin: %.elf
	$(OBJCOPY) -O binary -j .text -j .data $< $@

BINS = \
	hazards_with_nops.asmbin\
	hazards_with_hu.asmbin\
	sb.asmbin\
	# fibonacci.asmbin \
	# mmio.asmbin \
	# quicksort.asmbin \
	# simple2.asmbin \
	# simple_subroutine.asmbin\

# Clear the .DEFAULT_GOAL special variable, so that the following turns
# to the first target after .DEFAULT_GOAL is not set.
.DEFAULT_GOAL :=

all: $(BINS)

update: $(BINS)
	cp -f $(BINS) ../src/main/resources

clean:
	$(RM) *.o *.elf *.asmbin
