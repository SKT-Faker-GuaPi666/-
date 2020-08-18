#include<iostream>
using namespace std;
int main1()
{
	//引用的基本语法
	int a = 10;
	int& b = a;
	cout << a << endl;
	cout << b << endl;

	b = 520;
	cout << a << endl;
	cout << b << endl;

	system("pause");
	return 0;
}