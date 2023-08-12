#include "main.h"

/**
 * main - Duplicates the contents of a file to another file.
 * @argc: Number of arguments passed.
 * @argv: Array of argument strings.
 * Return: 0 on success, exit status on failure.
 */
int main(int argc, char **argv)
{
    int source_fd, dest_fd, bytes_read;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s source_file dest_file\n", argv[0]);
        return (97);
    }

    source_fd = open(argv[1], O_RDONLY);
    if (source_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    dest_fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
    if (dest_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(source_fd);
        return (99);
    }

    while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0)
    {
        if (write(dest_fd, buffer, bytes_read) != bytes_read)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(source_fd);
            close(dest_fd);
            return (99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        close(source_fd);
        close(dest_fd);
        return (98);
    }

    if (close(source_fd) < 0 || close(dest_fd) < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
        return (100);
    }

    return (0);
}
