#include<iostream>
using namespace std;
#include<string>
//��Ա��������Ԫ
class Building443;
class GoodGay443
{
public:
	GoodGay443();

	void visit();  //��visit�������Է���Building�е�˽�г�Ա
	void visit2(); //��visit2���������Է���Building�е�˽�г�Ա

	Building443* building;
};
class Building443
{
	//���߱�������GoodGay���µ�visit��Ա������Ϊ��������ѣ����Է���˽�г�Ա
	friend void GoodGay443::visit();
public:
	Building443();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

//����ʵ�ֳ�Ա����
Building443::Building443()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay443::GoodGay443()
{
	building = new Building443;
}

void GoodGay443::visit()
{
	cout << "visit �������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "visit �������ڷ��ʣ�" << building->m_BedRoom << endl;
}
void GoodGay443::visit2()
{
	cout << "visit2 �������ڷ��ʣ�" << building->m_SittingRoom << endl;
	//cout << "visit �������ڷ��ʣ�" << building->m_BedRoom << endl;
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