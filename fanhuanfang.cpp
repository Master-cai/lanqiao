#include<iostream>
using namespace std;

int sum = 0;//统计符合要求的排列的数量 初始为0 

void test(int a[]){//该函数尝试当前排列是否符合要求并计数 
		int l1 = a[0] + a[1] + a[2];//row
		int l2 = a[3] + a[4] + a[5];
		int l3 = a[6] + a[7] + a[8];
		int s1 = a[0] + a[3] + a[6];//col
		int s2 = a[1] + a[4] + a[7];
		int s3 = a[2] + a[5] + a[8];
		int x1 = a[0] + a[4] + a[8];//diag
		int x2 = a[2] + a[4] + a[6];
		//依次比较 
		if(l1 != l2 && l1 != l3 && l1 != s1 && l1 != s2 && l1 != s3 && l1 != x1 && l1 != x2)
			if(l2 != l3 && l2 != s1 && l2 != s2 && l2 != s3 && l2 != x1 && l2 != x2)
				if(l3 != s1 && l3 != s2 && l3 != s3 && l3 != x1 && l3 != x2)
					if(s1 != s2 && s1 != s3 && s1 != x1 && s1 != x2)
						if(s2 != s3 && s2 != x1 && s2 != x2)
							if(s3 != x1 && s3 != x2)
								if(x1 != x2)
									sum++;
	}

void f(int a[],int n){
	if(n == 9)//已经完成全排列 
	{
		test(a);
		return;
	}
	else 
	for(int i = n; i < 9; i++)//permutation  此处可进一步抽象为一个单独函数，降低耦合性 
	{
		int temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		f(a, n+1);		
		temp = a[i];//回溯 
		a[i] = a[n];
		a[n] = temp;
		}
	}
int main() 
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	f(a,0);
	cout << sum/8;
	return 0;
}
