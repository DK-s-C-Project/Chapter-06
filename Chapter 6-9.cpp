/* ������ ����� �迭 �ε��� */
#include<iostream>
using namespace std;

int main()
{
	// pointer�� ����� ����
	int value = 7;
	int *ptr = &value;// pointer ���� �������� ǥ���� ���� data type�� �ʿ��ϴ�.

	cout << uintptr_t(ptr-1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr+2) << endl;

	// �迭�� ����� ����

	int array[] = { 9, 7, 5, 3, 1 };// �ּҰ� �̿����ִ� ==> ���ʴ�� ���� �� �� �ִ�.

	cout << array[0] << " " << (uintptr_t)&array[0] << endl;
	cout << array[1] << " " << (uintptr_t)&array[1] << endl;
	cout << array[2] << " " << (uintptr_t)&array[2] << endl;
	cout << array[3] << " " << (uintptr_t)&array[3] << endl;
	cout << array[4] << " " << (uintptr_t)&array[4] << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " " << (uintptr_t)&array[i] << endl;
	}


	// ptr�� �̿��� ����

	int arraye[] = { 1, 2, 3, 4, 5 };

	int * ptr = arraye;
	for (int i = 0; i < 5; i++)
	{
		cout << * /* *�� ���̴� ���� ��������. */(ptr + i) << (uintptr_t)(ptr + i) << endl;
	}

	// char�� �̿��� ����

	char name[] = "eunbual"; // ���������δ� ������ �̱� ������ ������ ������ �۵��ϰ� �ȴ�. 

	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; i++)
	{
		cout << *(ptr + i);
	}

	// pointer ������ indexing�� ���Ǵ� �����̴�.

	return 0;
}