#include "main.h"

/**
 * read_textfile - reads and print text file to standard output
 * @filename: pointer to file text
 * @letters: no. of letters
 * Return: Number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, fread, fwrite;
char *tSize;
tSize = malloc(sizeof(char) * letters);
if (filename == NULL)
return (0);
if (tSize == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
fread = read(file, tSize, letters);
if (fread == -1)
return (0);
fwrite = write(STDOUT_FILENO, tSize, fread);
if (fwrite == -1)
return (0);
close(file);
free(tSize);
return (fwrite);
}
