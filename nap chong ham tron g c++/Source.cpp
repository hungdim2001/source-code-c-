//Để giải quyết vấn đề này, chúng ta có thể tạo ra 2 hàm có tên khác nhau :
#include<iostream>
using namespace std;

int addInteger(int a, int b){
	return a + b;
}

double addDouble(double a, double b)
{
	return a + b;
}

//Như vậy, ta sẽ có nhiều hàm với các tên gọi khác nhau.Tuy nhiên,
//việc sử dụng tên như vậy sẽ gây bất lợi cho người lập trình khi gọi hàm.
//Nạp chồng hàm(function overloading) ra đời để giải quyết vấn đề trên.
/*
Nạp chồng hàm (function overloading) là tính năng của ngôn ngữ C+
+ (không có trong C). Kỹ thuật này cho phép sử dụng cùng một tên gọi cho

nhiều hàm (có cùng mục đích). Nhưng khác nhau về kiểu dữ liệu tham số hoặc 
số lượng tham số.
Chúng ta cũng có thể định nghĩa các hàm add() với số lượng tham số khác nhau
:*/
int add(int a, int b, int c)
{
	return a + b + c;
}
//Chú ý: Việc quyết định cần gọi đến hàm nào phụ thuộc vào đối số truyền vào khi gọi hàm.
//Một số hàm không thể nạp chồng trong C++
//1. Hàm chỉ khác nhau kiểu trả về
int foo() {
	return 10;
}

double foo() {  // compiler error
	return 0.5;
}
//2. Tham số hàm kiểu typedef
//Khai báo typedef chỉ là một bí danh(không phải kiểu dữ liệu mới), 
//vì vậy chương trình bên dưới sẽ gặp lỗi :

typedef int myint;
void print(myint value)
{
	cout << value << '\n';
}
void print(int value) // compiler error
{
	cout << value << '\n';
}
//3. Tham số hàm kiểu con trỏ * và mảng[]
//Tham số hàm con trỏ * và mảng[] là tương đương.
//Lúc này, khai báo mảng[] được chuyển đổi ngầm định thành một con trỏ.
int foo1(int* x);
int foo1(int x[]); // compiler error
//4. Nạp chồng hàm và từ khóa const
/*
Ví dụ 1:

// PROGRAM 1 (Fails in compilation)
#include<iostream>
using namespace std;

void fun(const int i)
{
	cout << "fun(const int) called ";
}

void fun(int i)
{
	cout << "fun(int ) called ";
}

int main()
{
	const int i = 10;
	fun(i);

	return 0;
}*/
/*
Ví dụ 2:

// PROGRAM 2 (Compiles and runs fine)
#include<iostream>
using namespace std;

void fun(char *a)
{
	cout << "non-const fun() " << a;
}

void fun(const char *a)
{
	cout << "const fun() " << a;
}

*/
/*
C++ cho phép nạp chồng hàm với tham số là const chỉ khi tham số 
const là tham chiếu hoặc con trỏ. Đó là lý do tại sao chương trình
1 gặp lỗi biên dịch, nhưng chương trình 2 hoạt động.

Trong chương trình 1, tham số 'i' được truyền theo giá trị, vì vậy 'i'
trong fun() là bản sao của 'i' trong main(). Do đó, fun() không thể sửa đổi 
'i' của hàm main(). Vì vậy, không quan trọng việc 'i' được nhận dưới dạng 
tham số const hay tham số bình thường.



Khi tham số là tham chiếu hoặc con trỏ, chúng ta có thể sửa đổi giá
trị được tham chiếu hoặc được trỏ tới, do đó chúng ta có thể có hai 
phiên bản của hàm, một phiên bản có thể sửa đổi giá trị được tham 
chiếu hoặc trỏ tới, một phiên bản không thể thay đổi.

Chú ý: C++ cho phép nạp chồng hàm với tham số là const chỉ khi tham số
const là tham chiếu hoặc con trỏ.*/