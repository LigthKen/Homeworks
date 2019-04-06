#include <iostream>
using namespace std;

void nhap(int* a, int n)
{
	cout << "Nhap cac he so da thuc bac " << n << " theo trat tu he so bac 0 tro di: ";
	for (int i = 0; i < n + 1; i++)
		cin >> *(a + i);
}
void so(int i)
{
	if (i != 1 &&  i != -1)
		cout << i;
}
void xuat(int* a, int n)
{
	cout << "Da thuc vua nhap:";
	for (int i = n; i >= 0; i--)
		if (*(a + i) > 0 && *(a + i) != 0)
			if (i == 0)
				cout << " + " << *(a + i);
			else
			{
				if (i != n)
				{
					cout << " + "; so(*(a + i)); cout << "x";
				}
				else
				{
					cout << " "; so(*(a + i)); cout << "x";
				}
				if (i > 1)
					cout << "^" << i;
			}
		else if (*(a + i) < 0 && *(a + i) != 0)
			if (i == 0)
				cout << " - " << -*(a + i);
			else
			{
				if(i != n)
				{
					cout << " - "; so(-*(a + i)); cout << "x";
				}
				else
				{
					cout << " -"; so(-*(a + i)); cout << "x";
				}
				if (i > 1)
					cout << "^" << i;
			}
	cout << endl;
}
int tinhDT(int* a,int n, int x)
{
	int dem = 0;
	for (int i = n; i >= 0; i--)
		dem = dem + *(a + i) * (pow(x, i));
	return dem;
}
int main()
{
	int* a;
	int n, x;
	cout << "Nhap bac da thuc: ";
	cin >> n;
	a = new int[n + 1];
	nhap(a, n);
	xuat(a, n);
	cout << "Nhap gia tri cua bien: ";
	cin >> x;
	cout << "Gia tri da thuc: " << tinhDT(a, n, x);
	return 0;
}