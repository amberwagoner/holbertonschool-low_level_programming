#include <stdio.h>
#include <string.h>

/**
 * main - the entry point and beginning of our code
 *
 * Return: the string
 */
int main(void)
{
	/**
	 * char - identify string
	 */
	char str[];
	/**
	 * strcpy - copy string
	 */
	strcpy(str, "\"Programming is like building a multilingual puzzle");
	/**
	 * puts - print the string
	*/
	puts(str);
	return (0);
}
