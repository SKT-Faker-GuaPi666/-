#include<iostream>
using namespace std;
//�ṹ��ָ�룻
struct Student
{
	string name;//������
	int age;//���䣻
	int score;//������
};

int main4()
{
	//1.�����ṹ�������
	Student stu = { "��ĳ",22,85 };
	//2.ͨ��ָ��ָ��ṹ�������
	Student* p = &stu;
	//3.ͨ��ָ����ʽṹ������е����ݣ�
	//ͨ���ṹ�����ָ�룬���ʽṹ���е����ԣ���Ҫ���á�->����vs2019���롮.����ֱ�����ɣ�
	cout << " ����: " << p->name << " ����: " << p->age << " ����: " << p->score << endl;

	system("pause");
	return 0;
}