#include<iostream>
using namespace std;
class mypredecessor4112
{
public:
	//���е����Ժ���Ϊ ����ͳһ��Ϊ  ��Ա
	//����  ��Ա����  ��Ա����
	//��Ϊ  ��Ա����  ��Ա����


	string name;
	int age;
	int score;

	void showmypredecessor()
	{
		cout << "������" << name << " \t���䣺" << age << " \t������" << score << endl;
	}
	void setmypredecessor()
	{
		cout << "����������" << endl;
		cin >> name;
		cout << "����������" << endl;
		cin >> age;
		cout << "���������" << endl;
		cin >> score;
	}
};

int main112()
{
	mypredecessor4112 lover[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "��ֵ���е�" << i + 1 << "����" << endl;
		lover[i].setmypredecessor();
	}
	system("cls");
	for (int i = 0; i < 5; i++)
	{
		cout << "��ֵ���е�" << i + 1 << "����:" << endl;
		lover[i].showmypredecessor();
	}

	system("pause");
	return 0;
}