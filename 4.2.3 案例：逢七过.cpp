#include<iostream>
using namespace std;
int main423()
{
	//���߹���������
	//1.���루1��100������
	for (int a = 1;a<=100; a++)
	{
	    //2.�жϣ��ҳ����У��κθ� 7 �йص����֣���ӡΪ����������
		if (a % 10 == 7|| a / 10 == 7|| a % 7 == 0)//ʹ�û���߼��������
		{
			cout << "��" << endl;
		}
		else
		{
			cout << a << endl;//�����������֣����ӡԭ���֣�
		}

	}
	system("pause");
	return 0;
}