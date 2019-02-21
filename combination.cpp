#include<iostream>
using namespace std;


int f(int m, int n)
{
	if (m>n)
		return 0;
	if (m == n)
		return 1;
	if (m <= 0)
		return 1;
	return f(m-1, n-1) + f(m, n-1);
}

int main()
{
	cout << f(3, 10);
} 
