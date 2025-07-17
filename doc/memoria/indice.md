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
	- Historia -> ISAs predecesores, creadores (fundadores de SiFive) y relevancia de la especificación hoy en día
	- Extensiones
	- Tipo y formato de las instrucciones en la extensión I

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
	- Descripción de la arquitectura de partida
		> Organización del diseño en módulos, uno por etapa
		> Diseño y funcionamiento del cargador (tocará hablar del conexionado entre el core y la memoria)
	- Implementación de las secciones de código pendientes
		> Hablar de la solución que se ha dado a cada hueco de código

5. El procesador segmentado
	- Primera aproximación: integración de registros de etapa de manera incremental
		> Comentario sobre las arquitecturas segmentadas y los problemas generados al segmentar el pipeline (dependencias de datos y de control, con ejemplos)
		> Comentario sobre la arquitectura interna de un registro de etapa
		> Comentario sobre la solución propuesta para separar la etapa de fetch del resto del pipeline
		> Comentario sobre los tests predefinidos
	- Segmentación del resto del pipeline
		> Integración del restro de registros de etapa en el pipeline -> hablar sobre la necesidad de hacer avanzar ciertas señales de control y datos
		> Desarrollo y funcionamiento de la unidad de amenazas -> hablar sobre cómo se resuelven las distintas dependencias de datos y de control que se dan entre etapas con distintas separaciones entre ellas
		> Comentario sobre el proceso de depuración -> desarrollo de programas en ensamblador que han ido creciendo para probar la resolución de los distintos tipos de amenazas

6. FPGA &rarr; UART, Wrapper, Vivado, generación del HDL, fichero de constraints
    - FPGA Xilinx Arty A7 - 100 &rarr; imagen

7. (Si da tiempo) Analisis rendimiento (Comparativa)
8. Conclusiones y trabajo futuro