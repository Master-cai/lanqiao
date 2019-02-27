/*
问题描述
如果一个自然数N的K进制表示中任意的相邻的两位都不是相邻的数字，那么我们就说这个数是K好数。求L位K进制数中K好数的数目。例如K = 4，L = 2的时候，所有K好数为11、13、20、22、30、31、33 共7个。由于这个数目很大，请你输出它对1000000007取模后的值。

输入格式
输入包含两个正整数，K和L。

输出格式
输出一个整数，表示答案对1000000007取模后的值。
样例输入
4 2
样例输出
7
数据规模与约定
对于30%的数据，KL <= 106；

对于50%的数据，K <= 16， L <= 10；

对于100%的数据，1 <= K,L <= 100。
*/
#include<iostream>
#include <stdlib.h>
using namespace std;

long long int num;
void test(int a[], int l)//检查是否符合条件 
{
	int flag = 0;//标志 
	for(int i = 1; i<l; i++)//对每一位进行检查 
	{
		if(abs(a[i] - a[i-1]) == 1)//相近位置是否相等 
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0 && a[0] != 0)//符合条件 
	{
		//for(int i = 0; i<l; i++)
		//{
		//	cout << a[i];
		//}
		num++;
		//cout << endl;
	}
}

void f(int a[], int pot, int k, int l)//用a[]数组表示K位数 pot表示当前在第几位 k是进制  L是位数 
{
	if(pot == l)//退出条件 达到位数要求 
	{
		test(a, l);//检验是否符合要求 
		return;
	}
	for(int i = 0; i<k; i++)//对pot位枚举 k进制 
	{
		a[pot] = i;
		f(a, pot+1 ,k ,l);
		a[pot] = 0;//回溯 
	}
}

int main()
{
	num = 0;
	int a[200];//存储的数字的数组 
	for(int i = 0; i<200; i++)//初始化
	{
		a[i] = 0; 
	}
	int k, l;//进制k，位数l
	cin >> k >> l;
	f(a, 0, k, l);
	cout << num%1000000007;
	return 0;
}
