#include<iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	for(int k1 = 1; k1 <= 9; k1++)
	{
		for(int k2 = 0; k2 <= 9; k2++)
		{
			for(int k3 = 0; k3 <= 9; k3++)
			{
				if(2 * (k1 + k2) + k3 == a)
					cout << k1 << k2 << k3 << k2 << k1 <<endl;
			}
		}
	}
	for(int k1 = 1; k1 <= 9; k1++)
	{
		for(int k2 = 0; k2 <= 9; k2++)
		{
			for(int k3 = 0; k3 <= 9; k3++)
			{
				if(2 * (k1 + k2 + k3) == a)
					cout << k1 << k2 << k3 << k3 << k2 << k1 <<endl;
			}
		}
	}
	return 0;
} 
