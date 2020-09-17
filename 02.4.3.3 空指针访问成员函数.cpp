#include<iostream>
using namespace std;

//空指针调用成员函数
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
		//若不加判断代码，则会报错，原因是因为传入的指针是为NULL
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