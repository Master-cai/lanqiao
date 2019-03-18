#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int num = 0;
int b[150][15];

bool test(int a[])//判断是否有重复项 
{
	if(num == 0)//第一项直接加入 
		return 1;
	for(int i = 0; i<num; i++)
	{
		bool flag = 0;
		for(int j = 0; j<14; j++)
		{
			if(a[j] != b[i][j])
			{
				flag = 1;
			}
		}
		if(flag == 0)
		return 0;
	}
	return 1;
}

void show()
{
	b[num][14] = 0; 
	for(int i = 0; i<15; i++)
	{
		if(b[num][i] == 0)
			cout << 'a';
		else
			cout << 'b';
	}
	cout << endl;
}

void f()
{
	srand(time(NULL));
	int a[15];
	//0代表花， 1代表店 
	for(int i = 0; i<1000*1000; i++)
	{//记录花和店的数目 
		int x = 0;
		int y = 0;
		for(int j = 0; j<14; j++)//随机生成序列 
		{
			a[j] = rand()%2;
			if(a[j] == 0)
				x++;
			else
				y++;
		}
		if(x != 9 || y != 5)
		{
			continue;// 不合题意 
		}
		int w = 2;
		for(int j = 0; j<14; j++)// 开始按每一步模拟 
		{
			if(a[j] == 0)
				w -= 1;
			if(a[j] == 1)
				w *= 2;
		}
		if(w == 1 && test(a))// 判断是否符合题意 
		{
			for(int j = 0; j<14; j++)
			{
				b[num][j] =a[j];
			}
			show();
			num++;
			
		}
	}
}

int main()
{
	f();
	cout << num;
	return 0;
}
