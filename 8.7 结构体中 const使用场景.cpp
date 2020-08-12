#include<iostream>
using namespace std;


//const的使用场景；
//创建结构体；
struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间的占用，而且不会复制新的副本出来；
void printStudent7(const student* s)
{
	//s->age = 21;//此时对传入的变量做出修改时会报错，防止误操作；
	cout << " 姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}
int main7()
{
	//创建结构体变量；
	student stu = { "李某",22,65 };

	printStudent7(&stu);


	system("pause");
	return 0;
}