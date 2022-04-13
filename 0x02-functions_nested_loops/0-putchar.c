#include <stdio.h>
/*
 *  This is the description of main
 */ 
int main(void)
{
/* 
 *  Get the character to be written
 */
	char h[] = "_putchar";
	int m;
	m = 0;

	while (m <= 8)
	{
		putchar(h[m]);
		m++;
	}
	putchar('\n');  
    return (0);
}
