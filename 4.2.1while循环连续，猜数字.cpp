#include<iostream>
using namespace std;
#include<ctime>
//timeϵͳʱ��ͷ�ļ�����
int main()
{
	//���������ӣ����õ�ǰϵͳʱ���������������ֹÿ���������һ����
	srand((unsigned int)time(NULL));
	cout << "������1��100������" << endl;
	//1.ϵͳ�����������
	int num = rand() % 100 + 1;
	//2.��ҽ��в²⣻
	int val = 0;
	//3.�ж���ҵĲ²⣻
	//�¶�   �Ƴ���
	//�´�   ��ʾ ������С  ���·��صڶ����裻
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ���¶���" << endl;
			break;
		}
	}


	system("pause");
	return 0;
}