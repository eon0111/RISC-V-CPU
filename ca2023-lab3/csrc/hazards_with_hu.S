.equ END, 0xC

.section .text
.global _start
_start:
  li    t1, END
  li    t0, 0x1
  addi  t0, t0, 0x1

# while t0 < t1
while:
  nop   # Se introducen 2 NOP's al comienzo del bucle para resolver el 'riesgo de control' que supone la instrucción de salto al final de cada ciclo, a demás del 'riesgo de datos' del tipo RAW al tener una lectura de 't0' en el salto, tras una escritura de ese mismo registro en el 'addi' inmediatamente anterior a esta la instrucción
  nop
  beq   t0, t1, while_end
  nop   # Solventamos el 'riesgo de control' introduciendo en el pipeline 2 NOP's tras el salto, de forma que no entre ninguna instrucción al pipeline hasta que el salto no se haya resuelto
  nop
  addi  t0, t0, 0x1
  j     while

while_end:
  nop
  nop
  li    sp, 0x1000
  addi  sp, sp, -0x4
  sw    t0, 0(sp)
  lw    t2, 0(sp)
  nop
  nop
  addi  t2, t2, 0x1
  addi  sp, sp, 0x4

loop:
  j loop
  nop
  nop
