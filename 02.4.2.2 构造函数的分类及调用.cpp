#include<iostream>
using namespace std;

//���캯���ķ��༰����
//1.����
//    ���ղ������ࣺ �вι��죨Ĭ�Ϲ��죩�� �вι���
//    �������ͷ��ࣻ ��ͨ����  ��������
class Person422
{
public:
	//���캯��
	Person422()
	{
		cout << "Person ���޲ι��캯������" << endl;
	}
	Person422(int a)
	{

		age = a;
		cout << "Person ���вι��캯������" << endl;
	}
	//�������캯��
	Person422(const Person422& p)
	{
		//������������ϵ��������ԣ�������������
		cout << "Person ���������ĵ���" << endl;
		age = p.age;
	}


	~Person422()
	{
		cout << "Person ��������������" << endl;
	}
	int age;
};

//2.����
void test42201()
{
	//���ŷ���

	Person422 p1;//Ĭ�Ϲ��캯�����ã�
	Person422 p2(10);//�вι��캯������
	Person422 p3(p2);//�������캯������

	/*cout << "p2������Ϊ��" << p2.age << endl;
	cout << "p3������Ϊ��" << p3.age << endl;*/
	//ע�⣺���ú�����ʱ�򣬲�Ҫ�ӣ������������������Ϊ�ô���Ϊһ��������������
	//������Ϊ�ڴ����������磺Person p1();



	//��ʾ����
	Person422 p4;
	Person422 p5 = Person422(10);//�вι���
	Person422 p6 = Person422(p4);//��������

	Person422(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	cout << "aaa" << endl;

	//ע������2
	//��Ҫ���ÿ������캯��  ��ʼ����������//Person(p3);
	//����������ΪPerson(p3)===Person p3;
	//����������Ϊ��һ�������������������ض��壻

	//��ʽת������
	Person422 p7 = 10;//�൱��  Person p7 = Person ��10�����вι���
	Person422 p8 = p7;//�൱��  Person p8 = Person ��p7������������

}



int main()
{
	test42201();
	system("pause");
	return 0;
}