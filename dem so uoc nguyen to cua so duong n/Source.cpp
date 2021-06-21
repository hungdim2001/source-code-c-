#include<iostream>
using namespace std;
void phantichSNT(int number) {
	int n = number;

	cout << "\n" << number << "=";
	for (int i = 2; i <= n ; i++) {
		int dem = 0;
		while (n % i == 0) {
			dem++;
			n /= i;
		}
		if (dem != 0) {
			cout << i;
			if (dem > 1)
				cout << "^" << dem;
			if (n > i)
				cout << "*";
		}
	}
}
int main() {
	int n;
	cout << " nhap gia tri cua n: ";
	cin >> n;
	phantichSNT(n);
}