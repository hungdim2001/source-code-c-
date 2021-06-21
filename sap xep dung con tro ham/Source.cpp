#include <iostream>
#include<functional>
#include<stdlib.h>
#include<ctime>
using namespace std;
bool lonhon(int,int );
bool behon(int ,int);
void doicho(int& a, int& b) {
	int n = a;
	a = b;
	b = n;
}
void sapxep(int* arr, int n, bool (*sosanhhaiphantu)(int, int) = lonhon){
	for (int i = 0; i < n - 1; i++)
		for (int j = i+1; j < n; j++)
			if (sosanhhaiphantu(arr[i], arr[j]))
				doicho(arr[i], arr[j]);
}
bool lonhon(int n, int m) {
	return n > m;
}
bool behon(int n, int m) {
	return n < m;
}
void mang(int n, int* arr) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		arr[i] = i;
}
void xmang(int n, int* arr) {
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}
int main() {
	int* arr, n;
	n = 9;
	arr = new int[n];
	mang(n, arr);
	xmang(n, arr);
	sapxep(arr, n);
	xmang(n, arr);
	sapxep(arr, n, behon);
	xmang(n,arr);
	delete[] arr;
}
