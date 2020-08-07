#include<iostream>
using namespace std;

//提前告诉编译器函数的存在，可以利用函数的声明；
//函数的声明；

void swap6(int a, int b);


//比较函数，实现两个整型数字进行比较，返回较大的值；

int max6(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}
int main6()
{
	//函数max的调用；
	int a = 11;
	int b = 22;
	cout << max(a, b) << endl;
	//函数swap的调用；
	int c = 33;
	int d = 44;
	swap(c, d);

	system("pause");
	return 0;
}
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}