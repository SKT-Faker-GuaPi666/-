#include<iostream>
using namespace std;


//����ѧ���ṹ�壻
struct student
{
	string name;//������
	int age;//���䣻
	int score;//������
};

//��ӡ����1(ֵ����)��
void printStudent61(student stu)//���ṹ�嶨���ں�����Ҫ�ڶ����βε�ʱ���struct��
{
	stu.score = 85;
	cout << "s1ֵ����:\n" 
		<< " ������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;
}
//��ӡ����2����ַ���ݣ���
void printStudent62(student* p)
{
	p->score = 75;
	cout << "s2��ַ���ݣ�\n"
		<< " ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}

int main6()
{
	//�ṹ��������������
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ��

	//�����ṹ�����
	student s1 = { "��ĳ",22,80 };
	student s2 = { "��ĳ",22,80 };

	//s1ʵ�δ��룻
	printStudent61(s1);
	
	//main������ӡ��
	cout << "s1��������\n" 
		<<" ������"<< s1.name <<" ���䣺"<< s1.age <<" ������"<< s1.score << endl;
	//s2��ַ���룻
	printStudent62(&s2);

	//main������ӡ��
	cout << "s2��������\n"
		<< " ������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
	
	system("pause");
	return 0;
}