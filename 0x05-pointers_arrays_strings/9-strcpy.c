#include "holberton.h"
/**
 * *_strcpy - copies the string pointed
*@dest: copies of the string
*@src: origin of the string
*Return: dest destine copies
*/
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
