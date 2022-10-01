#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int long b;
	int long long c;
	char d;
	float f;

	printf("the size of an int is %lu bytes \n", sizeof(a));
	printf ("The size of a long int is %lu bytes \n", sizeof(b));
	printf("The size of a long long int is %lu bytes \n", sizeof(c));
	printf("The size of a char is %lu bytes \n", sizeof(d));
	printf("The size of a float is %lu bytes \n", sizeof(f));

}
