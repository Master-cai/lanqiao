#include<iostream>
#include<string>
using namespace std;


string f(string a)
{
	if (a.length()<2)
		return a;
	else
		return f(a.substr(1))+a.at(0);
}

int main(){
	string a = "ABCD";
	string s = f(a);
	cout << s;
	return 0;
}
