# Scala/Chisel cheatsheet

### VARIABLES Y CONSTANTES

```var``` &rarr; variables (no usar **NUNCA** para definir variables de Chisel)  
```val``` &rarr; constantes

---
### CONDICIONALES

```scala
if (condición) { ... }
```

... o ...

```scala
if (condición)
	...
else
	...
```

... o ...

```scala
if (condición) {
	...
} else if (condición) {
	...
} (...) else {
	...
```

... o ...

```scala
val const = if (condición) <valor1> else <valor2>
```

---
### FUNCIONES

```scala
def funcion(<arg1>: <tipoArg1>, ...) <tipoRetorno> = {
	...
	<returnvalor>	// Aquí se indica el nombre de la variable cuyo valor quiere retornarse, o una
					// cláusula 'if' del tipo: if(c) v1 else v2
}
```
Puedes definir dos funciones con el mismo nombre pero que reciban argumentos distintos, y definir funciones en una línea sin corchetes si solo constan de una instrucción, o con corchetes y ';' para separar cada función en la misma línea

```scala
def dobla(valor: Int): Int = 2 * valor
def cuadriplica(valor: Int): Int = { var res = 2 * valor; res * 2 }
```

Puedes anidar la definición de funciones, de forma que las funciones que definas en el scope de una, solo serán visibles en su scope

```scala
def funcion(<arg>: <tipo>, ...): <tipo> = {
	def anidada(<arg>: <tipo>, ...): <tipo> = {
		...
		<retorno>
	}
	...
	<retorno>
}
```

Si en la invocación de una función indicas el nombre de los parámetros, puedes pasarle los parámetros en cualquier orden, por ejemplo:

```scala
def func(arg1: Int, arg2: Int) { ... }

// ...

func(<valArg1>, <valArg2>)

// ... o ...

func(arg2: <valArg2>, arg1: <valArg1>)
```

En la definición de una función puedes indicar un valor por defecto para los parámetros en caso de que al invocar la función no se indique un valor para esos parámetros.

```scala
def func(arg1: Int, arg2: Int, arg3: Int = 10) { ... }

// ...

func(1, 2, 3)	// arg1 = 1, arg2 = 2, arg3 = 3
func(1, 2)		// arg1 = 1, arg2 = 2, arg3 = 10
```

---
### LISTAS

Definimos una lista simple del modo siguiente:

```scala
val listaSimple = List(<componente1>, ...)
```

Podemos componer una lista con los valores de las constantes o variables que se indiquen, no con sus referencias de forma que, aunque se altere el valor de alguna de las componentes, la lista permanece inalterada. Por ejemplo:

```scala
var x = 1
var y = 2
var z = 3
val listaVariables = x :: y :: z
```

También se pueden concatenar listas:

```scala
val listaCompuesta = listaSimple++listaVariables
```

- **TIP:** Algunas funciones interesantes son ```<lista>.length``` o ```<lista>.size```. Ambas retornan el número de eltos. en la lista.  
	Otros métodos que pueden invocarse sobre listas son ```<lista>.head``` o ```<lista>.tail```.

- **TIP:** Se accede a los eltos. de una lista con ```<lista>(posición)```. Las listas se indexan desde el 0, no desde el 1.

- **TIP:** Los eltos. de una lista se modifican del modo siguiente:

```scala
<lista>.updated(<indiceEltoAReemplazar>, <nuevoValor>)
```

- **TIP:** Puedes invocar transformaciones de todos los eltos. de una lista por	medio del método 'map'. Por ejemplo:

```scala
val lista1 = List(1, 2, 3)
// Convertimos los eltos. de lista1 en strings
val lista2 = lista1.map { i => i.toString }
```

---
### FOR

Para iterar en el rango ```[ini, fin]```:

```scala
for (i <- <ini> to <fin>) { ... }
```

Lo mismo que antes pero con paso != 1 sería:

```scala
for (i <- <ini> to <fin> by <paso>) { ... }
```

Para iterar en el rango ```[ini, fin)```:

```scala
for (i <- <ini> until <fin> { ... }
```

Para iterar sobre los eltos. de una lista:

```scala
for (i <- <lista>) { ... }
```

---
### PAQUETES

```scala
paquete.scala:
	package <nombre>
	...

programa.scala
	import <nombre>._ / import <nombre>.<componente>
	...
```

Los nombres de los paquetes van todo en minúsculas. Si el nombre de un paquete es largo, lo que se suele hacer es crear una jerarquía de directorios con los que componer el nombre, por ejemplo:

```scala
import meganombredepaquete ---> import mega.nombre.de.paquete
```

- **TIP:** Para indicarle al compilador que quieres importar todos los componentes de un paquete no se usa '*' como en Java, sino que se usa '\_', como en el ejemplo de import de arriba (import <nombre>.\_)

---
### CLASES

```scala
class <Nombre>(<param>: <tipo>, ...) {
	...
}

var <nombre> = new <Clase>(...)

```
- **TIP:** ^or defecto, los miembros de una clase (atributos y métodos) son públicos, a no ser que se declaren explícitamente como privados. Por ejemplo:

```scala
class <Nombre>(<param>: <tipo>, ...) {
	private <var/val> <nombre>: <tipo> = <valor>
	private def <método>(<arg>: <tipo>) {
		...
	}
	...
}
```

---
### MÓDULOS

Construcción básica:

```scala
class <nombreModulo>(<arg1>: <tipoArg1, ...>) extends Module {

	val io = IO(new Bundle {
		val <puerto> = Input/Output(<tipoInput>)
	})

	// Comportamiento del módulo
}
```

- _El nombre del bundle debe ser exactamente 'io'_

Ejemplo de módulo (uno que pasa el valor de entrada directamente a la salida):

```scala
class Passthrough extends Module {
	val io = IO(new Bundle {
		val in = Input(UInt(4.W))	// Entero sin signo de 4 bits
		val out = Output(UInt(4.W))
	})

	io.out := io.in	// Las conexiones entre puertos son con el operador direccional ':='
}
```

Podemos traducir de Chisel a Verilog del modo siguiente:

```scala
getVerilog(new <nombreModulo>)

// Podemos mostrar la traducción en el terminal
println(getVerilog(new <nombreModulo>))
```
- **TIP:** Las clases que reciben parámetros y extienden la clase Module de Chisel ya no se llaman módulos, sino generadores, puesto que en función de sus argumentos pueden generarse módulos hardware con características distintas.

---
### TESTS

Sintáxis de un test:

```scala
test(new <modulo/generadorATestear>()) { c =>	// 'c' de circuito
	c.io.<puertoEntrada>.poke(<valorEntrada>)
	c.io.<puertoSalida>.expect(<valorEsperadoSalida>)
	...
}

// Si se muestra este mensaje es que todos los tests han pasado correctamente
println("PASSED")
```

---
### OPERACIONES

Para realizar operaciones con variables de tipos distintos, los casteos deben ser explícitos, es decir que si, por ejemplo, quieres sumar 1 y 1, y una de las variables la inicializas como entero sin signo (```1.U```), el otro tiene que estar inicializado del mismo modo:

```scala
val suma := 1.U + 1.U	// All good!
val suma := 1.U + 1		// Error: "incompatible types"
```

Pueden realizarse las operaciones clásicas de suma, resta y producto (```+```, ```-```, ```*```), además de otras operaciones integradas en Chisel como son el multiplexor (```Mux(<sel>, <val1>, <val2>)```) o la concatenación (```Cat(<val1>, <val2>)```). Su uso es como sigue:

```scala
val s = true.B
val res_mux = Mux(s, 3.U, 0.U)	// res_mux es 3.U dado que s es cierto
val res_cat = Cat(2.U, 1.U)		// res_cat es 0b10 << 1 + 0b1 = 0b101
```

---
### ```when```, ```elsewhen``` y ```otherwise```

Estas palabras clave de Chisel permiten elaborar constructos de lógica condicional. La estructura básica es como sigue:

```scala
when(condición1) {
	...
}.elsewhen(condición2) {
	...
}.otherwise {
	...
}
```

---
### Lógica secuencial

Podemos crear registros del siguiente modo:

```scala
Reg(<tipo>)	// <tipo> es alguno de los tipos de Chisel (UInt, SInt, etc.)

Reg(UInt(32.W))	// Un registro de 32 bits
```
Por defecto, todos los componentes que requieren una señal de reloj, reciben la misma señal de reloj para evitar tener que indicarla en todos los módulos. De este modo, cuando se invoca un tick del reloj, por ejemplo, desde un test (```c.clock.step(n)```, donde ```n``` es el número de ticks), todos los eltos. con estado reciben ese tick.

Existe un tipo "especial" de registro que no requiere indicar el tipo de dato que albergará. ```RegNext(...)``` puede inferir el tipo de dato en base al tipo de las entradas que recibirá, por ejemplo:

```scala
class RegNextModule extends Module {
  val io = IO(new Bundle {
    val in  = Input(UInt(12.W))
    val out = Output(UInt(12.W))
  })
  
  io.out := RegNext(io.in + 1.U)
}
```

La salida de este módulo será 1 + el valor de la entrada en el siguiente flanco ascendente del reloj.

También pueden crearse registros que estén inicializados a un valor concreto, por ejemplo:

```scala
// Dos formas de crear un registro inicializado a cero
val myReg = RegInit(UInt(12.W), 0.U)
val myReg = RegInit(0.U(12.W))
```

Internamente los registros cuentan con una señal de reset (en el Verilog) y, cuando se activa esta señal, su valor cambia al valor de reset indicado en su instanciación.




[comment]: <> (// TODO: no entiendo la utilidad de la función 'peek')
[comment]: <> (// TODO: no entiendo por qué no puedo definir una variable de Chisel como 'var')
[comment]: <> (// TODO: no me queda clara la diferencia entre los operadores '=' y ':=')
