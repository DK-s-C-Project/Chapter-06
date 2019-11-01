/*포인터와 정적배열 */
#include<iostream>
using namespace std;

void printArray(int array[])// 왜냐하면 array가 배열처럼 보이지만 포인터이기 때문 int *array[] 이렇게 쓰는 것과 동일하다.
{
	cout << sizeof(array) << endl;// 20일 것 같았으나 4가 나온다. (위로)
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

	//pointer를 이용한 값을 출력해보기
	cout << *array << endl;

	char name[] = "damienko";
	cout << *name << endl;// 정적배열 = Pointer

	int *ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	int arrays[5] = { 6, 7, 8, 9, 0 };
	cout << sizeof(arrays) << endl; // 20 --> array=5 int =4 5*4=20

	int *ptrs = arrays;
	cout << sizeof(ptrs) << endl;// 4 --> pointer변수 자체가 4byte임
	cout << *ptr << " " << *(ptr + 1) << endl; // --> Pointer array에서 그 다음 값을 출력 한다.
	printArray(array);
	cout << array[0] << " " << *array << endl; // 함수 밖에서도 값을 바꾸기 위해 사용하기도 한다.(C에서). CPP에서는 referance를 사용한다.
	return 0;
}