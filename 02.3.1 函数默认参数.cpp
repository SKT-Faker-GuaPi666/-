#include<iostream>
using namespace std;

//����Ĭ�ϲ�����
//���Լ��������ݣ������Լ������ݣ����Լ������룬����Ĭ��ֵ��


//1.Ĭ�Ϻ���Ҫ���β��б��β������ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ������
//�������Ҷ�������Ĭ��ֵ��
int func3101(int a, int b=60, int c=30)
{
	return a + b + c;
}
//2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ�����
//��������ʵ��ֻ����һ��Ĭ�ϲ�����
int func3102(int a, int b, int c = 10);

int func3102(int a, int b, int c )
{
	return a + b + c;
}

int main1()
{
	cout << func3101(10) << endl;
	cout << func3101(10, 20) << endl;
	cout << func3101(10, 20, 50) << endl;

	cout << endl;
	cout << func3102(10,20) << endl;

	system("pause");
	return 0;
}