#include<iostream>
using namespace std;
// cot hang
/*21 22 23 24 25
  20  7  8 9  10
  19  6	1  2  11
  18 5  4  3  12
  16 17 15 14 13
*/
void taomatran(int arr[][100], int n) {
	int hang = n - 1;
	int cot = n - 1;
	int d = 0;
	int gt = 25;
	while (d <= n / 2)
	{
		for (int i = cot; i >= d; i--){
			arr[i][d] = gt--; 
		}
		for (int i = d + 1; i <= hang; i++)
			arr[d][i] = gt--;
		for (int i = d + 1; i <= cot; i++)
			arr[i][hang] = gt--;
		for (int i = hang - 1; i > d; i--)
			arr[hang][i] = gt--;
		hang--;
		cot--;
		d++;
	}
}
void Outputarr(int arr[][100], int h, int c)
{
	printf("\n");
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf(" %d\t", arr[j][i]);
		}
		printf("\n");
	}
}
int main() {
	int arr[100][100];
	taomatran(arr, 5);
	Outputarr(arr, 5, 5);
}