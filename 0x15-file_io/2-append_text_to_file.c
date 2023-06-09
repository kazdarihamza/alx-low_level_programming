#include "main.h"

/**
 * _strlen - a function that appends text at the end of a file.
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
* append_text_to_file - a function that appends text at the end of a file.
* @filename: file
* @text_content: appends this content into file
* Return: 1 on success, -1 on error
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w = write(fd, text_content, _strlen(text_content));
	if (w == -1 || w != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	return (1);
}
