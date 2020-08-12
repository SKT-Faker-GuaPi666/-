#include<iostream>
using namespace std;


//创建学生结构体；
struct student
{
	string name;//姓名；
	int age;//年龄；
	int score;//分数；
};

//打印函数1(值传递)：
void printStudent61(student stu)//若结构体定义在函数后，要在定义形参的时候加struct；
{
	stu.score = 85;
	cout << "s1值传递:\n" 
		<< " 姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
}
//打印函数2（地址传递）：
void printStudent62(student* p)
{
	p->score = 75;
	cout << "s2地址传递：\n"
		<< " 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main6()
{
	//结构体做函数参数；
	//将学生传入到一个参数中，打印学生身上的所有信息；

	//创建结构体变量
	student s1 = { "王某",22,80 };
	student s2 = { "胡某",22,80 };

	//s1实参传入；
	printStudent61(s1);
	
	//main函数打印；
	cout << "s1主函数：\n" 
		<<" 姓名："<< s1.name <<" 年龄："<< s1.age <<" 分数："<< s1.score << endl;
	//s2地址传入；
	printStudent62(&s2);

	//main函数打印；
	cout << "s2主函数：\n"
		<< " 姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
	
	system("pause");
	return 0;
}