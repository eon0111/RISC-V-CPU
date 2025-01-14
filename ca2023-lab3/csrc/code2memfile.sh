#!/bin/bash

strUso="[*] INFO.: Uso:\n\tcode2memfile [src].c\n"
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

memFile="$(echo "$1" | cut -d '.' -f 1).asmbin.txt"

if [[ -f $memFile ]]; then
	rm $memFile
fi

# 2. Obtener código objeto
riscv64-unknown-elf-gcc -O0 -Wall -march=rv32i -mabi=ilp32 -S $1 -o tmp.S
riscv64-unknown-elf-as -R -march=rv32i -mabi=ilp32 -o tmp.o tmp.S

desensamblado=$(riscv64-unknown-elf-objdump -d tmp.o)
nLineasDesensamblado=$(echo "$desensamblado" | wc -l)
instrRaw=$(echo "$desensamblado" | tail -n $(($(($nLineasDesensamblado)) - 7)) | awk '{print $2}')
rm tmp.o
rm tmp.S

# 3. Generar memfile
i=0
for instr in $(echo "$instrRaw"); do
	if [[ ! $instr =~ ^'<' ]]; then
		printf "@%x\n" $i >> $memFile
		echo $instr >> $memFile
		i=$(($i+1))
	fi
done
# TODO: en los ejemplos mete 3 NOPs al final del programa
