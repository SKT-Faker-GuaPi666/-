#include<iostream>
using namespace std;

//��ָ����ó�Ա����
class Person433
{
public:
	void showClassName()
	{
		cout << "this is Person class" << endl;
	}

	void showClassAge()
	{
		if (this == NULL)
		{
			return;
		}
		//�������жϴ��룬��ᱨ��ԭ������Ϊ�����ָ����ΪNULL
		cout << "age = " << m_Age << endl;
	}
	int m_Age;
};
void test43301()
{
	Person433* p = NULL;

	p->showClassName();
	p->showClassAge();
}

int main433()
{
	test43301();
	
	system("pause");
	return 0;
}