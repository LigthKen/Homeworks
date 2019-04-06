#include <iostream>
using namespace std;

void nhap(int a[][15], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		int t = i + 1;
		cout << "Nhap " << c << " so nguyen cho dong " << t << ": ";
		for (int j = 0; j < c; j++)
			cin >> a[i][j];
	}
}
void xuat(int a[][15], int r, int c)
{
	cout << "Mang vua nhap la: \n";
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
void kt(char *a, int& n, int min, int max)
{
	cout << "Nhap so " << a << ": ";
	cin >> n;
	while (n < min || n > max)
	{
		cout << "Nhap so " << a << " phai tu " << min << " den " << max << ". Nhap lai: ";
		cin >> n;
	}
}
void  xuatSole(int a[][15], int r, int c)
{
	cout << "Cac so le trong hang " << r << ":";
	for (int i = 0; i < c; i++)
		if (a[r][i] % 2 != 0)
			if (i == 0)
				cout << " " << a[r][i];
			else
				cout << ", " << a[r][i];

}
int main()
{
	int a[10][15];
	char d[] = "dong";
	char cot[] = "cot";
	int r, c, n;
	kt(d, r, 1, 10);
	kt(cot, c, 1, 15);
	nhap(a, r, c);
	xuat(a, r, c);
	cout << "Nhap hang can xem so le: ";
	cin >> n;
	while (n < 1 || n > r)
	{
		cout << "Nhap hang tu 1 den " << r << ". Nhap lai: ";
		cin >> n;
	}
	xuatSole(a, n - 1, c);
	return 0;
}