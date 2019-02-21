#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void f(string a, int k)
{
	if( k == a.length())
		cout << a << '\n';
	for (int i = k; i<a.length(); i++)
	{
		swap(a.at(i), a.at(k));
		f(a, k + 1);
		swap(a.at(i), a.at(k));
	}
}

int main()
{
	string a = "ABCDE";
	f(a, 0);
}
