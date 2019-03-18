#include<iostream>
#define power_time 21
using namespace std;


typedef int bigint[power_time];//大整数类 用位次表示 
bigint base[10];//各个数字的21次幂 

void add(bigint a, bigint b, bigint goal)// a+b=goal, 大整数相加，a+b将结果返回给goal 
{
	for(int i = 0; i<power_time; i++)
	{
		goal[i] = a[i] + b[i] + goal[i];
		if(i == 20)
		{
			goal[i] = goal[i]%10;
		}
		if(goal[i]>=10 && i != power_time -1)
		{
			goal[i+1] = goal[i]/10;
			goal[i] = goal[i]%10;
		}
	}
}

void test(int a[])
{
	int count[10];
	int flag = 0;
	bigint goal1 = {0};
	for(int i = 0; i<9; i++)
	{
		for(int j = 0; j<a[i]; j++)
		{
			add(goal1, base[i], goal1);
		}
	}
	for(int i = 0; i<power_time; i++)
	{
		count[goal1[i]]++;
	}
	for(int i = 0; i<power_time; i++)
	{
		if(count[i] != a[i])
			flag == -1;
	}
	if(flag != -1)
		{
			for(int i = 0; i<power_time; i++)
				cout << goal1[i];
			cout << endl;
		}
}

void f(int a[], int num, int k)
{
	if( num == 0)
	{
		test(a);
		return;
	}
	if(k == 9)
	{
		a[k] = num;
		test(a);
		return;
	}
	for(int i = 0; i<power_time; i++)
	{
		a[k] = i;
		f(a, num - i, k + 1);
		a[k] = 0;
	}
}

void Multi(bigint a, int t, bigint goal)
{
	for(int i = 0; i<t; i++)
	{
		add(a, goal , goal);
	}
}
int main()
{
	
	/*for(int i = 0; i<10; i++)
	{
		Multi(base[i], power_time, base[i]);
	}*/
	for(int i = 0; i<10; i++)
	{
		base[i][0] = i;
	}
	Multi(base[2], power_time, base[2]);
	//for(int i = 0; i<10; i++)
	{
		for(int j = 0; j<21; j++)
			cout << base[2][j];
		cout << endl;
	}
	int a[10] = {0};
	//f(a, 21, 0);
	return 0;
}

