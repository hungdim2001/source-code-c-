#include<iostream>
using namespace std;
int demsouoc(int n) {
	int dem = 0; 
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			dem++;
	}
	return dem;
}
int main() {
	int n;
	cout << " nhap so nguyen n: ";
	cin >> n;
	cout << " so uoc cua " << n << " la: " << demsouoc(n);
}