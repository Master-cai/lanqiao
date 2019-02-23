#include<iostream>
using namespace std;

int gcd1(int a, int b)
{
	if(a == 0)
		return b;
	return gcd1(b%a, a);
} 

int gcd2(int a, int b)
{
	while(true)
	{
		if(a == 0)
			return b;
		int temp = a;
		a = b%a;
		b = temp;
	}
}

int main()
{
	int a = 15;
	int b = 40;
	cout << gcd1(a, b) << ' ' << gcd2(a, b);
	return 0;
}
