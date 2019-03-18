/*

标题：全球变暖


【题目描述】
你有一张某海域NxN像素的照片，"."表示海洋、"#"表示陆地，如下所示：

.......
.##....
.##....
....##.
..####.
...###.
.......

其中"上下左右"四个方向上连在一起的一片陆地组成一座岛屿。例如上图就有2座岛屿。  

由于全球变暖导致了海面上升，科学家预测未来几十年，岛屿边缘一个像素的范围会被海水淹没。具体来说如果一块陆地像素与海洋相邻(上下左右四个相邻像素中有海洋)，它就会被淹没。  

例如上图中的海域未来会变成如下样子：

.......
.......
.......
.......
....#..
.......
.......

请你计算：依照科学家的预测，照片中有多少岛屿会被完全淹没。  

【输入格式】
第一行包含一个整数N。  (1 <= N <= 1000)  
以下N行N列代表一张海域照片。  

照片保证第1行、第1列、第N行、第N列的像素都是海洋。  

【输出格式】
一个整数表示答案。

【样例输入】
7 
.......
.##.... 
.##....
....##.
..####.
...###.
.......

【样例输出】
1  
*/ 
#include<iostream>
#include<string>
using namespace std;

int count = 0;
char a[1000][1000];

bool isShallow(int i, int j)
{
	if((a[i][j+1] == '.')||(a[i+1][j] == '.')||(a[i][j-1] == '.')||(a[i-1][j] == '.'))
		return true;
	else
		return false;
}

void f(int i, int j)
{
	if((a[i][j+1] || a[i+1][j] || a[i][j-1] || a[i-1][j] ) != '#')
		return;
	a[i][j] = count;
	f(i, j+1);
	f(i+1, j);
	f(i, j-1);
	f(i-1, j);
}

int main()
{
		
	int n;
	cin >> n;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(a[i][j] == '#' && isShallow(i, j))
			{
				a[i][j] = '-';
				for(int i = 0; i<n; i++)
	{	
		for(int j = 0; j<n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << endl;
			}
		}
	}
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			if(a[i][j] == '#')
			{
				count++;
				f(i, j);
			}
		}
	}
	for(int i = 0; i<n; i++)
	{	
		for(int j = 0; j<n; j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
	cout << count;
	return 0;
}



