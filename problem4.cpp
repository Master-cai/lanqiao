#include<iostream>
using namespace std;


/*
f����ǰ���棩
	if��)
	
	
	for�����п��ܵ��߷���
	ʵ��һ��
	ʤ�� t = f���µľ��棩
	if��ʤ���� 
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
