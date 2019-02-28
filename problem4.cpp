#include<iostream>
using namespace std;


/*
f（当前局面）
	if（)
	
	
	for（所有可能的走法）
	实验一种
	胜利 t = f（新的局面）
	if（胜利） 
		return true 
*/ 

bool f(int n)
{
	if(n>=1 && !f(n-1))
		return true;
	if(n>=3 && !f(n-3))
		return true;
	if(n>=7 && !f(n-7))
		return true;
	if(n>=8 && !f(n-8))
		return true;
	return false;
}

int main()
{
	cout << f(99);
	return 0;
}
