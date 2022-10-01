#include <stdio.h>

/**
 * main - function the prints the number of arguments passed to it
 * @argc - prints the nuber of arguments used
 * Return: 0;
 */

int main(int argc,char __attribute__((__unused__)) *argv[])
{
  printf("%d\n",argc - 1);
  return (0);
}
