/* Selection Sort - 배열과 선택 정렬*/
#include<iostream>
using namespace std;

void printArray(const int array[], int length)
{
	for (int index = 0; index < length; ++index)
		cout << array[index] << " ";
	cout << endl;
}
/*   <graph 1>          */
/*                      value          index
     3 5 2 1 4            3              0
	 1 5 2 3 4 
	 1 2 5 3 4
	 1 2 3 5 4
	 1 2 3 4 5
	                   ---> 노트에 정리를 해놓았다. 궁금하면 찾아보거나 강의 초반 부분을 다시 들어 볼 것. (순서는 및으로 내려 가는 것이다.)

*/

int main()
{
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };

	printArray(array,length);

	////swap 3 <-> 5
	//int temp = array[0];
	//array[0] = array[1];
	//array[1] = temp;

	//printArray(array, length); // --> 5,3,2,1,4
	//// std::swap(....) -> find out latter.

	for (int startIndex = 0; startIndex < length - 1; ++startIndex) 
		/*the reason of  'startIndex < length - 1' is, with the graph1. The finding method runs 4times, while there are 5sentence. 
		Because at the last sentnece are complte. so it needs 4 methods in 5 sentence. (5개의 단계가 있으면 4번의 연산이 필요하다.)*/ 
	{
		int  smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] > array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		{
            //swap two values in the array
			//std::swap(array[smallestIndex], array[startIndex]) --> it could be shorted in this way.
			int temp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = temp;

		}
		printArray(array, length);
	}


	return 0;
}

// annalise this code with the Debug.
// Look for Bubble sort too.