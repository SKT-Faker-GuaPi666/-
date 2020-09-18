#include<iostream>
using namespace std;
#include<string>

//全局函数做友元
class Building441
{
	//goodGay全局函数是 Building好朋友，可以访问Building中私有成员
	friend void goodGay441(Building441& building);
public:
	Building441()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//全局函数
void goodGay441(Building441& building)
{
	cout << "好朋友全局函数，正在访问：" << building.m_SittingRoom << endl;
	cout << "好朋友全局函数，正在访问：" << building.m_BedRoom << endl;
}

void test44101()
{
	Building441 building;
	goodGay441(building);
}

int main441()
{
	test44101();
	system("pause");
	return 0;
}