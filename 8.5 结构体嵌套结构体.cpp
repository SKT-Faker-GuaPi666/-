#include<iostream>
using namespace std;
//嵌套结构体；
//1.创建学生结构体;
struct student
{
	string name;
	int age;
	int score;
};
//2.创建老师结构体；
struct teacher
{
	int id;//老师id；
	string nema;//老师姓名；
	int age;//老师年龄；
	student stu;//学生结构体；
};

int main()
{
	//3.赋值；
	teacher tea = { 5201314,"陈老师",35,{"邢某",22,80} };
	//4.打印；
	cout << " 老师id：" << tea.id << " 姓名：" << tea.nema << " 年龄：" << tea.age
		<< " \n 老师所带学生姓名：" << tea.stu.name << " 年龄：" << tea.stu.age << " 分数：" << tea.stu.score << endl;

	system("pause");
	return 0;
}