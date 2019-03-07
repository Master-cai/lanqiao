#include<iostream>
#include<string.h>
using namespace std;

int n;
int main(){
	int a[50000];
	int i, j;
	cin >> n;
	memset(a, 0, sizeof(a));
	int len = 1;
	a[1] = 1;
	for(i = 1; i<= n; i++)
	{
		for(j = 1; j <= len; j++)
		{
			a[j] *= i;
		}
		for(j = 1; j <= len; j++)
		{
			if(a[j] < 10)
			{
				continue;
			}
			int pos = j;
			while(pos <= len)
			{
				if(a[len] > 9)
					len++;
				a[pos+1] += a[pos]/10;
				a[pos] %= 10;
				pos++;
			}
		}
	}
	for(i = len; i >= 1; i--)
		cout << a[i];
	cout << endl;
	cout << "length:" << len;
	return 0;
} 
