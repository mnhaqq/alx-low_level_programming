#include "main.h"

#define BUFSIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fr, fw, x, a, b;
	char buf[BUFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fr = open(argv[1], O_RDONLY);
	if (fr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fw = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fr, buf, BUFSIZE)) > 0)
	{
		if (fw < 0 || write(fw, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fr);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(fr);
	b = close(fw);
	if (a < 0 || a < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw);
		exit(100);
	}
	return (0);
}
