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
