#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
//demo tro choi
void Mangluucaclandoan(int* arr, int n)// mang luu so lan doan va cac gia tri
{

}
int  taogiatribandaucuaN() {

	int N = 0 + rand() % 100; // gia tri N trong khoang[0, 100]
	return N;
}

int main()
{
	srand(time(NULL)); //khoi tao bo sinh so ngau nhien
	int N;// gia tri can doan
	int* arr;// mang luu cac gia tri da doan
	int n = 1;// so lan doan
	N = taogiatribandaucuaN();
	while (true) {
		arr = (int*)malloc(n * sizeof(int));// cap phat bo nho dong cho con tro
		printf(" nhap gia tri ma ban can doan");
		scanf("%d", arr + n);
		if (N == *(arr + n)) {

			printf("/nban da doan dung so %d roi. Ban da thu sau %d lan. Chung mung ban", N, n);
			break;
		}
	}
	getch();
	return 0;
}