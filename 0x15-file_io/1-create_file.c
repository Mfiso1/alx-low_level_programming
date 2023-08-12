#include "main.h"

/**
 * create_file - create file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write in file
 * Return: 1 on success else -1
 */
int create_file(const char *filename, char *text_content)
{
int file, fwrite, c;
if (filename == NULL)
return (-1);
file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (file == -1)
return (-1);
if (text_content != NULL)
{
for (c = 0; text_content[c]; c++)
fwrite = write(file, text_content, c);
if (fwrite == -1)
return (-1);
}
close(file);
return (1);
}
