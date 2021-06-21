#include<iostream>
using namespace std;
int bcnn(int a, int b) {
	int x = a * b;
	int max = a > b ? a : b;
	for (int i = max; i <= x; i++)
		if (i % a == 0 && i % b == 0)
			return i;

}
int ucln(int b, int a) {
	int min = a < b ? a : b;
	for (int i = min; i >= 1; i--)
		if (a % i == 0 && b % i == 0)
			return i;
}
int main() {
	int a, b;
	cout << " nhap a: ";
	cin >> a;
	cout << " \nnhap b: ";
	cin >> b;
	cout << "\nboi chung nho nhat: " << bcnn(a, b);
	cout << "\nuoc chung lon nhat: " << ucln(a, b);
}
