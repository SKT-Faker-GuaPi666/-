#include<iostream>
using namespace std;

//Բ���ʣ�
const double PI = 3.14;

//���һ��Բ�࣬���ܳ���
//Բ���ܳ���ʽ��2*PI*�뾶

class Circle4111
{
	//����Ȩ�ޣ�
	//����Ȩ�ޣ�
public:

	//���ԣ�
	//�뾶��
	int m_r;

	//��Ϊ��
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};

int main111()
{
	//ͨ��Բ��  ���������Բ������
	//ʵ����  ��ͨ��һ����  ����һ������Ĺ��̣�
	Circle4111 cl;
	//��Բ����  �����Խ��и�ֵ
	cl.m_r = 10;


	cout << "Բ���ܳ�Ϊ��" << cl.calculateZC() << endl;

	system("pause");
	return 0;
}