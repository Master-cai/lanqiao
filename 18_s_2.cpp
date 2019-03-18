/*
标题：星期一

整个20世纪（1901年1月1日至2000年12月31日之间），一共有多少个星期一？
(不要告诉我你不知道今天是星期几)

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
