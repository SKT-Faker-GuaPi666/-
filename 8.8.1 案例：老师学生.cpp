#include<iostream>
using namespace std;
#include<ctime>

//ѧ���ṹ�嶨�壻
struct Student
{
	string name;//ѧ������
	int score;//����
};

//��ʦ�ṹ�嶨�壻
struct Teacher
{
	string Tname;//��ʦ����
	struct Student sArray[5];//ѧ������
};
//����ʦ��ѧ����ֵ�ĺ�����
void allocateSpace881(Teacher tea[] , int len)
{
	string nameSeed = "abcde";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tea[i].Tname = "Teacher_";
		tea[i].Tname += nameSeed[i];
		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ��
		for (int j = 0; j < 5; j++)
		{
			tea[i].sArray[j].name = "Student_";
			tea[i].sArray[j].name += nameSeed[j];

			int random = rand() % 61 + 40;//40~100
			tea[i].sArray[j].score = random;
			
		}
	}
}
//��ӡ������ʦ��������ѧ������Ϣ�ĺ�����
void printInfo881(Teacher tea[] ,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tea[i].Tname << endl;
		cout << "\tѧ��������" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t\t" << tea[i].sArray[j].name << " ������" << tea[i].sArray[j].score << endl;
		}
	}

}

int main881() 
{
	//��������ӣ�
	srand((unsigned int)time(NULL));

	//����3����ʦ������
	struct Teacher tArray[3];

	//ͨ��������3����ʦ��ֵ��������ʦ����ѧ����Ϣ��ֵ��
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace881(tArray, len);
	//��ӡ������ʦ��������ѧ����Ϣ��
	printInfo881(tArray, len);



	system("pause");
	return 0;
}