/* Array */

#include<iostream>
using namespace std;

int main()
{
	const int num_students = 20;
	//cin >> num_students;

	int students_score[num_students];

	cout << &students_score << endl; // address of array
	cout << &students_score[0] << endl; // address of first array
	cout << &students_score[1] << endl; // address of secend array

	cout << sizeof(students_score) << endl;
	return 0;
}


// the code could be change in this pattern

void doSomething(int student_score[20])
{
	cout <<(int)&student_score << endl; // The address of '(int)&student_score - void ' and '(int)&students_score - int main' are diffrent. 
	cout << student_score[0] << endl;   //Because when the void starts, it declares new address. so it use more(new) memory.                                                                                    
	cout << student_score[1] << endl;
	cout << student_score[2] << endl;
	cout << "size in dosomething" << sizeof(student_score) << endl; // 4 --> this is a 'pointer' size.
}

int main()
{
	const int num_students = 20;
	// cin >>num_students;
	int students_score[num_students] = { 1, 2, 3, 4, 5, };

	cout << students_score[0] << endl;
	cout << students_score[1] << endl;
	cout << students_score[2] << endl;

	cout << (int)&students_score << endl; //위의 선언된 주소와는 서로 주소 값이 다르다. 왜냐하면 코드를 실행 시킬 때 새로이 선언을 하여 생긴 값을 void에 복사해 넣는 원리 이기 때문이다.

	cout << "size in int main fuction" << sizeof(students_score) << endl; // 80

	doSomething(students_score);
	return 0;
}