#include <stdio.h>
/**
 * main - a C program that prints the size of various types on the computer
 * Return: 0 (Genius)
 */


int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: 1 byte(s)\n", (unsigned long)sizeof(a));
printf("size of a int: 4  byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: 4 byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: 8 byte(s)\n", (unsigned long)sizeof(d));
printf("size of a float: 4 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
