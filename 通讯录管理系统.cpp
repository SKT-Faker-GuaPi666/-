//��װ������ʾ�ý��棬��void showMenu()
//��main�����е��÷�װ�õĺ���
#include<iostream>
using namespace std;
#define MAX 1000

//�����ϵ�˽ṹ�壻
struct Person
{
	string m_name;//������
	string m_sex;//�Ա�
	int m_age;//���䣻
	string m_phone;//�绰��
	string m_addr;//סַ��
};
//ͨѶ¼�Ľṹ�壻
struct Addressbooks
{
	Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int m_Size;//ͨѶ¼�е�ǰ��¼��ϵ�˸���
};

//1�������ϵ�ˣ�
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ�����ӣ�
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�����" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ�ˣ�
		//������
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_name = name;
		//�Ա�
		string sex;
		while (true)
		{
			cout << "�������Ա�" << endl;
			cin >> sex;
			if (sex == "��" || sex == "Ů")
			{
				abs->personArray[abs->m_Size].m_sex = sex;
				break;
			}
			else
			{
				cout << "��������Ա���Ч������������" << endl;
			}
		}
		//���䣻
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_age = age;
		//�绰��
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_phone = phone;
		//סַ��
		cout << "������סַ��" << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_addr = addr;
		//����ͨѶ¼����
		abs->m_Size++;
		cout << "��ӳɹ�!" << endl;
		cout << "���У�" << abs->m_Size << "��" << endl;
		system("pause");
		system("cls");//����������
	}
}

//2.��ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0����Ϊ0����ʾ��¼Ϊ��
	//�����Ϊ0����ʾ��¼����ϵ����Ϣ��
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_name
				<< "\t�Ա�" << abs->personArray[i].m_sex
				<< "\t���䣺" << abs->personArray[i].m_age
				<< "\t�绰��" << abs->personArray[i].m_phone
				<< "\t��ַ��" << abs->personArray[i].m_addr << endl;
		}
	}
	system("pause");
	system("cls");
}
//�����ϵ���Ƿ���ڣ�������ϵ�����������еľ���λ�ã���������ӳ��ʾ��
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_name == name)
		{
			return i;//�ҵ��򷵻�������������еı�ţ�
		}
	}
	return -1;//��������û���ҵ��򷵻�-1��
}

//3.ɾ��ָ������ϵ�ˣ�
void deletPerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//�ҵ����ˣ�����ɾ����
		for (int i = ret; i < abs->m_Size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//4.������ϵ�ˣ�
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	//�ж�ָ������ϵ���Ƿ���ڣ�
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].m_name
			<< "\t�Ա�" << abs->personArray[ret].m_sex
			<< "\t���䣺" << abs->personArray[ret].m_age
			<< "\t�绰��" << abs->personArray[ret].m_phone
			<< "\t��ַ��" << abs->personArray[ret].m_addr << endl;
	}
	else 
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//5.�޸�ָ������ϵ����Ϣ��
void modifyPerson(Addressbooks* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//������
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_name = name;
		//�Ա�
		string sex;
		while (true)
		{
			cout << "�������Ա�" << endl;
			cin >> sex;
			if (sex == "��" || sex == "Ů")
			{
				abs->personArray[ret].m_sex = sex;
				break;
			}
			else
			{
				cout << "��������Ա���Ч������������" << endl;
			}
		}
		//���䣻
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_age = age;
		//�绰��
		cout << "������绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_phone = phone;
		//סַ��
		cout << "������סַ��" << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_addr = addr;

		cout << "�޸ĳɹ�������" << endl;
	}
	else 
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//6.���������ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;//����ǰ��¼��ϵ����������Ϊ0�����߼���ղ�����
	cout << "ͨѶ¼����գ�����" << endl;

	system("pause");
	system("cls");
}


//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸�������  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}


int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	
	while (true)
	{
		//���ò˵����棻
		showMenu();
		int select = 0;//�����û�ѡ������ı�����
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addPerson(&abs);//���õ�ַ���ݣ��޸�ʵ�Σ�
			break;
		case 2:// 2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��
			deletPerson(&abs);
			break;
		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5:// 5���޸�������
			modifyPerson(&abs);
			break;
		case 6:// 6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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