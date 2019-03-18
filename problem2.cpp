#include<iostream>
#define MAX 100
using namespace std;


void f(int n)
{	
	if( n == 0)
		{
			cout << "2(0)";
			return;
		}
	else if( n == 1)
		{
			cout << "2";
			return;
		}
	int a[MAX];
	for(int i = 0; i<MAX; i++)
		a[i] = 0; 
		int k;
	for(k = 0; n > 0; k++)//位次数组  下标即为幂次 
	{
		a[k] = n % 2;
		n /= 2;
	}
	/*for(int i = 0; i < MAX; i++)
	{
		if(a[i] == 1)
		{	
			cout << i << ' '; 
			//f(i);
		}
	}
	cout << endl;*/
	for(int i = MAX-1; i >= 0; i--)
	{
		if(a[i] == 1)
		{	
			//cout << i << endl; 
			if(i >= 2)
				cout << "2(";
			f(i);
			if(i >= 2)
				cout << ")";
		}
		if (a[i] != 0 && i != 0)
			cout << '+'; 
	}
}

int main()
{
	f(137);
	return 0;
}
