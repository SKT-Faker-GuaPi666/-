#include<iostream>;
using namespace std;
int main()
{
	//break的使用时机；
	//1.出现在switch语句中；
	cout << "请选择副本难度" << endl;
	cout << "1、简单" << endl;
	cout << "2、普通" << endl;
	cout << "3、中等" << endl;
	cout << "4、困难" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "您选择的是简单模式" << endl;
		break;
	case 2:
		cout << "您选择的是普通模式" << endl;
		break;
	case 3:
		cout << "您选择的是中等模式" << endl;
		break;
	case 4:
		cout << "您选择的是困难模式" << endl;
		break;
	default:
		break;
	}

	//2.出现在循环语句中；
	for (int a = 1; a < 10; a++)
	{
		cout << a << endl;
		if (a == 5)//如果i等于5，推出循环，不再打印；
		{
			break;//在此处退出循环；
		}
	}



	//3.出现在嵌套循环语句中；
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
			if (j == 5)
			{
				break;//退出内层循环；
			}
		}
		cout << endl;
		
	}


	system("pause");
	return 0;
}