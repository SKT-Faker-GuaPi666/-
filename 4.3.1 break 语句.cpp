#include<iostream>;
using namespace std;
int main()
{
	//break��ʹ��ʱ����
	//1.������switch����У�
	cout << "��ѡ�񸱱��Ѷ�" << endl;
	cout << "1����" << endl;
	cout << "2����ͨ" << endl;
	cout << "3���е�" << endl;
	cout << "4������" << endl;
	int select = 0;
	cin >> select;
	switch (select)
	{
	case 1:
		cout << "��ѡ����Ǽ�ģʽ" << endl;
		break;
	case 2:
		cout << "��ѡ�������ͨģʽ" << endl;
		break;
	case 3:
		cout << "��ѡ������е�ģʽ" << endl;
		break;
	case 4:
		cout << "��ѡ���������ģʽ" << endl;
		break;
	default:
		break;
	}

	//2.������ѭ������У�
	for (int a = 1; a < 10; a++)
	{
		cout << a << endl;
		if (a == 5)//���i����5���Ƴ�ѭ�������ٴ�ӡ��
		{
			break;//�ڴ˴��˳�ѭ����
		}
	}



	//3.������Ƕ��ѭ������У�
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
			if (j == 5)
			{
				break;//�˳��ڲ�ѭ����
			}
		}
		cout << endl;
		
	}


	system("pause");
	return 0;
}