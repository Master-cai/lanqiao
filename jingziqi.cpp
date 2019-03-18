#include<iostream>
using namespace std;

int f(int checkerboard[][])
{
	
	int tag = -1;//-1表示负，0为平局，1为胜
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			int t = 0;
			if(checkerboard[i][j] == 0)//没有棋子
			{
				checkerboard[i][j] = 1;
				t = f(checkerboard);
				checkerboard[i][j] = 0;
			}
			if(t == -1)
				tag = 1;
			if(t == 0)
				tag = 0;
		}
	} 
	return tag;
}
