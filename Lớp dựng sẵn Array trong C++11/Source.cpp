#include <iostream>
#include <array>
using namespace std;

#define MAX 5

void printArray(const array<int, MAX>& arr) // truyền tham chiếu (hằng) vì hiệu suất
{
	cout << "So phan tu: " << arr.size() << endl; // có thể biết số phần tử ở mọi hàm
	for (const auto& item : arr) // có thể sử dụng for-each loops ở mọi hàm
	{
		cout << item << ' ';
	}
	cout << endl;
}

int main()
{
	array <int, MAX> arr = { 2, 5, 8, 3, 1 };
	printArray(arr);
	cout << "Sap xep tang: \n";
	sort(arr.begin(), arr.end()); // sắp xếp tăng
	printArray(arr);

	cout << "Sap xep giam: \n";
	sort(arr.rbegin(), arr.rend()); // sắp xếp giảm
	printArray(arr);
	return 0;
}