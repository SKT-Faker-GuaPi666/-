#include<iostream>
using namespace std;

//��������

//1.ֵ���ݣ�
void myswap2301(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

//2.��ַ���ݣ�
void myswap2302(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3.���ô��ݣ�
void myswap2303(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 1314;
	int b = 520;
	cout << a << endl;
	cout << b << endl;
	myswap2301(a, b);
	cout << "ֵ���ݣ�" << endl;
	cout << a << endl;
	cout << b << endl;
	myswap2302(&a, &b);
	cout << "��ַ���ݣ�" << endl;
	cout << a << endl;
	cout << b << endl;
	myswap2303(a, b);
	cout << "���ô��ݣ�" << endl;
	cout << a << endl;
	cout << b << endl;


	system("pause");
	return 0;
}