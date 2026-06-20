.equ END, 0xC

.section .text
.global _start
_start:
  li    t1, END
  li    t0, 0x1
  addi  t0, t0, 0x1

# while t0 < t1
while:
  beq   t0, t1, while_end
  addi  t0, t0, 0x1
  j     while

while_end:
  li    sp, 0x1000
  addi  sp, sp, -0x4
  sw    t0, 0(sp)
  lw    t0, 0(sp)
  addi  t0, t0, 0x1
  addi  sp, sp, 0x4

loop:
  j loop