////#include<iostream>
////#include<vector>
////#include<ctime>
////#include<stdlib.h>
////using namespace std;
////void nhap(vector<int >& arr, int n) {
////	int i = 0;
////	srand(time(NULL));
////	while (i < n) {
////		arr.push_back(rand());
////		++i;
////	}
////	//Vector được thiết kế để cấp phát bộ nhớ động khi cần vì thế mà dùng push_back() để đưa phần tử vào
//////	vector chứ không dùng toán tử chỉ số[].Chỉ khi đảm bảo trong vector đã có phần tử mới dùng toán tử chỉ số[].
////}
////void xuat(vector<int > arr) {
////	int size = arr.size();
////	for (int i = 0; i < size; i++) 
////		cout << arr[i] << "\t";
////}
////int main() {
////	int n = 9; 
////	vector<int>arr;
////	nhap(arr, n);
////	xuat(arr);
////}
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <conio.h>
using namespace std;
void nhapmang(vector<int>& arr, int n)
{

	srand(time(NULL));
	for (int i = 0; i < n; i++)
		arr.push_back(rand());
}
void xuatmang(vector<int> arr, int n)
{
	cout << "\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}
void swap(int& a, int& b)
{
	int n = a;
	a = b;
	b = n;
}
bool lon(int a, int b)
{
	return a >= b;
}
bool nho(int a, int b)
{
	return a <= b;
}
void sapxep(vector<int>& arr)
{
	for (int i = 1; i < arr.size(); i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			swap(arr[j], arr[j + 1]);
			j--; 		}
	}
		
}
int main()
{
	int n = 20 + rand() % 10;
	vector<int> arr;
	nhapmang(arr, n);
	xuatmang(arr, n);
	sapxep(arr);
	xuatmang(arr, n);
	_getch();
}
