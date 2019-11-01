/* 구조체를 밖으로 보내는 Array*/
#include<iostream>
using namespace std;

struct Mystrucrt
{
	int array[5] = { 1, 2, 3, 4, 5 };
};

void dosomething(Mystrucrt ms)
{
	cout << sizeof(ms.array) << endl;
}

int main()
{
	Mystrucrt ms;

	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	dosomething(ms);


	return 0;
}