#include<iostream>
using namespace std;
int sum=0;

int fib_1(int n)
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return fib_1(n-1) + fib_1(n-2);
	}
}
int fib_rec(int a, int b, int n)//line_recursion
{
	if(n <= 1)
	{
		return 1;
	}
	else
	{
		return a + fib_rec(b, a + b, n - 1);
	}
}
	
int fib_iter(int a, int b, int n)//tail_recursion
{
	if(n == 0)
	{
		return a;
	}
	else
	{
		return fib_iter(b, a+b, n-1);
	}
}

int main()
{
	cout << fib_1(10);
	cout << endl; 
    cout << fib_rec(1, 1, 10);
    cout << endl;
    cout << fib_iter(1, 1, 10);
    return 0;
}
