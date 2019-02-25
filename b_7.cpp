#include<iostream>
using namespace std;

/*问题描述
　　153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。编程求所有满足这种条件的三位十进制数。
输出格式
　　按从小到大的顺序输出满足条件的三位十进制数，每个数占一行。
*/

int main()
{
	int x;
	for(int i =100; i<999; i++)
	{
		int a = 0, b = 0, c = 0;
		x = i;
		a = x/100;
		x = x%100;
		b = x/10;
		x = x%10;
		c = x;
		if((a*a*a + b*b*b + c*c*c) == i)
		{
			cout << i <<endl;
		}
	}
	return 0;
}
