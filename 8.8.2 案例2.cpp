#include<iostream>
using namespace std;
//����Ӣ�۽ṹ�壻
struct hero
{
	string name;
	int age;
	string sex;
};
//��������
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
//��ӡ������
void printInfo(hero in[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << in[i].name << "\t���䣺" << in[i].age << "\t�Ա�" << in[i].sex << endl;
	}
}

int main()
{
	hero Heros[5] =
	{
		{"����",350,"Ů"},
		{"��",36,"��"},
		{"����",76,"��"},
		{"����",17,"Ů"},
		{"����˿",16,"Ů"}
	};
	int len = sizeof(Heros) / sizeof(Heros[0]);
	Bubblesort(Heros, len);
	printInfo(Heros, len);


	system("pause");
	return 0;
}