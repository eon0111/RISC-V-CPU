## Índice

1. Introducción
	- Motivación
	- Objetivos
	- Planificación y metodología seguidos
	- Realización de formaciones &rarr; [Scala + Chisel](https://github.com/freechipsproject/chisel-bootcamp)
	- Construcción del procesador monociclo &rarr; [Sysprog](https://hackmd.io/@sysprog/r1mlr3I7p)
	- Construcción del procesador segmentado
		- **Primera aproximación:** segmentación en dos etapas
		- **Siguientes aproximaciones:** segmentación en cinco etapas (*+ justificación de por qué no se siguió incrementando el no. de etapas*)
	- Implementación sobre FPGA
	- *(y si da tiempo)* Evaluación del desempeño del diseño segmentado frente al diseño monociclo


2. RISC-V &rarr; historia, creadores, relevancia hoy en día, etc. Contexto general relativo al ISA

3. Herramientas y tecnologías empleadas
	- Chisel (Entidad = chicha)
	   - Historia y enlace con RISC-V
	   - Algún ejemplo
	- SBT &rarr; poner un ejemplillo de un ```build.sbt```
	- RISCV GNU Toolchain **?** &rarr; (tengo que buscar en el Ubuntu el paquete concreto que instalé en su momento
	- Herramientas de apoyo a la depuración &rarr; ```c2asm.sh``` + ```asmdump.sh```
	- GTKWave (Entidad)
	- Vivado
	- Git y GitHub
	
4. El procesador monociclo

5. El procesador segmentado
	- TODO:

6. FPGA &rarr; UART, Wrapper, Vivado, generación del HDL, fichero de constraints
    - FPGA Xilinx Arty A7 - 100 &rarr; imagen

7. (Si da tiempo) Analisis rendimiento (Comparativa)
8. Conclusiones y trabajo futuro