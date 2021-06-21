#include<iostream>;
using namespace std;
int main() {
	int arr[4] = { 1,6,3,8 };
	int* ptr;
	cout << arr[3] << endl;
	ptr = &arr[0];
	ptr++;
	cout << ptr << endl;
	cout << arr;
	ptr = nullptr;
	cout << ptr;
}
