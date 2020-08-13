#include<iostream>
using namespace std;
#include<ctime>

//学生结构体定义；
struct Student
{
	string name;//学生姓名
	int score;//分数
};

//老师结构体定义；
struct Teacher
{
	string Tname;//老师姓名
	struct Student sArray[5];//学生数组
};
//给老师和学生赋值的函数；
void allocateSpace881(Teacher tea[] , int len)
{
	string nameSeed = "abcde";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		tea[i].Tname = "Teacher_";
		tea[i].Tname += nameSeed[i];
		//通过循环给每个老师所带学生赋值；
		for (int j = 0; j < 5; j++)
		{
			tea[i].sArray[j].name = "Student_";
			tea[i].sArray[j].name += nameSeed[j];

			int random = rand() % 61 + 40;//40~100
			tea[i].sArray[j].score = random;
			
		}
	}
}
//打印所有老师及其所带学生的信息的函数；
void printInfo881(Teacher tea[] ,int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tea[i].Tname << endl;
		cout << "\t学生姓名：" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t\t" << tea[i].sArray[j].name << " 分数：" << tea[i].sArray[j].score << endl;
		}
	}

}

int main881() 
{
	//随机数种子；
	srand((unsigned int)time(NULL));

	//创建3名老师的数组
	struct Teacher tArray[3];

	//通过函数给3个老师赋值，并给老师带的学生信息赋值；
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace881(tArray, len);
	//打印所有老师及所带的学生信息；
	printInfo881(tArray, len);



	system("pause");
	return 0;
}