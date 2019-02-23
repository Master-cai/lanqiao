#include<iostream>
#define MAX 100
using namespace std;


int main(){
	bool a[100];
	for(int i = 0; i <= MAX; i++)
		a[i] = 1;
	a[0] = 0;
	for(int i = 2; i < MAX; i++)
	{
		if(a[i])
		{
			for(int j = 2; j <= MAX/i; j++)
			{
				a[j*i] = 0;
			}
		}
	}
	for(int i = 0; i < MAX; i++)
	{
		if(a[i])
			cout << i <<' ';
	}
	return 0;
}

