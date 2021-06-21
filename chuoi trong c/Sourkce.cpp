#include <iostream>
#include <conio.h>
using namespace std;
bool test(int number)
{
	int i;
	int newnumber = 0;
	int n = number;
	while (n > 0)
	{
		i = n % 10;
		n = n / 10;
		newnumber = newnumber * 10 + i;
	}
	if (number == newnumber)
		return true;
	else
		return false;
}
bool test1(int number)
{
	int i;
	int newnumber = 0;
	int n = number;
	while (n > 0)
	{
		i = n % 10;
		n = n / 10;
		newnumber = newnumber + i;
	}
	if (newnumber % 10 == 0)
		return true;
	else
		return false;
}
int main()
{
	int number;
	cout << " nhap number: ";
	cin >> number;
	int check = test(number);
	int test = test1(number);
	if (check == 0 && test == 0)
		cout << number << " khong phai so thuan nghich khong chia het cho 10 ";
	else
		cout << number << " la so thuan nghich chia het cho 10";
	_getch();
	return 0;
}