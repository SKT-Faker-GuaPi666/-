#include<iostream>
using namespace std;

int* func0213()
{
	//����new�ؼ��֣����Խ����ݿ��ٵ�����
	//ָ�� ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
	int* p = new int(10);
	return p;
}

int main3()
{
	//�ڶ�����������
	int* p = func0213();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}