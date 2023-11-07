#include "main.h"
 /**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void	
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;


	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		a++;
		b++;
	}		


	dest[i] = '\0';
	return (dest);
}
 

