#include<iostream>
using namespace std;

//ǳ���������
class Person425 
{
public:
	Person425()
	{
		cout << "Person���޲ι��캯������" << endl;
	}
	Person425(int age, int height)
	{
		cout << "heightԭʼ��ַΪ��" << &height << endl;
		m_age = age;
		m_Height = new int(height);
		cout << "new���height�ĵ�ַ" << &height << endl;
		cout << "m_Heighr=" << m_Height << endl;
		cout << "�ٴ�new int(height)=" <<new int(height) << endl;
		cout << "�ٴ�new int(height)�� m_Heighr=" << m_Height << endl;
		cout << "Person���вι��캯������" << endl;
	}
	Person425(const  Person425& p)
	{
		m_age = p.m_age;
		m_Height = new int (*p.m_Height);
		cout << "�������캯������new��������ٵĸ����ַ���£�" << endl;
		cout << "p.m_Height=" << p.m_Height << endl;
		cout << "m_Height=" << m_Height << endl;
		cout << "Person�Ŀ������캯������" << endl;
	}
	~Person425()
	{
		cout << "Person��������������" << endl;
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
	cout << "p1������Ϊ��" << p1.m_age << "\tp1�����Ϊ��" << *p1.m_Height << endl;
	Person425 p2(p1);
	cout << "p2������Ϊ��" << p2.m_age << "\tp2�����Ϊ��" << *p2.m_Height << endl;
}


int main425()
{
	test42501();


	system("pause");
	return 0;
}