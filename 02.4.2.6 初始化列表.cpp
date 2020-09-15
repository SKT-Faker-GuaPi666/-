#include<iostream>
using namespace std;

//初始化列表
class Person426
{
public:
	//传统初始化操作
	//Person(int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//初始化列表初始化属性
	Person426(int a, int b, int c) :m_a(a), m_b(b), m_c(c)
	{

	}
	int m_a;
	int m_b;
	int m_c;
};
void test42601()
{
	Person426 p1(20, 165, 30);
	
	cout << "m_a = " << p1.m_a << endl;
	cout << "m_b = " << p1.m_b << endl;
	cout << "m_c = " << p1.m_c << endl;
}



int main426()
{
	test42601();

	system("pause");
	return 0;
}