#include<iostream>
using namespace std;

void f(int n, int a[], int k)
{
	if (n <= 0)
	{
		for (int i = 0;i < k-1; i++)
		{
			cout << a[i]<< '+';
		}
		cout << a[k-1];
		cout << endl;
		return;
	}
	for (int i = n; i > 0; i--)
	{
		if (k > 0 && i > a[k-1])
			continue;
		a[k] = i;
		f(n-i, a, k+1);
	}
}

int main()
{
	int a[1000];
	f(6, a, 0);
	return 0;
}
