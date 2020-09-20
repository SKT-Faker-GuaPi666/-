#include<iostream>
using namespace std;

//左移运算符重载
class Person
{
	friend ostream& operator<<(ostream& out, Person& p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//利用成员函数重载左移运算符
	//void operator<<(cout)
	//{
	//	cout << p.m_A << endl;
	//	cout << p.m_B << endl;
	//}
	int m_A;
	int m_B;

 };

//只能利用全局函数重载左移运算符
ostream & operator<<( ostream &out,Person &p) //本质 operator<<(cout,p) 简化为 cout<<p
{
	out << "m_A = " << p.m_A << "\nnm_B = " << p.m_B;
	return out;
}

void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p <<"hello world"<<endl;
}


int main()
{
	test01();

	system("pause");
	return 0;
}