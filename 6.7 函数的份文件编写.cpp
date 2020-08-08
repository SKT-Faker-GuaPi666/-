#include<iostream>
using namespace std;
#include"swap.h"

//函数的分文件编写；
//实现两个数字进行交换的函数；

////函数声明；
//void swap(int a, int b);

//函数定义；
//void swap(int num1, int num2)
//{
//	cout << "交换前：" << endl;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "交换后：" << endl;
//	cout << "num1=" << num1 << endl;
//	cout << "num2=" << num2 << endl;
//}

//1.创建.h后缀名的头文件；
//2.创建.cpp后缀名的源文件；
//3.在头文件中写函数的声明；
//4.在源文件中写函数的定义；


int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);


	system("pause");
	return 0;
}