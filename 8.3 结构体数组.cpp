#include<iostream>
using namespace std;
//�ṹ�����飻
//1.����ṹ�����飻
struct Student
{
	//������
	string name;
	//���䣻
	int age;
	//������
	int score;
};

int main3()
{
	//2.�����ṹ�����飻
	Student stuArray[3] =
	{
		{"��ĳ",22,80},
		{"��ĳ",22,75},
		{"��ĳ",22,65}
	};
	//��ӡ�޸�ǰ�Ľṹ�����飻
	cout << "ѧǰ��" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " ������" << stuArray[i].name
			<< " ���䣺" << stuArray[i].age
			<< " ������" << stuArray[i].score << endl;
	}
	//3.���ṹ�����鸳ֵ��
	stuArray[0].name = "��ĳ";
	stuArray[0].age = 22;
	stuArray[0].score = 65;
	stuArray[1].name = "��ĳ";
	stuArray[1].age = 21;
	stuArray[1].score = 85;
	stuArray[2].name = "��ĳ";
	stuArray[2].age = 23;
	stuArray[2].score = 80;
	//4.�����ṹ�����飻
	cout << "ѧ��" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " ������" << stuArray[i].name
			<< " ���䣺" << stuArray[i].age
			<< " ������" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}