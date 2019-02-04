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
		//��ʮ���������һλ��ǰÿһλת��4λ�Ķ����ƣ��Ҷ����ƴ��������
		int pos = S.length() - 1;
		for (; pos >= 0; pos--)
		{
		if (S[pos] >= '0' && S[pos] <= '9')
			B += strsixteen[S[pos] - '0'];
		else
			B += strsixteen[S[pos] - 'A' + 10];
		}
		//�Ӷ�����ת�ɰ˽�������λ��λת�ģ����Զ����ƴ�Ҫ�ճ�3�ı���
		pos = B.length();
		if (pos % 3)
		B.append(3 - (pos % 3), '0');
		//��λ��λ��ת�ɰ˽���
		for (pos = 0; pos < B.length(); pos += 3)
		{
		int val = (B[pos] - '0') + 2 * (B[pos + 1] - '0') + 4 * (B[pos+ 2] - '0');
		ans.push_back(val);
		}
		//ȥ��ǰ��0
		if (0 == ans.back())
		ans.pop_back();
		for (int i = ans.size() -1; i >= 0; i--)
			cout <<ans[i];
		cout <<endl;
	}
	return 0;
}

