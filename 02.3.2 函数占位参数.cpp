#include<iostream>
using namespace std;

//ռλ������
//�﷨������ֵ����  ������ ���������ͣ�{}

void func3201(int a, int)
{
	cout << "this is func������" << endl;
}

//ռλ��������������Ĭ�ϲ���
void func3202(int a, int = 10)
{
	cout << "ohhhhhhhhhhhhhhh" << endl;
}

int main2()
{
	func3201(10, 20);
	func3202(10);

	system("pause");
	return 0;
}