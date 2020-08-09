#include<iostream>
using namespace std;
int main4()
{
	//1.空指针；
	//用于给指针变量进行初始化；
	int* p = NULL;//指向编号为0，的内存；
	cout << p << endl;//内存编号为0；
	//空指针是不可以进行访问的；
	//cout << *p << endl;
	//*p = 100;

	//2.野指针；
	//在程序中，尽量避免出现野指针；
	int* p2 = NULL;
	int* p3 = (int*)0x1100;

	cout << *p3 << endl;

	system("pause");
	return 0;
}