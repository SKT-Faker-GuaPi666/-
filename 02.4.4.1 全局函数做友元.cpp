#include<iostream>
using namespace std;
#include<string>

//ȫ�ֺ�������Ԫ
class Building441
{
	//goodGayȫ�ֺ����� Building�����ѣ����Է���Building��˽�г�Ա
	friend void goodGay441(Building441& building);
public:
	Building441()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//ȫ�ֺ���
void goodGay441(Building441& building)
{
	cout << "������ȫ�ֺ��������ڷ��ʣ�" << building.m_SittingRoom << endl;
	cout << "������ȫ�ֺ��������ڷ��ʣ�" << building.m_BedRoom << endl;
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