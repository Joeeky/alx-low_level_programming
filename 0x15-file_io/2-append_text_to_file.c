#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Generate a file and incorporate text in it
 * permission with 600 do not adjust if exist already
 * @filename: name for file
 * @text_content: content for insertion of file
 * Return:Return a positive value 1 for success
 * and a negative value -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length = 0, inlen = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
