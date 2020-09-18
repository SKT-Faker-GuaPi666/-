#include<iostream>
using namespace std;
#include<string>
//成员函数做友元
class Building443;
class GoodGay443
{
public:
	GoodGay443();

	void visit();  //让visit函数可以访问Building中的私有成员
	void visit2(); //让visit2函数不可以访问Building中的私有成员

	Building443* building;
};
class Building443
{
	//告诉编译器，GoodGay类下的visit成员函数作为本类好盆友，可以访问私有成员
	friend void GoodGay443::visit();
public:
	Building443();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

//类外实现成员函数
Building443::Building443()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay443::GoodGay443()
{
	building = new Building443;
}

void GoodGay443::visit()
{
	cout << "visit 函数正在访问：" << building->m_SittingRoom << endl;
	cout << "visit 函数正在访问：" << building->m_BedRoom << endl;
}
void GoodGay443::visit2()
{
	cout << "visit2 函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "visit 函数正在访问：" << building->m_BedRoom << endl;
}

void test44301()
{
	GoodGay443 goodgay;
	goodgay.visit();
	goodgay.visit2();
}

int main443()
{
	test44301();
	system("pause");
	return 0;
}