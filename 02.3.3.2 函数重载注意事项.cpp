#include<iostream>;
using namespace std;

//�������ص�ע������
//1.������Ϊ���ص�������
void func33201(int& a)
{
	cout << "func(int& a)����" << endl;
}

void func33201(const int& a)//��ֻ��״̬������
{
	cout << "func(const int& a)����" << endl;
}

//2.������������Ĭ�ϲ�����
void func33202(int a)
{
	cout << "func33202(int a)����" << endl;
}

void func33202(int a, int b = 20)
{
	cout << "func33202(int a, int b = 20)����" << endl;
}


int main()
{
	int a = 10;
	func33201(a);
	const int b = 20;
	func33201(b);
	func33201(10);
	func33202(10,10);//�ô��Σ�����������ֵ�����Ե���func33202(int a, int b = 20)
	//func33202(10);//�ô��Σ�ֻ��һ������ֵ�����ڶ����ԣ��������޷������
	system("pause");
	return 0;
}