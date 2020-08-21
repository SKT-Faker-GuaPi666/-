#include<iostream>
using namespace std;

//圆周率：
const double PI = 3.14;

//设计一个圆类，求周长；
//圆求周长公式：2*PI*半径

class Circle4111
{
	//访问权限；
	//公共权限；
public:

	//属性；
	//半径；
	int m_r;

	//行为；
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main111()
{
	//通过圆类  创建具体的圆（对象）
	//实例化  （通过一个类  创建一个对象的过程）
	Circle4111 cl;
	//给圆对象  的属性进行赋值
	cl.m_r = 10;


	cout << "圆的周长为：" << cl.calculateZC() << endl;

	system("pause");
	return 0;
}