/*
���⣺����һ

����20���ͣ�1901��1��1����2000��12��31��֮�䣩��һ���ж��ٸ�����һ��
(��Ҫ�������㲻֪�����������ڼ�)

*/



#include<iostream>
using namespace std;

bool ryear(int year)
{
	if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else
		return false;
}

int count()
{
	int sum = 0;
	for(int i = 1901; i<=2000; i++)
	if(ryear(i))
		sum += 366;
	else
		sum += 365;
	return sum;
}
int main() 
{
	int days = count();
	cout << days/7;
	return 0;
}
