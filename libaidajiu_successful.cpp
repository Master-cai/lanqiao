#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int num = 0;
int b[150][15];

bool test(int a[])//�ж��Ƿ����ظ��� 
{
	if(num == 0)//��һ��ֱ�Ӽ��� 
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
	//0������ 1����� 
	for(int i = 0; i<1000*1000; i++)
	{//��¼���͵����Ŀ 
		int x = 0;
		int y = 0;
		for(int j = 0; j<14; j++)//����������� 
		{
			a[j] = rand()%2;
			if(a[j] == 0)
				x++;
			else
				y++;
		}
		if(x != 9 || y != 5)
		{
			continue;// �������� 
		}
		int w = 2;
		for(int j = 0; j<14; j++)// ��ʼ��ÿһ��ģ�� 
		{
			if(a[j] == 0)
				w -= 1;
			if(a[j] == 1)
				w *= 2;
		}
		if(w == 1 && test(a))// �ж��Ƿ�������� 
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
