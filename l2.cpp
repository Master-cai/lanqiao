#include<iostream>
using namespace std;

static char c[16] = new char[16];
int sum = 0;

void f(int now, int n, int d, int h)
{
	if(now<0 || n>16 || (now == 0 && n<16))
	{
		return;
	}
	if(now == 0)
	{
		if(n == 16 && d == 5 && h == 10)
		{
			sum++;
			cout << sum << endl;
		}
	}
	c[n-1] = 1;
	f(now*2, n+1, d+1, h);
	c[n-1] = 2;
	f(now - 1, n+1, d, h+1);
}

int main()
{
	c[15] = '\0';
	sum = 0;
	f(2, 1, 0, 0);
	cout << sum;
	return 0;
}
