#include<iostream>
using namespace std;
//Ƕ�׽ṹ�壻
//1.����ѧ���ṹ��;
struct student
{
	string name;
	int age;
	int score;
};
//2.������ʦ�ṹ�壻
struct teacher
{
	int id;//��ʦid��
	string nema;//��ʦ������
	int age;//��ʦ���䣻
	student stu;//ѧ���ṹ�壻
};

int main()
{
	//3.��ֵ��
	teacher tea = { 5201314,"����ʦ",35,{"��ĳ",22,80} };
	//4.��ӡ��
	cout << " ��ʦid��" << tea.id << " ������" << tea.nema << " ���䣺" << tea.age
		<< " \n ��ʦ����ѧ��������" << tea.stu.name << " ���䣺" << tea.stu.age << " ������" << tea.stu.score << endl;

	system("pause");
	return 0;
}