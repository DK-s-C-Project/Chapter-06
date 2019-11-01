/* Array (배열)*/
#include<iostream>
using namespace std;

int main()

{
	// Before using Array

	/*int student1_score1;
	int student1_score2;
	int student1_score3;
	int student1_score4;
	int student1_score5;*/

	// Using Array
	int one_student_score;
	int student_score[5]; // 5 int

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_score) << endl;
	
	one_student_score = 100;

	student_score[0]/* it is called index*/ = 100; // most of the array starts with 0!! - 1st element
	student_score[1] = 90; // - 2nd element
	student_score[2] = 80; // - 3rd element
	student_score[3] = 70; // - 4th element
	student_score[4] = 60; // - 5th element

	cout << (student_score[0] + student_score[5]) / 2.0 << endl;

	

	return 0;
}


// Building a rectangle
struct Rectangle
{
	int length;
	int width;
};

int main()
{

	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	return 0;

}

// Array를 초기화 하는 방법

enum Student
{
	Damien,
	her,
	she,
	NUM_STUDENTS,
};

int main()
{
	int my_array[] = { 1, 2, 3, 4, 5 };
	int stedent_sc[NUM_STUDENTS]; // 이런 식으로 초기화가 가능하다.

	
	cout << my_array[Damien] << endl;
	cout << my_array[her] << endl;
	cout << my_array[she] << endl;

	cout << my_array[3] << endl;
	cout << my_array[4] << endl;

	return 0;

}

// cin을 이용하여 입력 받는 Array

// c의 자료 구조과정에서 이렇게 구현을 하기 도 한다#define num_student = 100000

int main()
{
	int num_student = 0;
	cin >> num_student;

	// int student_sco[num_student]; --> 이렇게 바로 초기화를 하는 경우 에러가 발생한다. 이유는 입력 받을 값의 length를 알지 못하기 때문. "사용이 고정이 된 Array에는 사용이 불가능"
	

	return 0;
}

// in down statement it could be used by adding const.
int main()
{
	const int num_student = 5;
	// cin >> num_student;
	int student_score[5];

	return 0;
}

// 6-2에서 계속