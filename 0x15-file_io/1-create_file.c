#include "main.h"

/**
 *create_file - function that creates a file
 *@filename: pointer to name of file
 *@text_content: string to write to file
 *Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fo, fw, len;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fo == -1)
		return (-1);

	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fw = write(fo, text_content, len);
	if (fw == -1 || fw != len)
		return (-1);

	close(fo);
	return (1);
}
