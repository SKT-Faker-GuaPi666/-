#include<iostream>
using namespace std;


//const��ʹ�ó�����
//�����ṹ�壻
struct student
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ��ռ�ã����Ҳ��Ḵ���µĸ���������
void printStudent7(const student* s)
{
	//s->age = 21;//��ʱ�Դ���ı��������޸�ʱ�ᱨ����ֹ�������
	cout << " ������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}
int main7()
{
	//�����ṹ�������
	student stu = { "��ĳ",22,65 };

	printStudent7(&stu);


	system("pause");
	return 0;
}