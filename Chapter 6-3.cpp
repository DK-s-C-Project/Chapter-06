/*Array & Repitivie statement */

#include<iostream>
using namespace std;

int main()
{
	const int num_student = 5;

	int socre0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;

	int total_score = score1 + score2 + score3 + score4;

	double avg_score = static_cast<double>(total_score) / num_student;
	// Note: double(total_score) / num_student != double(total_score / num_student); --> the output could be difftent in this case, beaware of it.

	return 0;
}

// Changed in Repitival statement
int main()
{
	const int num_student = 5;
	int scores[num_student] = { 84, 92, 76, 81, 56 }; 
	int total_score = 0;

	for (int i = 0; i < num_student; i++)
	{
		total_score += scores[i];
	}

	double avg_score = static_cast<double>(total_score) / num_student;

	return 0;
}

// Finding a max score student
int main()
{
	int scores[] = { 84, 92, 76, 81, 56 };

	const int num_student = sizeof(scores) / sizeof(int);
	int max_score;
	int total_score = 0;

	for (int i = 0; i < num_student; i++)
	{
		total_score += scores[i];
		// max_score = (max_score < scores[i]) ? scores[i]: max_score;
		if (max_score < scores[i]) max_score = scores[i]; // using if-loop
	}

	
	return 0;
}