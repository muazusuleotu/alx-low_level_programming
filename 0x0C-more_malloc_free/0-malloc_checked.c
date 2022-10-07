#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b - unsigned int
 *
 * Return: nothing (0);
 */

void *malloc_checked(unsigned int b);
{
  void *mem = malloc(b);
  
  if (mem == NULL)
          exit(98);
  return (mem);
}
