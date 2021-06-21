#include<iostream>
using namespace std;
bool sohoanthien(int number) {
	int check = 0;
	for (int i = 1; i <= number / 2; i++) {
		if (number % i == 0)
			check = check + i;
	}
	if (check == number)
		return true;
	else return false;

}
int main() {
	int number;
	cout << " nhap number: ";
	cin >> number;
	if (sohoanthien(number))
		cout << "\nla so hoan thien ";
	else
		cout << "\nkhong la so hoan thien";
}