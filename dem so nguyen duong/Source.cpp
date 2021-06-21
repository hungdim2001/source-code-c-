#include<iostream>
#include<conio.h>
using namespace std;
int CoutNumber(int number) {
	int n = number;
	int out = 0;
	while (n > 0) {
		n = n / 10;
		out++;
	}
	return out;
}
int dequy(int number, int &out) {
	int n = number;
	if (n > 0) {
		n = n / 10;
		out++;
		return dequy(n, out);
	}
	
}
int demSoChuSoDeQuy(int number)
{
	if (number > 0) {
		number = number / 10;;
		return 1+ demSoChuSoDeQuy(number);
	}
	return 0;
}
int main() {
	int number;
	int out = 0;
	cout << " nhap number: ";
	cin >> number;
	cout << "\n" << number << " co: " <<demSoChuSoDeQuy(number) << " chu so";
	_getch();
	return 0;
}