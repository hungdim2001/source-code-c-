#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <random>
void nhapmang(int *p, int n)
{
	srand(time(NULL));

	for (int i = 0; i < n; i++)
		*(p + i)= rand() % 100;
}
void xuatmang(int *p, int n)
{ printf("\n");
	for (int i = 0; i < n; i++)
		printf("%d", *(p + i));
}
int tinhtong(int *p, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
		tong += *(p + i);
	return tong;
}
int main()
{
	int arr[100];
	int *p;
	p = &arr[0];
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	nhapmang(p,n);
	xuatmang(p,n);
	printf("tong =%d",tinhtong(p,n));
}
