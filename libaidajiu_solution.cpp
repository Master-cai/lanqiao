#include<iostream>
using namespace std;
int sum=0;
int f(int a,int b,int c){
	// a:������� b:����������1 c:�Ƶĳ�ֵ
	// �κγ�ʼ״���������������ܣ��������꣬������������
	if(a>0)
		f(a-1,b,c*2); // ����һ��
	if(b>0)
		f(a,b-1,c-1); // ������һ��
	if(a==0&&b==0&&c==1) //���������Ҫ�����ֹ������û�е�ʣ�£���ʣһ�仨��һ����
		sum=sum+1;
    return sum;
}
int main()
{
    f(5,9,2);
    cout<<sum<<endl;
    return 0;
}