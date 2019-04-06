#include<iostream>
using namespace std;

void xuatXO(int** a, int n)
{
	int left = 0, right = n - 1, top = 0, bot = n - 1, dem = 0;
	while (left <= right)
	{
		for (int t = right ; t >= left; t--)
			*(*(a + top) + t) = dem++;
		top++;
		for (int l = top; l <= bot; l++)
			*(*(a + l) + left) = dem++;
		left++;
		for (int b = left; b <= right; b++)
			*(*(a + bot) + b) = dem++;
		bot--;
		for (int r = bot ; r >= top; r--)
			*(*(a + r) + right) = dem++;
		right--;
	}
}
int main()
{
	int** a;
	int n, dem = 1;
	cout << "Nhap vao n: ";
	cin >> n;
	a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[n];
	xuatXO(a, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << *(*(a + i) + j) << "\t";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	a = nullptr;
	return 0;
}