#include <iostream>

using namespace std;



int main(int argc, char *argv[])

{

int Arr[5], n;

cin >>n;

//	ÎåÎ»

for (int i = 100; i < 1000; i++)

{

Arr[0] = i / 100;

Arr[1] = (i / 10) % 10;

Arr[2] = i % 10;

if ((Arr[0] + Arr[1]) * 2 + Arr[2] == n)

cout <<Arr[0] <<Arr[1] <<Arr[2] <<Arr[1] <<Arr[0] <<endl;

}

//	ÁùÎ»

for (int i = 100; i < 1000; i++)

{

Arr[0] = i / 100;

Arr[1] = (i / 10) % 10;

Arr[2] = i % 10;

if ((Arr[0] + Arr[1] + Arr[2]) * 2 == n)

cout <<Arr[0] <<Arr[1] <<Arr[2] <<Arr[2] <<Arr[1] <<Arr[0] <<endl;

}
}

