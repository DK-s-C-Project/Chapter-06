/*�����Ϳ� �����迭 */
#include<iostream>
using namespace std;

void printArray(int array[])// �ֳ��ϸ� array�� �迭ó�� �������� �������̱� ���� int *array[] �̷��� ���� �Ͱ� �����ϴ�.
{
	cout << sizeof(array) << endl;// 20�� �� �������� 4�� ���´�. (����)
	cout << *array << endl;
	*array = 100;

}

int main()
{
	 //array
	int array[5] = { 1, 2, 3, 4, 5 };

	cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &array[0] << endl;

	//pointer�� �̿��� ���� ����غ���
	cout << *array << endl;

	char name[] = "damienko";
	cout << *name << endl;// �����迭 = Pointer

	int *ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	int arrays[5] = { 6, 7, 8, 9, 0 };
	cout << sizeof(arrays) << endl; // 20 --> array=5 int =4 5*4=20

	int *ptrs = arrays;
	cout << sizeof(ptrs) << endl;// 4 --> pointer���� ��ü�� 4byte��
	cout << *ptr << " " << *(ptr + 1) << endl; // --> Pointer array���� �� ���� ���� ��� �Ѵ�.
	printArray(array);
	cout << array[0] << " " << *array << endl; // �Լ� �ۿ����� ���� �ٲٱ� ���� ����ϱ⵵ �Ѵ�.(C����). CPP������ referance�� ����Ѵ�.
	return 0;
}