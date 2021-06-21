#include<iostream>
using namespace std;
int main() {
	int year;
	cout << "nhap nam can kiem tra: ";// nam nhuan la nam chia het cho 4 nhung ko chia het cho 100;
	cin >> year;
	if ((year % 100 != 0) && (year % 4 == 0))
		cout << "\n la nam nhuan ";
	else
	cout << "\n ko la nam nhuan ";

}