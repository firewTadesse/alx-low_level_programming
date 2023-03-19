#include <stdio.h>
/**
 * main - a program the prints various data type
 * Return: 0 when successfull
 */
int main(void)
{
	printf("Size of char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
