/*The Basic use of the Pointer */
// There are refrence for Pointer resad it.
#include<iostream>
#include<typeinfo>
using namespace std;

int *dosomething(int*ptr_a)
{
	return nullptr;
}// �̷��� Parameter�����ε� ����� �����ϴ�.


int main()
{
	int x = 5;
	cout << x << endl;
	cout <<(int)&x << endl;// & : address of the value.

	// de-reference operator (*)

	cout << *&x << endl;//�޸��� �ּҷ� ���ٰ� �ٽ� �� ���� ���� ���� �����̱� ������ ���� ���� 5�� ����� �ȴ�.

	int *ptr_x = &x;// �����ͷε� ������ ���� �� �� �ִ�. + *�� ��� �ٿ� �־�� �Ѵ�!! ���� �� ��.
	// �����Ϳ� � ���� �־� �ְ� ������ �ּҸ� �����Ϳ� �־� �ְ� �ִ�.--> �����Ϳ� ���� �Ǵ� ���� �ּ�.
	// Pointer�� �����ϴ� �Լ��� �ڷ����� �˰� �־�� �Ѵ�. �ֳ��ϸ�  de-reference �� �� ����� �ڷ����� �˰� �־�� �ϱ� ����.

	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	cout << typeid(ptr_x).name() << endl;

	typedef int*pint;
	//pint ptr_x = &x,ptr_y=&x;
	pint ptr_x = &x, ptr_y = &x;

	 
	/* Pointer�� ����ϴ� ����
	
	Array. �� �迭 �����̴�. Array���� �鸸���� Data type�� �����ϸ� �̰��� For ������ ���� �� ���, �鸸���� �����͸� ��� ���� �ؾ� �Ѵ�.
	=> �޸𸮿� �δ��̰��� �ڵ尡 ���� ����. Pointer��  ù��° �ּҿ� �������� ������ �˷��ָ� �װ��� �����ؼ� ������ ���� �ִ� �����̱� ������
	�ڵ��� �ӵ����� ������ ���� ����� �Ѵ�*/


	
	return 0;
}