#include<iostream>
using namespace std;
//结构体指针；
struct Student
{
	string name;//姓名；
	int age;//年龄；
	int score;//分数；
};

int main4()
{
	//1.创建结构体变量；
	Student stu = { "刘某",22,85 };
	//2.通过指针指向结构体变量；
	Student* p = &stu;
	//3.通过指针访问结构体变量中的数据；
	//通过结构体变量指针，访问结构体中的属性，需要利用‘->’，vs2019输入‘.’会直接生成；
	cout << " 姓名: " << p->name << " 年龄: " << p->age << " 分数: " << p->score << endl;

	system("pause");
	return 0;
}