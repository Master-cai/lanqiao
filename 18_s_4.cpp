/*
标题：第几个幸运数

到x星球旅行的游客都被发给一个整数，作为游客编号。
x星的国王有个怪癖，他只喜欢数字3,5和7。
国王规定，游客的编号如果只含有因子：3,5,7,就可以获得一份奖品。

我们来看前10个幸运数字是：
3 5 7 9 15 21 25 27 35 45
因而第11个幸运数字是：49

小明领到了一个幸运数字 59084709587505，他去领奖的时候，人家要求他准确地说出这是第几个幸运数字，否则领不到奖品。

请你帮小明计算一下，59084709587505是第几个幸运数字。

需要提交的是一个整数，请不要填写任何多余内容。

*/

#include<iostream>
#include<set>
using namespace std;

const long long MAX = 59084709587505;
int main()
{
	int a[] = {3, 5, 7};
	long long temp = 1;//没有遍历过的最小的那个（比遍历过的大的那个）
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
