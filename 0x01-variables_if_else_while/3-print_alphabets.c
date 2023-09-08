#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for alphabet printing program
 *
 * Description: This program prints the lowercase and uppercase alphabet
 *              in sequence, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

