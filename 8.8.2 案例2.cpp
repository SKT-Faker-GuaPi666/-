#include<iostream>
using namespace std;
//创建英雄结构体；
struct hero
{
	string name;
	int age;
	string sex;
};
//排序函数；
void Bubblesort(hero p[] , int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (p[j].age > p[j + 1].age)
			{
				hero temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}
//打印函数；
void printInfo(hero in[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << in[i].name << "\t年龄：" << in[i].age << "\t性别：" << in[i].sex << endl;
	}
}

int main()
{
	hero Heros[5] =
	{
		{"妖姬",350,"女"},
		{"劫",36,"男"},
		{"瑞兹",76,"男"},
		{"阿狸",17,"女"},
		{"拉克丝",16,"女"}
	};
	int len = sizeof(Heros) / sizeof(Heros[0]);
	Bubblesort(Heros, len);
	printInfo(Heros, len);


	system("pause");
	return 0;
}