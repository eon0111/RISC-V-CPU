.equ LOOP_END_VAL, 4

.section .text
.global _start
_start:
  li t1, 0
  li t2, LOOP_END_VAL
  loop_start:
    bgt t1, t2, loop_end
    addi t1, t1, 1
    j loop_start
  loop_end:
    j loop_end