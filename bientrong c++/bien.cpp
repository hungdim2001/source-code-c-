#include <stdio.h>
#include <conio.h>
int main()
{
	int a = getchar();
	while (a != ' \n')
	{
		putchar(a++);

		putchar(++a);
	}
	getch();
}
