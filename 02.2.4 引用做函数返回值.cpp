#include<iostream>
using namespace std;

//�����������ķ���ֵ
	//1.��Ҫ���ؾֲ����������ã�
int& test2401()
{
	int a = 10;//�ֲ�����������ջ������������ϵͳ�Զ��ͷţ�
	return a;
}


//2.�����ĵ��ÿ���Ϊ��ֵ��
int& test2402()
{
	static int a = 10;//��̬�����������ȫ��������ȫ�����ϵ������ڳ��������ϵͳ�ͷţ�
	return a;
}

int main4()
{
	int& ref = test2401();
	cout << "ref= " << ref << endl;//����������һ�Σ�
	cout << "ref= " << ref << endl;

	int& ret2 = test2402();
	cout << "ret2= " << ret2 << endl;
	cout << "ret2= " << ret2 << endl;

	test2402() = 520;//��������ķ���ֵ�����ã�����������ÿ���Ϊ��ֵ��
	cout << "ret2= " << ret2 << endl;
	cout << "ret2= " << ret2 << endl;

	int& ret3 = test2402();
	cout << "ret3= " << ret3 << endl;
	cout << "ret3= " << ret3 << endl;
	system("pause");
	return 0;
}