#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
