#include<iostream>
using namespace std;

//ֵ���ݣ�
//���庯����ʵ���������ֽ��н���������

//����������Ҫ����ʱ������ʱ����дvoid

void swap4(int num1, int num2)
{
	cout << "����ǰ��" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	//����ֵ����Ҫ��ʱ�򣬿��Բ�дreturn��
}

int main4()
{
	int a = 10;
	int b = 20;
	swap4(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//ֵ����ʱ���βη����ı䣬��Ӱ��ʵ�Σ�

	system("pause");
	return 0;
}