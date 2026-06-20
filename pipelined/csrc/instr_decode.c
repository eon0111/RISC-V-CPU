#include <stdio.h>
#include <stdlib.h>

#define INSTR_WIDTH 8

void decode(char *instr, char *decoded)
{
	
}

void main()
{
	char *instruction = (char *)malloc((INSTR_WIDTH + 1) * sizeof(char));
	char *decoded     = (char *)

	printf("[*] Instruction (hex): ");
	fgets(instruction, INSTR_WIDTH + 1, stdin);

	free(instruction);

	exit(0);
}
