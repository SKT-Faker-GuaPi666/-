//封装函数显示该界面，如void showMenu()
//在main函数中调用封装好的函数
#include<iostream>
using namespace std;
#define MAX 1000

//设计联系人结构体；
struct Person
{
	string m_name;//姓名；
	string m_sex;//性别；
	int m_age;//年龄；
	string m_phone;//电话；
	string m_addr;//住址；
};
//通讯录的结构体；
struct Addressbooks
{
	Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;//通讯录中当前记录联系人个数
};

//1、添加联系人；
void addPerson(Addressbooks* abs)
{
	//判断通讯录是否已满，如果满了就不再添加；
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！！！" << endl;
		return;
	}
	else
	{
		//添加具体联系人；
		//姓名；
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_name = name;
		//性别；
		string sex;
		while (true)
		{
			cout << "请输入性别：" << endl;
			cin >> sex;
			if (sex == "男" || sex == "女")
			{
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			else
			{
				cout << "您输入的性别无效，请重新输入" << endl;
			}
		}
		//年龄；
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;
		//电话；
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;
		//住址；
		cout << "请输入住址：" << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_addr = addr;
		//更新通讯录人数
		abs->m_Size++;
		cout << "添加成功!" << endl;
		cout << "现有：" << abs->m_Size << "人" << endl;
		system("pause");
		system("cls");//清屏操作；
	}
}

//2.显示所有联系人
void showPerson(Addressbooks* abs)
{
	//判断通讯录人数是否为0；若为0，提示记录为空
	//如果不为0，显示记录的联系人信息；
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_name
				<< "\t性别：" << abs->personArray[i].m_sex
				<< "\t年龄：" << abs->personArray[i].m_age
				<< "\t电话：" << abs->personArray[i].m_phone
				<< "\t地址：" << abs->personArray[i].m_addr << endl;
		}
	}
	system("pause");
	system("cls");
}
//检测联系人是否存在，返回联系人所在数组中的具体位置，不存在则反映提示；
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;//找到则返回这个人在数组中的编号，
		}
	}
	return -1;//若遍历后没有找到则返回-1；
}

//3.删除指定的联系人；
void deletPerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//找到此人，进行删除；
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//4.查找联系人；
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;
	//判断指定的联系人是否存在；
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_name
			<< "\t性别：" << abs->personArray[ret].m_sex
			<< "\t年龄：" << abs->personArray[ret].m_age
			<< "\t电话：" << abs->personArray[ret].m_phone
			<< "\t地址：" << abs->personArray[ret].m_addr << endl;
	}
	else 
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//5.修改指定的联系人信息；
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入要修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名；
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		//性别；
		string sex;
		while (true)
		{
			cout << "请输入性别：" << endl;
			cin >> sex;
			if (sex == "男" || sex == "女")
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "您输入的性别无效，请重新输入" << endl;
			}
		}
		//年龄；
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;
		//电话；
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//住址；
		cout << "请输入住址：" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_addr = addr;

		cout << "修改成功！！！" << endl;
	}
	else 
	{
		cout << "查无此人！" << endl;
	}
	system("pause");
	system("cls");
}

//6.清空所有联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//将当前记录联系人数量重置为0，做逻辑清空操作；
	cout << "通讯录已清空！！！" << endl;

	system("pause");
	system("cls");
}


//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改连续人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}


int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	
	while (true)
	{
		//调用菜单界面；
		showMenu();
		int select = 0;//创建用户选择输入的变量；
		cin >> select;
		switch (select)
		{
		case 1://1、添加联系人
			addPerson(&abs);//利用地址传递，修改实参；
			break;
		case 2:// 2、显示联系人
			showPerson(&abs);
			break;
		case 3://3、删除联系人
			deletPerson(&abs);
			break;
		case 4://4、查找联系人
			findPerson(&abs);
			break;
		case 5:// 5、修改连续人
			modifyPerson(&abs);
			break;
		case 6:// 6、清空联系人
			cleanPerson(&abs);
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}