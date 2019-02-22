#include<iostream>
using namespace std;

int f(int m, int n)
{
	if (m == 0 || n == 0)
		return 1;
	return f(m-1, n) + f(m, n-1);
} 

int main(){
	cout << f(3, 1);
	return 0;
}
