#include<iostream>
using namespace std;

class C4121
{
	int m_A;//Ĭ��Ȩ��Ϊ˽�У�
};

struct C4122
{
	int m_A;//Ĭ��Ȩ��Ϊ������
};


int main12()
{
	//struct �� class����
	//class  Ĭ��Ȩ��Ϊ˽�У�
	C4121 c1;
	//c1.m_A = 100;

	//struct Ĭ��Ȩ��Ϊ������
	C4122 c2;
	c2.m_A = 520;


	system("pause");
	return 0;
}