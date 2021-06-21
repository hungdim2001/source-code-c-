#include<iostream>
using namespace std;
void fibo(int n) {
	long int a = 0;
	long int b = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << a << "\t";
		b += a;
		a = b - a;
	}
}
int dequy(int n) {
	if (n == 1 or n == 0)
		return 1;
	else
		return dequy(n - 1) + dequy(n - 2);
}

int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		cout << dequy(i) << "  ";
}