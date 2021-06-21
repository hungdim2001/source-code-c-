//// số chãn về đầu số  lẻ về sau
//#include <iostream>
//#include <ctime>
//using namespace std;
//void hoanvi(int& a, int& b)
//{
//    int n = a;
//    a = b;
//    b = n;
//}
//void mang(int n, int arr[100])
//{
//    srand(time(NULL));
//    for (int i = 0; i < n; i++)
//        arr[i] = rand();
//}
//void xmang(int n, int arr[100])
//{
//    cout << "\n";
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << "\t";
//}
//void sapxep(int n, int arr[1100])
//{
//    int i = 0, j = n - 1;
//    do
//    {
//        while (arr[i] % 2 == 0 && i < n)
//            i++;
//        while (arr[j] % 2 != 0)
//            j--;
//        if (i < j)
//            hoanvi(arr[i], arr[j]);
//    } while (i <= j);
//}
//int main()
//{
//    int n;
//    int arr[100];
//    mang(10, arr);
//    xmang(10, arr);
//    sapxep(10, arr);
//    xmang(10, arr);
//}
#include <iostream>
#include <string>
#include <algorithm>
#include<conio.h>
#include<Windows.h>

using namespace std;

void permute(string select, string remain) {
    if (remain == "") {
        cout << select << endl<<"\n";
        return;
    }
    for (int i = 0; remain[i]; ++i) {
        string wk(remain);
        permute(select + remain[i], wk.erase(i, 1));
    }
}

int main() {
    string anagrama;
    while (true) {
        system("cls");
        cout << "input character set >";
        cin >> anagrama;
        sort(anagrama.begin(), anagrama.end());
        permute("", anagrama);
        _getch();
    }
}