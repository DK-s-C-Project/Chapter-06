/*Multi - dimensional Array*/
#include<iostream>
using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_colums = 5;

	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		cout << endl;
	}
	cout << endl;

	// Decalre og 4th Demention

	int array[num_rows][num_colums] // row-major <-> colum-major
	// array[0][0] = 1.0; --> 일일이 초기화 하는 방법
	{
		{1,2,3,4,5}, // row 0
		{6,7,8,9,10}, // row 1
		{11,12,13,14,15} // row 2
	};
	///////////////
	for (int row = 0; row < num_rows; ++row)
	{
		for (int col = 0; col < num_colums; ++col)
			/*cout << array[row][col] << '\t';*/
		cout << (int)&array[row][col] << '\t';// 외부 적으로는 4차원 배열이지만 내적으론 1차원 배열이다.(4byte씩 증가 했기 때문)

		cout << endl;
	}
	cout << endl;

	return 0;
}