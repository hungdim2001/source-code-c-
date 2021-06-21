#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
typedef struct VlSM
{
    char ip[40];
    char subnet[40];
    int amoutSubnet;
    int host[10000];
} vlsm;

int DectoBin(int n)
{
    int bin = 0;
    int i = 1;
    while (n > 0)
    {
        bin = bin + i * (n % 2);
        n = n / 2;
        i = i * 10;
    }
    return bin;
}
int BintoDec(int n)
{
    int i = 0, Dec = 0;
    while (n > 0)
    {
        Dec = Dec + (n % 10) * pow(2, i);
        n = n / 10;
        i++;
    }
    return Dec;
}
int CharToInt(char x[32])
{
    int INT = 0;
    int i = 0;
    while (x[i] != NULL)
    {
        if (x[i] == '.')
            i++;
        else
        {
            INT = INT * 10 + (x[i] - 48);
            i++;
        }
    }
    return INT;
}
void arrange(vlsm* v)
{
    for (int i = 1; i <= v->amoutSubnet - 1; i++)
        for (int j = i + 1; j <= v->amoutSubnet; j++)
        {
            if (v->host[i] < v->host[j])
            {
                int k = v->host[i];
                v->host[i] = v->host[j];
                v->host[j] = k;
            }
        }
}
void input(vlsm* v)
{
    cout << "nhap dia chi ip can chia:";
    fflush(stdin);
    getc(v->ip);
    fflush(stdin);
    cout << "\nNhap so subnet can chia: ";
    cin >> v->amoutSubnet;
    for (int i = 1; i <= v->amoutSubnet; i++)
    {
        cout << " Net" << i << "can so host la:";
        cin >> v->host[i];
    }
}
void output(vlsm* v)
{
    for (int i = 1; i <= v->amoutSubnet; i++)
    {
        cout << "\n"
            << v->host[i];
    }
}
int main()
{
    vlsm* v;
    input(v);
    arrange(v);
    output(v);
    _getch();
}
