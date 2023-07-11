#include "main.h"
/* create_array - creates an array of char intialized with a specific char
 * @size: size of integer
 * @c: specific char
 * Return: pointer to array else NULL
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0) {
    return NULL;
  }

  char *ptr = malloc(sizeof(char) * size);
  if (ptr == NULL) {
    return NULL;
  }

  for (unsigned int a = 0; a < size; a++) {
    ptr[a] = c;
  }

  return ptr;
}
