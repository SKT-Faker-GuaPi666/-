#include<iostream>
using namespace std;

//��ǰ���߱����������Ĵ��ڣ��������ú�����������
//������������

void swap6(int a, int b);


//�ȽϺ�����ʵ�������������ֽ��бȽϣ����ؽϴ��ֵ��

int max6(int num1, int num2)
{
	return num1 > num2 ? num1 : num2;
}
int main6()
{
	//����max�ĵ��ã�
	int a = 11;
	int b = 22;
	cout << max(a, b) << endl;
	//����swap�ĵ��ã�
	int c = 33;
	int d = 44;
	swap(c, d);

	system("pause");
	return 0;
}
void swap(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}