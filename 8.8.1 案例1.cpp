#include<iostream>
using namespace std;
#include<ctime>

//����Ӣ�۽ṹ�壻
struct student
{
	string name;
	int score;
};
//����ѡ�ֽṹ�壻
struct teacher
{
	string Tname;
	struct student stu[5] ;
};
//��ֵ��
void allocateSpace(teacher tea[] , string teaArray[] , string stuArray[] , int lentea, int lenstu)
{
	for (int i = 0; i < lentea; i++)
	{
		tea[i].Tname = teaArray[i];
		for (int j = 0; j < lenstu / lentea; j++)
		{
			tea[i].stu[j].name = stuArray[j + i * (lenstu / lentea)];
			tea[i].stu[j].score = rand() % 80 + 20;
		}
	}
}

//��ӡ���к�����Ϣ��
void printInfo(teacher tea[], int lentea, int lenstu)
{
	for (int i = 0; i < lentea; i++)
	{
		cout << "ѡ��������" << tea[i].Tname << endl;
		cout << "\t����Ӣ�ۣ�" << endl;
		for (int j = 0; j < lenstu / lentea; j++)
		{
			cout << "\t\t������" << tea[i].stu[j].name << "\t������" << tea[i].stu[j].score << endl;
		}
	}


}

int main()
{
	//������������
	srand((unsigned int)time(NULL));
	//������ʦ���鼯�ϣ�
	string teacherArray[3] = { "�����","uzi","����" };
	//����ѧ�����鼯�ϣ�
	string studentArray[15] =
	{
		"��","����","������","ɳ��","����",
		"vn","��ɯ","С��","����","ѹ��",
		"�Ѹ�","����","���","äɮ","��ǹ"
	};
	//����У�ˣ�
	int lentea = sizeof(teacherArray) / sizeof(teacherArray[0]);
	int lenstu = sizeof(studentArray) / sizeof(studentArray[0]);
	//�ṹ��������鴴����
	teacher tea[3];

	//�����ݴ��븳ֵ������
	allocateSpace(tea,teacherArray,studentArray,lentea, lenstu);
	//�����ݴ����ӡ������
	printInfo(tea, lentea, lenstu);

	system("pause");
	return 0;
}