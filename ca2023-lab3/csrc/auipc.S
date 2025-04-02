.section .text
.global _start
_start:
  jal   func
  auipc t0, 1
  li    t1, 1
  addi  t0, t0, 1

func:
  li    t1, 4
  addi  t1, t1, 1
  ret

loop:
  j loop