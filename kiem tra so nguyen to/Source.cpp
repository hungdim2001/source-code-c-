#include<iostream>
using namespace std;
bool kiemtraSNT(int n) {
	if (n < 2)
		return false;
	else
		for (int i = 2; i <= n / 2; i++)
			if (n % i == 0)
				return false;
			else
				return true;
}
int main() {
	int n;
	cout << " nhap n: ";
	cin >> n;
	if (kiemtraSNT(n))
		cout << "la so nguyen to";
	else
		cout << " khong la so nguyen to";

}
