#include<iostream>
using namespace std;
int main4()
{
	//1.��ָ�룻
	//���ڸ�ָ��������г�ʼ����
	int* p = NULL;//ָ����Ϊ0�����ڴ棻
	cout << p << endl;//�ڴ���Ϊ0��
	//��ָ���ǲ����Խ��з��ʵģ�
	//cout << *p << endl;
	//*p = 100;

	//2.Ұָ�룻
	//�ڳ����У������������Ұָ�룻
	int* p2 = NULL;
	int* p3 = (int*)0x1100;

	cout << *p3 << endl;

	system("pause");
	return 0;
}