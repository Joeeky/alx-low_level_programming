#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file -Establish a file and embeded text into it
 * apply 600 permission,leave unchanged if already set
 * @filename:file appellation
 * @text_content: information to embed in the file
 * Return:Return a positive value 1 for success
 * nagetive value -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlen = 0, ptr = text_content; *ptr; ptr++)
			inlen++;
		length = write(file, text_content, inlen);
	}

	if (close(file) == -1 || inlen != length)
		return (-1);
	return (1);
}
