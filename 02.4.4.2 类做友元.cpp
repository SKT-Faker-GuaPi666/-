#include<iostream>
using namespace std;
#include<string>

//������Ԫ

class Building442;

class GoodGay442
{
public:
	GoodGay442();

	void visit();//�ιۺ��� ����Building�е�����

	Building442* building;
};
class Building442
{
	//GoodGay���Ǳ���ĺ����ѿ��Է���˽�г�Ա
	friend class GoodGay442;
public:
	Building442();
public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};
//����д��Ա����
Building442::Building442()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}

GoodGay442::GoodGay442()
{
	//����һ��������Ķ���
	building = new Building442;
}

void GoodGay442::visit()
{
	cout << "�����������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�����������ڷ��ʣ�" << building->m_BedRoom << endl;
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