#!/bin/bash

strUso="[*] INFO.: Uso:\n\tasmdump [src].S\n"
strErrNArgs="[!] ERROR: número insuficiente de argumentos"
strErrFich404="[!] ERROR: el fichero \"$1\" no existe. Saliendo..."

# 1. Comprobar parámetros del script
if [[ $# == 0 ]]; then
	echo $strErrNArgs
	printf "$strUso"
	echo "[!] Saliendo..."
	exit 1
fi

if [[ ! -f $1 ]]; then
	echo $strErrFich404
	exit 1
fi

if [[ -f $memFile ]]; then
	rm $memFile
fi

# 2. Generar código objeto y exportar a un fichero
riscv64-unknown-elf-as -R -march=rv32i -mabi=ilp32 -o tmp.o $1
riscv64-unknown-elf-objdump -d tmp.o

# 3. Eliminar fichero temporal
rm tmp.o
