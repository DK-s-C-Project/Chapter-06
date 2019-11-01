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

	cout << (int)&students_score << endl; //���� ����� �ּҿʹ� ���� �ּ� ���� �ٸ���. �ֳ��ϸ� �ڵ带 ���� ��ų �� ������ ������ �Ͽ� ���� ���� void�� ������ �ִ� ���� �̱� �����̴�.

	cout << "size in int main fuction" << sizeof(students_score) << endl; // 80

	doSomething(students_score);
	return 0;
}