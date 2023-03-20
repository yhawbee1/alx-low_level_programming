#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int i, j;
	int n = 10;
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
			putchar(j + '0');
			if (j < n - 1)
	    {
		    putchar(',');
		    putchar(' ');
	    }
		}
	}
	putchar('\n');
	return 0;
}

