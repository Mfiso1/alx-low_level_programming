#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add
 * Return: 1 on success else-1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, fwrite, c;
if (filename == NULL)
return (-1);
file = open(filename, O_APPEND | O_RDWR, 0664);
if (file == -1)
return (-1);
if (text_content != NULL)
{
for (c = 0; text_content[c]; c++)
{
fwrite = write(file, &text_content[c], 1);
if (fwrite == -1)
{
close(file);
return (-1);
}
}
}
close(file);
return (1);
}
