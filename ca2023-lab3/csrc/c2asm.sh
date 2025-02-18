#!/bin/bash

strUso="[*] INFO.: Uso:\n\tcode2assembly [src].c\n"
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

# filename="$(echo "$1" | cut -d '.' -f 1).txt"

if [[ -f $memFile ]]; then
	rm $memFile
fi

# 2. Generar ensamblador y exportar a un fichero
riscv64-unknown-elf-gcc -O0 -Wall -march=rv32i -mabi=ilp32 -S $1 -o tmp.S
riscv64-unknown-elf-as -R -march=rv32i -mabi=ilp32 -o tmp.o tmp.S
riscv64-unknown-elf-objdump -d tmp.o # > $filename

# 3. Eliminar ficheros temporales
rm tmp.S
rm tmp.o
