#include<iostream>
using namespace std;
void func(int& ref)
{
	ref = 1314;
}

int main5()
{
	int a = 10;
	cout << a << endl;

	//�Զ�ת��Ϊint *const ref=&a��ָ�볣����ָ��ָ�����ǲ���ģ��������ò��ɸģ�
	int& ref = a;
	ref = 520;

	func(a);
	cout << ref << endl;

	cout << ref << endl;
	cout << "a�ĵ�ַΪ��" << (int)&a << endl;

	int* p = &a;
	cout <<"ָ��p�Ĵ���Ϊ��"<< (int)p << endl;//��ʱp�������a�ĵ�ַ��

	cout <<"����ref�ĵ�ַΪ��"<< (int)&ref << endl;//��ret�ĵ�ַ��a�ĵ�ַ��ͬ��
	system("pause");
	return 0;
}