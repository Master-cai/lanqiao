#include<iostream>
using namespace std;


int a[15];
int sum = 0;
	
void show(int a[], int n)
{
	for(int i = 0; i<n; i++)
	{
		if(a[i] == 1)
			cout << 'a';
		else if(a[i] == 2)
			cout << 'b';
	}
	cout << endl;
	sum++;
}

void f(int m, int n, int d, int w)//a:顺序数组  m: 花数 n: 店数 d: 当前位置 w: 余下酒量 
{
	//条件
	if(m == 0)// no flower means he can`t drink any more
	{
		if(w == 0)// no wine which means right case
		{
			for(int i = d; i<15; i++)
				a[i] = 1;// the rest is shop
			show(a, 15);
			return;
		}
		else
		{
			return;//wrong case
		}
	}
	if(n == 0)//no shop means he can`t add any more
	{
		if(w == m)//the flower equals the wine which means right case
		{
			for(int i = d; i<15; i++)
				a[i] = 2;//the remaining is flowers
			show(a, 15);
			return;
		}
		else
		{
			return;//wrong case
		}
	} 
	a[d] = 1;//尝试此处遇到花
	w -= 1;
	f(m-1, n, d+1, w);
	a[d] = 0;//回溯
	w += 1;
	a[d] = 2;//当前为店
	w *= 2;
	f(m, n-1, d+1, w); 
	w /= 2;
	a[d] = 0;//回溯 
}

int main(){
	for(int i = 0; i<15; i++)
	{
		a[i] = 0;
	}
	f(9, 5, 0, 2);
	cout << sum;
	return 0;
}
