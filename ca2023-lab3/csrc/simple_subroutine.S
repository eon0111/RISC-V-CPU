.equ LOOP_END_VAL, 4

.section .text
.global _start
_start:
  li t1, 0
  li t2, LOOP_END_VAL

  # while (t1 <= t2)
loop_start:
  bgt t1, t2, loop_end
  mv  a0, t1   # Se pasa la variable acumuladora como argumento de la función add_one
  jal add_one # Guarda en 'ra' el PC+4 y salta a la función
  mv  t1, a0   # Guardamos el resultado
  j   loop_start
loop_end:
  j   loop_end

add_one:
  # Aquí debería guardar el contexto de la función llamadora en el stack, pero como es un
  # programita sencillo y queremos depurarlo, no lo hacemos
  mv    t0, a0
  addi  t0, t0, 0x1
  mv    a0, t0
  ret # Es lo mismo que hacer 'jalr x0, ra, 0', porque en ra se guarda la @ de retorno