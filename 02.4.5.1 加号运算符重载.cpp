#include<iostream>
using namespace std;

//�Ӻ����������

class Person451
{
public:
	int m_A;
	int m_B;
	//1.��Ա��������+�ţ�
	//Person451 operator+(Person& p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
};
//2.ȫ�ֺ�������+�ţ�
Person451 operator+(Person451& p1,Person451& p2)
{
	Person451 temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
//3.�������صİ汾��
Person451 operator+(Person451& p1, int a)
{
	Person451 temp;
	temp.m_A = p1.m_A + a;
	temp.m_B = p1.m_B + a;
	return temp;
}

void test45101()
{
	Person451 p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person451 p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//��Ա�������ر��ʵ���
	//Person p3 = p1.operator+(p2);

	//ȫ�ֺ������ر��ʵ���
	//Person p3 = operator+(p1, p2);

	Person451 p3 = p1 + p2;
	//��������أ�Ҳ���Է�����������

	Person451 p4 = p1 + 20;

	cout << "p3.m_A = " << p3.m_A << endl;
	cout << "p3.m_B = " << p3.m_B << endl;
	cout << "p4.m_A = " << p4.m_A << endl;
	cout << "p4.m_B = " << p4.m_B << endl;
}

int main451()
{
	test45101();
	 
	system("pause");
	return 0;
}