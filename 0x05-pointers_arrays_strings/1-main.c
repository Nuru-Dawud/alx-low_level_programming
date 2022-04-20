<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * main - checks my code
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
=======
  1 #include "main.h"
  2 #include <stdio.h>
  3
  4 /**
  5  * main - checks my code
  6  *
  7  * Return: Always 0
  8  */
  9
 10 int main(void)
 11 {
 12         int a;
 13         int b;
 14
 15         a = 98;
 16         b = 42;
 17         printf("a=%d, b=%d\n", a, b);
 18         swap_int(&a, &b);
 19         printf("a=%d, b=%d\n", a, b);
 20         return (0);
 21 }
>>>>>>> 5fb835c341f288bb99af6df6e5076301d80e5cdf
