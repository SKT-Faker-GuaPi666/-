#include<iostream>
using namespace std;

//浅拷贝和深拷贝
class Person425 
{
public:
	Person425()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person425(int age, int height)
	{
		cout << "height原始地址为：" << &height << endl;
		m_age = age;
		m_Height = new int(height);
		cout << "new后的height的地址" << &height << endl;
		cout << "m_Heighr=" << m_Height << endl;
		cout << "再次new int(height)=" <<new int(height) << endl;
		cout << "再次new int(height)后 m_Heighr=" << m_Height << endl;
		cout << "Person的有参构造函数调用" << endl;
	}
	Person425(const  Person425& p)
	{
		m_age = p.m_age;
		m_Height = new int (*p.m_Height);
		cout << "拷贝构造函数重新new后的所开辟的各项地址如下：" << endl;
		cout << "p.m_Height=" << p.m_Height << endl;
		cout << "m_Height=" << m_Height << endl;
		cout << "Person的拷贝构造函数调用" << endl;
	}
	~Person425()
	{
		cout << "Person的析构函数调用" << endl;
		if (m_Height != NULL)
		{
			delete m_Height;
		}
	}

	int m_age;
	int* m_Height;

};

void test42501()
{
	Person425 p1(20, 160);
	cout << "p1的年龄为：" << p1.m_age << "\tp1的身高为：" << *p1.m_Height << endl;
	Person425 p2(p1);
	cout << "p2的年龄为：" << p2.m_age << "\tp2的身高为：" << *p2.m_Height << endl;
}


int main425()
{
	test42501();


	system("pause");
	return 0;
}