#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b)
{
	return a>b;
}
int main()
{
	int n;
	int k;
	cin >> n;
	cin >> k;
	int a[n];
	for(int i = 0; i<n; i++)
	{
		cin >>a[i];
	}
	sort(a, a+n, compare);
	bool f = true;//break the 'fors' 
	for(int i = 0; i<n && f; i++)
	{
		for(int j = i+1; j<n && f; j++)
		{
			for(int m = j+1; m<n && f; m++)
			{
				if((a[i] + a[j] + a[m])% k == 0)
				{
					cout << a[i] + a[j] + a[m];
					f = false;
				}
			}
		}
	}
	return 0;
} 
