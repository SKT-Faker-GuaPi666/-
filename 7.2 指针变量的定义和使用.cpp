#include<iostream>
using namespace std;
int main2()
{
	//ָ������Ķ�����Ӧ�ã�
	
	//1.ָ��Ķ��壻
	//�������ͱ�����
	int a = 10;
	//����ָ�룻
	int * p;

	//ָ�븳ֵ��
	p = &a;//ָ��ָ�����a�ĵ�ַ��

	cout << "a�ĵ�ַ��" << &a << endl;
	cout << "ָ��p��" << p << endl;
	cout << "ָ��p�ĵ�ַ" << &p << endl;

	//2.ָ���ʹ�ã�
	//ͨ����ָ��ǰ�� * �ķ�ʽ�����ã��ҵ�ָ��ָ����ڴ��е����ݣ�

	*p = 520;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	system("pause");
	return 0;
}