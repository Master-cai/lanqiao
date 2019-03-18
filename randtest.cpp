#include <iostream>
using namespace std;
#include   <stdlib.h>
#include   <time.h>
#define MIN 0    //随机数产生的范围    
#define MAX 99

int num = 0;
int b[150][15];

bool test(int a[])
{
	for(int i = 0; i<num; i++)
	{
		bool flag = 0;//一开始认为是相同的 
		for(int j = 0; j<14; j++)
		{
			if(a[j] != b[i][j])
			{
				flag = 1;
			}
		}
		if( flag == 0)
			return 0;//有重复
	}
	return 1;//无重复 
}

void show()
{
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
	srand(time(0));
	int a[15];//记录数组 
	//0代表花  1代表店 
	for(int i = 0; i<1000*1000; i++)
	{ 
		int x = 0;
		int y = 0;
		for(int j =0; j<15; j++)
		{
			a[j] = rand() % 2;//通过随机模拟 
			if(a[j] == 0)
				x++;
			else
				y++;
		}
		if(x != 10 || y != 5 || a[14] != 0)
			continue;//不和题意则放弃此组合
		int w = 2;//初始量 
		for(int j =0; j<14; j++)
		{
			if(a[j] == 0)
				w -= 1;
			if(a[j] == 1)
				w *= 2;
		} 
		if(num == 0 && w == 1)
		{
			for(int j = 0; j<14; j++)
			{
				b[0][j] = a[j];
			}
			num++;
			show();
			continue;
		}
		if(w == 1 && test(a))
			{
				show();
				num++;
				for(int j =0; j<14; j++)
				{
				b[num][j] = a[j];
				}	
			}
	}
}

int main()
{
	f();
	cout << num;
	return 0;   
} 
