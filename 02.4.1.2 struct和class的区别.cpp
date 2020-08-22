#include<iostream>
using namespace std;

class C4121
{
	int m_A;//默认权限为私有；
};

struct C4122
{
	int m_A;//默认权限为公共；
};


int main12()
{
	//struct 和 class区别：
	//class  默认权限为私有；
	C4121 c1;
	//c1.m_A = 100;

	//struct 默认权限为公共；
	C4122 c2;
	c2.m_A = 520;


	system("pause");
	return 0;
}