#include<iostream>
using namespace std;
#include<ctime>

//创建英雄结构体；
struct student
{
	string name;
	int score;
};
//创建选手结构体；
struct teacher
{
	string Tname;
	struct student stu[5] ;
};
//赋值；
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

//打印所有函数信息；
void printInfo(teacher tea[], int lentea, int lenstu)
{
	for (int i = 0; i < lentea; i++)
	{
		cout << "选手姓名：" << tea[i].Tname << endl;
		cout << "\t成名英雄：" << endl;
		for (int j = 0; j < lenstu / lentea; j++)
		{
			cout << "\t\t姓名：" << tea[i].stu[j].name << "\t分数：" << tea[i].stu[j].score << endl;
		}
	}


}

int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));
	//创建老师数组集合；
	string teacherArray[3] = { "李相赫","uzi","厂长" };
	//创建学生数组集合；
	string studentArray[15] =
	{
		"劫","瑞兹","辛德拉","沙皇","瑞文",
		"vn","卡莎","小炮","大嘴","压缩",
		"寡妇","猪妹","螳螂","盲僧","男枪"
	};
	//数据校核；
	int lentea = sizeof(teacherArray) / sizeof(teacherArray[0]);
	int lenstu = sizeof(studentArray) / sizeof(studentArray[0]);
	//结构体变量数组创建；
	teacher tea[3];

	//将数据传入赋值函数；
	allocateSpace(tea,teacherArray,studentArray,lentea, lenstu);
	//将数据传入打印函数；
	printInfo(tea, lentea, lenstu);

	system("pause");
	return 0;
}