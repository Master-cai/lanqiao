#include<iostream>
using namespace std;

int main()
{
	int a, b, c;//a*x + b*y = c
	cin >> a >> b >> c;
	int x0, y0;
	for(int i = 0; i<100; i++)
	{
		if((c - b*i)%a == 0)
		{
			y0 = i;
			break; 
		}
	}
	x0 = (c - b*y0)/a;
	for(int i = 0; i<100; i++)
	{
		cout << "x=" << x0 + i*b <<" y=" << y0 - i*a << endl;
	}
	return 0;
}
