#include<iostream>
using namespace std;
bool kiemtranamnhuan(int nam) {
	if (nam % 4 == 0 and nam % 100 != 0)
		return true;
	else
		return false;
}
int tinhngayhople(int ngay,int thang ,int nam) {
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		ngay = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		ngay = 30;
		break;
	case 2:
		if (kiemtranamnhuan(nam) == true)
			ngay = 29;
		else
			ngay = 28;
		break;
	}
	return ngay;
}
bool kiemtrangayhople(int ngay, int thang, int nam) {
	if (thang < 1 || thang >12)
		return false;
	if (nam < 0)
		return false;
	if(ngay<1|| ngay>tinhngayhople(ngay,thang,nam))
		return false;
	return true;
}
int main() {
	int ngay, thang, nam;
	cout << " nhap ngay: ";
	cin >> ngay;
	cout << " \nnhap thang: ";
	cin >> thang;
	cout << " \nnhap nam: ";
	cin >> nam;
	if (kiemtrangayhople(ngay, thang, nam))
		cout << " \nla ngay hop le";
	else
		cout << "\n khong la ngay hop le";
}