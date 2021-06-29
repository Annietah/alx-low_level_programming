#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 *@s: string to reverse
 *Return: Nothing
 */
void print_rev(char *s)
{
  int strlen = 0;
while (*s != '\0')
  {
    strlen++;
    s++;
  }
 while (strlen != 0)
   {
     _putchar(*s);
     s--;
     strlen--;
   }
 _putchar('\n');
}
