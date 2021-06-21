#include<iostream>
#include<string>
using namespace std;
int main() {
	string Name;
	int age;
	/*getline(cin, Name);
	cin >> age;
	cout << " ho va ten: " << Name << "\n";
	cout << " tuoi " << age;*/
	cin >> age;
	std::cin.ignore(32767, '\n');//xóa bộ nhó đệm . 32767 là số ký '\n' tự tối đa trong bộ
	getline(cin, Name);// nhớ đệm
	cout << " ho va ten: " << Name << "\n";
	cout << " tuoi " << age; 

}