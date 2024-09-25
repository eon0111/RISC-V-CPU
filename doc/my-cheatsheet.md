# Scala/Chisel cheatsheet

### VARIABLES Y CONSTANTES

```var``` &rarr; variables  
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

[comment]: <> (// TODO: no entiendo la utilidad de la función 'peek') 

