/*The Basic use of the Pointer */
// There are refrence for Pointer resad it.
#include<iostream>
#include<typeinfo>
using namespace std;

int *dosomething(int*ptr_a)
{
	return nullptr;
}// 이렇게 Parameter식으로도 사용이 가능하다.


int main()
{
	int x = 5;
	cout << x << endl;
	cout <<(int)&x << endl;// & : address of the value.

	// de-reference operator (*)

	cout << *&x << endl;//메모리의 주소로 갔다가 다시 그 값을 꺼내 오는 원리이기 때문에 원래 값인 5가 출력이 된다.

	int *ptr_x = &x;// 포인터로도 변수를 선언 할 수 있다. + *을 계속 붙여 주어야 한다!! 조심 할 것.
	// 포인터에 어떤 값을 넣어 주고 변수의 주소를 포인터에 넣어 주고 있다.--> 포인터에 저장 되는 것은 주소.
	// Pointer가 저장하는 함수의 자료형을 알고 있어야 한다. 왜냐하면  de-reference 할 때 사용할 자료형을 알고 있어야 하기 때문.

	cout << ptr_x << endl;
	cout << *ptr_x << endl;
	cout << typeid(ptr_x).name() << endl;

	typedef int*pint;
	//pint ptr_x = &x,ptr_y=&x;
	pint ptr_x = &x, ptr_y = &x;

	 
	/* Pointer를 사용하는 이유
	
	Array. 즉 배열 떄문이다. Array에는 백만개의 Data type이 존재하며 이것을 For 문으로 실행 할 경우, 백만개의 데이터를 모두 복사 해야 한다.
	=> 메모리에 부담이가고 코드가 느려 진다. Pointer는  첫번째 주소와 데이터의 수량만 알려주면 그것을 지정해서 실행을 시켜 주는 구조이기 때문에
	코딩의 속도성과 편리성을 위해 사용을 한다*/


	
	return 0;
}