/*
��������
����һ�����У�ÿ��ѯ�������е�l��������r�����е�K��������ĸ���

�����ʽ
��һ�а���һ����n����ʾ���г��ȡ�

�ڶ��а���n������������ʾ���������С�

����������һ��������m����ʾѯ�ʸ�����

������m�У�ÿ��������l,r,K����ʾѯ�����д������ҵ�l��������r�����У��Ӵ���С��K��������ĸ�������Ԫ�ش�1��ʼ��š�

�����ʽ
�ܹ����m�У�ÿ��һ��������ʾѯ�ʵĴ𰸡�
��������
5
1 2 3 4 5
2
1 5 2
2 3 2
�������
4
2
���ݹ�ģ��Լ��
����30%�����ݣ�n,m<=100��

����100%�����ݣ�n,m<=1000��

��֤k<=(r-l+1)�������е���<=106��
*/
#include<iostream>
#include<algorithm>
using namespace std;

typedef struct req{
	int start;
	int end;
	int k;
}req;

int main()
{
	int n;
	int m;
	int a[1001];
	req request[1000];
	cin >> n;
	for(int i = 1; i<=n; i++)
		cin >> a[i];
	cin >> m;
	for(int i = 0; i<m; i++)
	{
		cin >> request[i].start >> request[i].end >> request[i].k;
	}
	/*for(int i = 0; i<m; i++)
	{
		cout << request[i].start << request[i].end << request[i].k;
	}*/
	for(int i = 0; i<m; i++)//����request 
	{	
		int b[1001];
		int j =0;
		for(int k = request[i].start; k<=request[i].end; k++)
		{
			b[j] = a[k];
			j++;
		}
		sort(b, b+j);
		/*for(int k =j-1; k>=0; k--)
		{
			cout << b[k]<< endl;
		}*/
		cout << b[j-(request[i].k)] << endl;
	}
	return 0;
}
