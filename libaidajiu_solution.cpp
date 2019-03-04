#include<iostream>
using namespace std;
int sum=0;
int f(int a,int b,int c){
	// a:店的总数 b:花的总数减1 c:酒的初值
	// 任何初始状况，都有两个可能：先遇到店，或者先遇到花
	if(a>0)
		f(a-1,b,c*2); // 逢店加一倍
	if(b>0)
		f(a,b-1,c-1); // 遇花喝一斗
	if(a==0&&b==0&&c==1) //这个是满足要求的终止条件。没有店剩下，还剩一朵花和一斗酒
		sum=sum+1;
    return sum;
}
int main()
{
    f(5,9,2);
    cout<<sum<<endl;
    return 0;
}