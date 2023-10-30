#include "main.h"

/**
 * print_alphabet_x10 - Enty point
 *
 * Description: prints alphabets in lowercase followed by new line
 *
 * Return: Always 0 (succes)
 */

void print_alphabet_x10(void)
{
	char alph[] = "a,b,c,d,e,f,g,h,i,j,k,j,m,n,o,p,q,r,s,t,u,v,w,x,y,z";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 24; j++)
		_putchar(alph[j]);
	}
	_putchar('\n');
}
