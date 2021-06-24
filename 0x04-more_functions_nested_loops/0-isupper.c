#include "holberton.h"

/**
 * _isupper - Entry point
 *
 *@c: Character to check if it's alphabet
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
  if((c <= 65 && (c  <= 122))
    {
      return (1);
    }
    else
      {
	return (0);
      }
}
