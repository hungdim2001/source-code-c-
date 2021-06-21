//Định dạng dữ liệu nhập xuất trong C++
//Trong C++, bạn có thể định dạng dữ liệu nhập xuất cho thiết bị nhập xuất chuẩn(bàn phím, màn hình console), hoặc có thể định dạng dữ liệu nhập xuất cho file văn bản.
//
//Để định dạng dữ liệu, bạn cần thêm chỉ thị #include <iomanip> vào đầu chương trình.Thư viện này chứa các toán tử định dạng(manipulator).
//
//Ví dụ : std::endl cũng là một manipulator thuộc <iostream> library.Bên dưới là những manipulator khá thông dụng trong C++ :
//
//	Toán tử std::setw(n) : xác định độ rộng dành cho của dữ liệu xuất.Khi sử dụng std::setw(n), các khoảng trắng sẽ được thêm vào bên trái hoặc bên phải dữ liệu xuất(để tổng số ký tự là n).Dữ liệu khi in ra sẽ được canh trái hoặc canh phải.
//	Toán tử std::left và std::right dùng chung với std::setw(n) để canh lề trái hoặc lề phải.
//	Toán tử std::setfill(ch) dùng chung với std::setw(n) để quy định ký tự ch được thêm vào thay vì dùng khoảng trắng mặc định.Ví dụ : nếu dùng std::setfill(‘ - ’) thì dấu ‘ - ‘ sẽ được thay cho khoảng trắng.
#include <iostream>
#include <iomanip>	// for std::setw(n), std::setfill(ch), std::left, std::right
using namespace std;

int main()
{
	cout << "Kteam Solutions and Entertainment" << endl;
	cout << "HowKteam.com" << endl << endl;

	cout << setw(5) << left << "ID";		// độ rộng 5 ký tự, canh trái ID
	cout << setw(30) << left << "Name";	// độ rộng 30 ký tự, canh trái Name
	cout << setw(20) << right << "Address" << endl;	// độ rộng 20 ký tự, canh phải Address

	cout << setfill('-');		// set fill bằng ký tự '-' thay vì ' '
	cout << setw(55) << "-" << endl;	// fill 55 ký tự '-'

	// reset fill bằng ký tự ' '
	cout << setfill(' ');

	// in thông tin theo format như trên
	cout << setw(5) << left << 1;
	cout << setw(30) << left << "Nguyen Doan Ngoc Giau";
	cout << setw(20) << right << "Sai Gon" << endl;

	cout << setw(5) << left << 2;
	cout << setw(30) << left << "Tran Kim Long";
	cout << setw(20) << right << "Da Lat" << endl;

	cout << setw(5) << left << 3;
	cout << setw(30) << left << "Nguyen Son Tung";
	cout << setw(20) << right << "Dong Nai" << endl;
	return 0;
}