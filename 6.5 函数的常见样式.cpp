#include<iostream>
using namespace std;
//���������ֳ�����ʽ��
//1.�޲��޷���
void test51()
{
	cout << "this is test 1" << endl;
}

//2.�в��޷���
void test52(int num1, int num2)
{
	cout << "this is test 2 �����ֵΪ��num1 = " << num1 << " num2 = " << num2 << endl;
}

//3.�޲��з���
string test53()
{
	cout << "this is test 3" << endl;
	return "����Ӵ������";
}

//4.�в��з���
int test54(int num1,int num2)
{
	cout << "this is test 4" << endl;
	return num1 * num2;
}

int main5()
{
	//�޲��޷������ĵ��ã�
	test51();

	//�в��޷������ĵ��ã�
	test52(10, 20);

	//�޲��з������ĵ��ã�
    test53();
	cout << test53() << endl;

	//�в��з������ĵ��ã�
	int  result = test54(52,10);
	cout << "num1��num2 = " << result << endl;

	system("pause");
	return 0;
}