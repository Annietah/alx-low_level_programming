#include "holberton.h"
/**
 * main - calls the function _putchar
  * Return: 0 on success.
 */
int main(void)
{
  int i;
  char c[] = "Holberton";
  
  for (i = 0; i < 9; i++)
    {
      _putchar(c[i]);
    };
  _putchar('\n');
  return (0);
}
