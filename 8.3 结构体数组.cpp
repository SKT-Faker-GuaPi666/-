#include<iostream>
using namespace std;
//结构体数组；
//1.定义结构体数组；
struct Student
{
	//姓名；
	string name;
	//年龄；
	int age;
	//分数；
	int score;
};

int main3()
{
	//2.创建结构体数组；
	Student stuArray[3] =
	{
		{"王某",22,80},
		{"胡某",22,75},
		{"李某",22,65}
	};
	//打印修改前的结构体数组；
	cout << "学前：" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " 姓名：" << stuArray[i].name
			<< " 年龄：" << stuArray[i].age
			<< " 分数：" << stuArray[i].score << endl;
	}
	//3.给结构体数组赋值；
	stuArray[0].name = "李某";
	stuArray[0].age = 22;
	stuArray[0].score = 65;
	stuArray[1].name = "刘某";
	stuArray[1].age = 21;
	stuArray[1].score = 85;
	stuArray[2].name = "邢某";
	stuArray[2].age = 23;
	stuArray[2].score = 80;
	//4.遍历结构体数组；
	cout << "学后：" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << " 姓名：" << stuArray[i].name
			<< " 年龄：" << stuArray[i].age
			<< " 分数：" << stuArray[i].score << endl;
	}
	system("pause");
	return 0;
}