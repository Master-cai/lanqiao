#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
using namespace std;

string strsixteen[16] = {"0000", "1000", "0100", "1100", "0010", "1010",
"0110", "1110","0001", "1001", "0101", "1101", "0011", "1011", "0111", "1111"};
int main(int argc, char *argv[])
{
	int n;
	cin >> n; 
	cin.get();
	for (int i = 0; i < n; i++)
	{
		string S, B;
		vector<int> ans;
		getline(cin, S);
		//从十六进制最后一位向前每一位转成4位的二进制，且二进制串是逆序的
		int pos = S.length() - 1;
		for (; pos >= 0; pos--)
		{
		if (S[pos] >= '0' && S[pos] <= '9')
			B += strsixteen[S[pos] - '0'];
		else
			B += strsixteen[S[pos] - 'A' + 10];
		}
		//从二进制转成八进制是三位三位转的，所以二进制串要凑成3的倍数
		pos = B.length();
		if (pos % 3)
		B.append(3 - (pos % 3), '0');
		//三位三位得转成八进制
		for (pos = 0; pos < B.length(); pos += 3)
		{
		int val = (B[pos] - '0') + 2 * (B[pos + 1] - '0') + 4 * (B[pos+ 2] - '0');
		ans.push_back(val);
		}
		//去掉前导0
		if (0 == ans.back())
		ans.pop_back();
		for (int i = ans.size() -1; i >= 0; i--)
			cout <<ans[i];
		cout <<endl;
	}
	return 0;
}

