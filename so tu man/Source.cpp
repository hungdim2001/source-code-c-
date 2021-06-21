#include<iostream>
#include<math.h>;
using namespace std;
int coutnumber(int number) {// su dung de quy
	if (number > 0)
		return 1 + coutnumber(number / 10);
	return 0;
}
int check(int number, int i, int &k) {
	if (number > 0) {
		k = k + pow(number % 10, i);
			check(number / 10, i, k);
	}
	return k;
}
int main() {
	int number;
	cout << " nhap number: ";
	cin >> number;
	int i = coutnumber(number);
	int k = 0;
	if (check(number, i,k)==number)
		cout << " la so tu man:";
	else
		cout << " ko la so tu man:";
}