#include "main.h"

/**
* swap_int - swap the values of two integers
* *a - First Pointer
* *b - Second Pointer
* Return: Nothing.
*/

void swap_int(int *a, int *b)
{
  int x = *a;
  *a = *b;
  *b = x;
}
