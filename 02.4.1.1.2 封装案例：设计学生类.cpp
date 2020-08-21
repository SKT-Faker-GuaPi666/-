#include<iostream>
using namespace std;
class mypredecessor4112
{
public:
	//类中的属性和行为 我们统一称为  成员
	//属性  成员属性  成员变量
	//行为  成员函数  成员方法


	string name;
	int age;
	int score;

	void showmypredecessor()
	{
		cout << "姓名：" << name << " \t年龄：" << age << " \t分数：" << score << endl;
	}
	void setmypredecessor()
	{
		cout << "请输入姓名" << endl;
		cin >> name;
		cout << "请输入年龄" << endl;
		cin >> age;
		cout << "请输入分数" << endl;
		cin >> score;
	}
};

int main112()
{
	mypredecessor4112 lover[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "颜值排行第" << i + 1 << "的是" << endl;
		lover[i].setmypredecessor();
	}
	system("cls");
	for (int i = 0; i < 5; i++)
	{
		cout << "颜值排行第" << i + 1 << "的是:" << endl;
		lover[i].showmypredecessor();
	}

	system("pause");
	return 0;
}