#include<iostream>
#include<conio.h>
using namespace std;
bool test(int number) {
	int newnumber = 0;
	int n = number;
	while (n > 0) {
		int i = n % 10;
		n = n / 10;
		newnumber = newnumber * 10 + i;
	}
	if (number == newnumber)
		return true;
	else
		return false;

}
int main() {
	int number;
	cout << "nhap number: ";
	cin >> number;
	if(test(number==true))
		cout << number<<" la so ngich dao";
	else 
		cout << number<< " ko la so ngich dao";

}