#include<iostream>
#include<string>
using namespace std;

typedef struct times
{
	string begin;
	string end;
}times;

int get_time(string s)//change the time of string into seconds;
{
	int h1 = (s.at(0)-'0')*10 + (s.at(1)-'0');
	int m1 = (s.at(3)-'0')*10 + (s.at(4)-'0');
	int s1 = (s.at(6)-'0')*10 + (s.at(7)-'0');
	int h2 = (s.at(8)-'0')*10 + (s.at(9)-'0');
	int m2 = (s.at(11)-'0')*10 + (s.at(12)-'0');
	int s2 = (s.at(14)-'0')*10 + (s.at(15)-'0');
	if(s.find('+'))
		h2 += 24*(s.at(s.find('+'))-'0');
	return (h2 - h1)*3600 + (m2 - m1)*60 + (s2 - s1);
	
}
int main()
{
	int num;
	cin >> num;
	times a[1000];
	char s1[50];
	char s2[50];
	for(int i = 0; i<num; i++)
	{
		
		cin.getline(s1, 30);
		a[i].begin = s1;
		cin.getline(s2, 30);
		a[i].end = s2;
	}
	/*for(int i = 0; i<num; i++)
	{
		int begin = get_time(a[i].begin);
		int end = get_time(a[i].end);
		int times = (begin + end)/2;
		int h = times/3600;
		int m = times%3600/60;
		int s = times%3600%60;
		cout.fill(0);
		cout.width(2);
		cout << h;
		cout << ":";
		cout.fill(0);
		cout.width(2);
		cout << m;
		cout << ":";
		cout.fill(0);
		cout.width(2);
		cout << s;
		cout <<":"; 
	}*/
	for(int i = 0; i<num; i++)
	{
		cout << a[i].begin << endl;
	}
	return 0;
}
