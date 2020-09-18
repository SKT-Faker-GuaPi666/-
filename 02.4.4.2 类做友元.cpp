#include<iostream>
using namespace std;
#include<string>

//类做友元

class Building442;

class GoodGay442
{
public:
	GoodGay442();

	void visit();//参观函数 访问Building中的属性

	Building442* building;
};
class Building442
{
	//GoodGay类是本类的好盆友可以访问私有成员
	friend class GoodGay442;
public:
	Building442();
public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};
//类外写成员函数
Building442::Building442()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay442::GoodGay442()
{
	//创建一个建筑物的对象
	building = new Building442;
}

void GoodGay442::visit()
{
	cout << "好盆友类正在访问：" << building->m_SittingRoom << endl;
	cout << "好盆友类正在访问：" << building->m_BedRoom << endl;
}

void test44201()
{
	GoodGay442 gg;
	gg.visit();
}

int main442()
{
	test44201();
	system("pause");
	return 0;
}