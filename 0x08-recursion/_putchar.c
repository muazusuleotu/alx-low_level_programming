#include <unistd.h>

/**
 * putchar - to print characters to the stdout
 * @c - Charcter to print.
 *
 * Return: 1 on sucess
 * on error, return -1,errno is set appropriatly
 */

int _putchar(char c)
{
  return (write(1,&c,1));
}
