#include <iostream>
using namespace std;

int tongLapphuong(int n)
{
	if (n == 1)
		return 1;
	else
		return n * n * n + tongLapphuong(n - 1);
}
void demSole(int n, int &dem)
{
	if (n > 0)
	{
		if (n % 10 != 0)
			dem++;
		demSole(n / 10, dem);
	}
}
int main()
{
	int n, dem = 0;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	cout << "Tong lap phuong la: " << tongLapphuong(n) << endl;
	demSole(n, dem);
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	cout << "So cac so le la: " << dem << endl;
	return 0;
}