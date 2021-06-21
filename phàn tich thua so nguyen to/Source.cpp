#include<iostream>
using namespace std;
int main() {
	int n;
	cout << " nhap so can phan tich: ";
	cin >> n;
	int dem = 0;
	cout << "\n" << n << " = ";
	for (int i = 2; i <= n; i++) {
		dem = 0;
		while (n % i == 0)
		{
			n /= i;
			dem++;
		}
		if (dem) {
			if (dem == 1)
				cout << i;
			else
				cout << i << "^" << dem;
			if (n > i)
				cout << "*";
		}
	}
}


