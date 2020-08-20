#include<iostream>
using namespace std;

//函数默认参数；
//若自己传入数据，就用自己的数据，若自己不传入，就用默认值；


//1.默认函数要在形参列表结尾，即若某个位置已经有了默认参数，那么从这个位置往后，
//从左往右都必须有默认值，
int func3101(int a, int b=60, int c=30)
{
	return a + b + c;
}
//2.如果函数声明有默认参数，函数实现就不能有默认参数；
//即声明和实现只能有一套默认参数；
int func3102(int a, int b, int c = 10);

int func3102(int a, int b, int c )
{
	return a + b + c;
}

int main1()
{
	cout << func3101(10) << endl;
	cout << func3101(10, 20) << endl;
	cout << func3101(10, 20, 50) << endl;

	cout << endl;
	cout << func3102(10,20) << endl;

	system("pause");
	return 0;
}