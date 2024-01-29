#include "main.h"

/**
 *read_textfile - function to read a text file and print to POSIX stdout
 *@filename: pointer to name of file
 *@letters: number of characters to be read
 *Return: number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, fr, fw;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	if (fo == -1)
	{
		free(buffer);
		return (0);
	}
	fr = read(fo, buffer, letters);
	if (fr == -1)
	{
		free(buffer);
		return (0);
	}
	fw = write(STDOUT_FILENO, buffer, fr);
	if (fw == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fo);
	return (fw);
}
