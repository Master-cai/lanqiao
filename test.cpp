#include<iostream>
#include<string>
using namespace std;

typedef struct times
{
	string begin;
	string end;
}times;

int sum = 0;


int main()
{
	int n;
	cin.getline(n, 3);
	char a[20];
	for(int i = 0; i<n; i++)
		{
			cin.getline(a, 20);
			cin.getline(a, 20);
		}
	cout << a; 
	return 0;
}
