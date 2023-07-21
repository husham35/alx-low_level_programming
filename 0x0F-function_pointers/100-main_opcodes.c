#include <stdio.h>
#include <stdlib.h>

/**
 * printOpcodes - check the code
 * @numBytes: number of bytes of opcode to print
 */
void printOpcodes(int numBytes)
{
	unsigned char  *mainPtr = (unsigned char *)printOpcodes;
	int i;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x ", mainPtr[i]);
	}

	printf("\n");
}

/**
 * main - check the code
 * @argc: argument counter
 * @argv: array or arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	printf("Opcodes of main function:\n");
	printOpcodes(numBytes);

	return (0);
}
