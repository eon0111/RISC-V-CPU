.equ END, 0xC

.section .text
.global _start
_start:
  li    t1, END
  li    t0, 0x1
  nop   # Solventamos la dependencia RAW metiendo un NOP entre las instrucciones
  addi  t0, t0, 0x1

# while t0 < t1
here:
  nop   # Se introducen 2 NOP's al comienzo del bucle para resolver el 'riesgo de control' que supone la instrucción de salto al final de cada ciclo
  nop
  beq   t0, t1, loop
  nop   # Solventamos el 'riesgo de control' introduciendo en el pipeline 2 NOP's tras el salto, de forma que no entre ninguna instrucción al pipeline hasta que el salto no se haya resuelto
  nop
  addi  t0, t0, 0x1
  j     here

loop:
  nop
  nop
  j loop
