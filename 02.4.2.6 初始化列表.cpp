#include<iostream>
using namespace std;

//��ʼ���б�
class Person426
{
public:
	//��ͳ��ʼ������
	//Person(int a,int b,int c)
	//{
	//	m_a = a;
	//	m_b = b;
	//	m_c = c;
	//}
	//��ʼ���б��ʼ������
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