/*
���⣺�ڼ���������

��x�������е��οͶ�������һ����������Ϊ�οͱ�š�
x�ǵĹ����и���񱣬��ֻϲ������3,5��7��
�����涨���ο͵ı�����ֻ�������ӣ�3,5,7,�Ϳ��Ի��һ�ݽ�Ʒ��

��������ǰ10�����������ǣ�
3 5 7 9 15 21 25 27 35 45
�����11�����������ǣ�49

С���쵽��һ���������� 59084709587505����ȥ�콱��ʱ���˼�Ҫ����׼ȷ��˵�����ǵڼ����������֣������첻����Ʒ��

�����С������һ�£�59084709587505�ǵڼ����������֡�

��Ҫ�ύ����һ���������벻Ҫ��д�κζ������ݡ�

*/

#include<iostream>
#include<set>
using namespace std;

const long long MAX = 59084709587505;
int main()
{
	int a[] = {3, 5, 7};
	long long temp = 1;//û�б���������С���Ǹ����ȱ������Ĵ���Ǹ���
	set<long long> s;
	while(true)
	{
		for(int i = 0; i<3; i++)
		{
			long long temp1;
			temp1 = a[i]*temp;
			if(temp1 <= MAX)
				s.insert(temp1);
		}
		temp = *s.upper_bound(temp);
		if(temp == MAX)
			break;	
	}
	cout << s.size();
	return 0; 
} 