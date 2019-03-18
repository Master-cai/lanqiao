#include<iostream>
using namespace std;

void cimi(int n)
{
    int num;
    int i, j, k;
    int a[32];
    num = 0;
    i = 0;
    while(n)
    {
        j = n%2;
        if(j == 1)
            a[num++] = i;//存储第几次是1 
        i++;
        n /= 2;
    }
    for(i = num-1; i >= 0;i--)
    {
        if(a[i] == 0)
            cout << "2(0)";
        else if(a[i] == 1)
            cout << "2";
        else if(a[i] == 2)
            cout << "2(2)";
        else if(a[i] > 2)
        {
            cout << "2(";
            cimi(a[i]);
            cout << ")";
        }
        if(i != 0)
            cout << "+";//如果不是最后一个就得输出 +  
    }
}

int main()
{
    int n;
    cin >> n;
    cimi(n);
    cout << endl;
    return 0;
}

