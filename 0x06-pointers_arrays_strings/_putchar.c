#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c - character to print
 * 
 * Return: On success 1
 * On error,-1 and errno is set appropristely
 */

int _putchar(char c)
{
  return(write(1,&c,1));
}
