#include<iostream>
using namespace std;
int main113()
{
	//1.������ֻС���������
	float a = 0.0f;
	float b = 0.0f;
	float c = 0.0f;
	cout << "������С��a����������λ��ǧ�ˣ�" << endl;
	cin >> a;
	cout << "������С��b����������λ��ǧ�ˣ�" << endl;
	cin >> b;
	cout << "������С��c����������λ��ǧ�ˣ�" << endl;
	cin >> c;
	//2.��ʾ��ֻС���������
	cout << "С��a������Ϊ��" << a << "ǧ��" << endl;
	cout << "С��b������Ϊ��" << b << "ǧ��" << endl;
	cout << "С��c������Ϊ��" << c << "ǧ��" << endl;
	//3.�ж���ֻ���أ�
	if (a > b)
	{
		if (a > c)
		{
			cout << "С��a���������أ�Ϊ��" << a << "ǧ��" << endl;
		}
		else
		{
			cout << "С��c���������أ�Ϊ��" << c << "ǧ��" << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "С��b���������أ�Ϊ��" << b << "ǧ��" << endl;
		}
		else
		{
			cout << "С��c���������أ�Ϊ��" << c << "ǧ��" << endl;
		}
	}

	system("pause");
	return 0;
}