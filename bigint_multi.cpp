#include<iostream>
#include<string.h>
using namespace std;

int n;
int main(){
	int a[50000];//���ݰ�λ�洢��������� 
	int i, j;
	cin >> n;
	memset(a, 0, sizeof(a));
	int len = 1;
	a[1] = 1;
	for(i = 1; i<= n; i++)//�׳� ÿһ��ѭ����һ�� 
	{
		for(j = 1; j <= len; j++)// ÿһλ������ i 
		{
			a[j] *= i;
		}
		for(j = 1; j <= len; j++)//�ж��Ƿ��λ 
		{
			if(a[j] < 10)//С��10 ����Ҫ�� 
			{
				continue;
			}
			int pos = j;//pos �ǵ�һ������10��λ�� 
			while(pos <= len)//С�ڵ�ǰ�������λ�� 
			{
				if(a[len] > 9)//���һλ����9 ��Ҫ��λ  len++ 
					len++;
				a[pos+1] += a[pos]/10;//��λ 
				a[pos] %= 10; 
				pos++;//�ƶ�����һλ 
			}
		}
	}
	for(i = len; i >= 1; i--)
		cout << a[i];
	cout << endl;
	cout << "length:" << len;
	return 0;
} 
