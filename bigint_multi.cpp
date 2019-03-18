#include<iostream>
#include<string.h>
using namespace std;

int n;
int main(){
	int a[50000];//数据按位存储在这个数组 
	int i, j;
	cin >> n;
	memset(a, 0, sizeof(a));
	int len = 1;
	a[1] = 1;
	for(i = 1; i<= n; i++)//阶乘 每一次循环乘一次 
	{
		for(j = 1; j <= len; j++)// 每一位都乘以 i 
		{
			a[j] *= i;
		}
		for(j = 1; j <= len; j++)//判断是否进位 
		{
			if(a[j] < 10)//小于10 符合要求 
			{
				continue;
			}
			int pos = j;//pos 是第一个大于10的位置 
			while(pos <= len)//小于当前数组最大位数 
			{
				if(a[len] > 9)//最后一位大于9 需要进位  len++ 
					len++;
				a[pos+1] += a[pos]/10;//进位 
				a[pos] %= 10; 
				pos++;//移动到下一位 
			}
		}
	}
	for(i = len; i >= 1; i--)
		cout << a[i];
	cout << endl;
	cout << "length:" << len;
	return 0;
} 
