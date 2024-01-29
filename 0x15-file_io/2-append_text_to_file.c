#include "main.h"

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename: pointer to name of file
 *@text_content: content to be appended
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, len;

	if (filename == NULL)
		return (-1);

	len = 0;
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
		return (-1);
	fw = write(fo, text_content, len);
	if (fw == -1)
		return (-1);

	close(fo);

	return (1);
}
