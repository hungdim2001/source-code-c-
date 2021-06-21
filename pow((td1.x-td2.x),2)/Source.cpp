#include<iostream>
using namespace std;
struct ps {
	int ts;
	int ms;
};
int ucln(int a, int b) {
	if (a < b) {
		for (int i = a; i >= 1; i--)
			if (b % i == 0 and a % i == 0)
				return i;
	}
	else
		for (int i = b; i >= 1; i--)
			if (b % i == 0 and a % i == 0)
				return i;
}
int bcnn(int a, int b) {
	if (a < b) {
		for (int i = b; i <= a * b; i++)
			if (i % b == 0 and a % i == 0)
				return i;
	}
	else
		for (int i = a; i <= a * b; i++)
			if (i % b == 0 and a % i == 0)
				return i;
}
int rutgon(ps ps1) {
	return float(ps1.ts / ucln(ps1.ts, ps1.ms)) / (ps1.ms / ucln(ps1.ts, ps1.ms));
}
int cong(ps ps1, ps ps2) {
	ps psc;
	psc.ts = ps1.ts * ps2.ms + ps2.ts * ps1.ms;
	psc.ms = ps1.ms * ps2.ms;
	return rutgon(psc);
}
int tru(ps ps1, ps ps2) {
	ps psc;
	psc.ts = ps1.ts * ps2.ms - ps2.ts * ps1.ms;
	psc.ms = ps1.ms * ps2.ms;
	return rutgon(psc);
}
int nhan(ps ps1, ps ps2) {
	ps psc;
	psc.ts = ps1.ts * ps2.ts;
	psc.ms = ps1.ms * ps2.ms;
	return rutgon(psc);
}
int chia(ps ps1, ps ps2) {
	ps psc;
	psc.ts = ps1.ts * ps2.ms;
	psc.ms = ps1.ms * ps2.ts;
	return rutgon(psc);
}
int main() {
	ps ps1, ps2;
	char opera;
	cout << "nhap phan so 1 ts,ms:";
	cin >> ps1.ts >> ps1.ms;
	cout << " nhap phep tinh + = *  /";
	cin >> opera;
	cout << "\nnhap phan so 2 ts,ms:";
	cin >> ps2.ts >> ps2.ms;
	
	switch (opera)
	{
	case '+':
		cout << ps1.ts << "/" << ps1.ms << " + " << ps2.ts << "/" << ps2.ms << "=" << cong(ps1, ps2);
			break;
	case '-':
		cout << ps1.ts << "/" << ps1.ms << " - " << ps2.ts << "/" << ps2.ms << "=" <<tru(ps1, ps2);
	case '*':
		cout << ps1.ts << "/" << ps1.ms << " * " << ps2.ts << "/" << ps2.ms << "=" << nhan(ps1, ps2);
	case '/':
		cout << ps1.ts << "/" << ps1.ms << " / " << ps2.ts << "/" << ps2.ms << "=" << chia(ps1, ps2);
	default:
		break;
	}
}