/* 포인터 연산과 배열 인덱싱 */
#include<iostream>
using namespace std;

int main()
{
	// pointer를 사용한 예시
	int value = 7;
	int *ptr = &value;// pointer 또한 데이터의 표현을 위해 data type이 필요하다.

	cout << uintptr_t(ptr-1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr+2) << endl;

	// 배열을 사용한 예시

	int array[] = { 9, 7, 5, 3, 1 };// 주소가 이웃해있다 ==> 차례대로 꺼내 볼 수 있다.

	cout << array[0] << " " << (uintptr_t)&array[0] << endl;
	cout << array[1] << " " << (uintptr_t)&array[1] << endl;
	cout << array[2] << " " << (uintptr_t)&array[2] << endl;
	cout << array[3] << " " << (uintptr_t)&array[3] << endl;
	cout << array[4] << " " << (uintptr_t)&array[4] << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " " << (uintptr_t)&array[i] << endl;
	}


	// ptr을 이용한 구현

	int arraye[] = { 1, 2, 3, 4, 5 };

	int * ptr = arraye;
	for (int i = 0; i < 5; i++)
	{
		cout << * /* *을 붙이는 것은 역참조임. */(ptr + i) << (uintptr_t)(ptr + i) << endl;
	}

	// char을 이용한 구현

	char name[] = "eunbual"; // 내부적으로는 포인터 이기 때문에 포인터 연산이 작동하게 된다. 

	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; i++)
	{
		cout << *(ptr + i);
	}

	// pointer 연산이 indexing에 사용되는 예시이다.

	return 0;
}