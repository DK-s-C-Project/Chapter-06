/* C-style Array*/
#include<iostream>
using namespace std;

int main()
{
	char myString[] = "string";

	cout << sizeof(myString) / sizeof(myString[0]) << endl << endl;

	for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] <<endl;// at the end of the output there are "NULL" letter. It means the end of the code.
	}

	return 0;
}


// Array for cin

int main()
{
	char myString[225];
	cin >> myString;
	
	myString[4] = NULL;//when the NULL is used the print is canceled.

	cout << myString << endl;

	return 0; 
}

int main() // to print space(ºóÄ­À» ³Ö´Â °æ¿ì)
{
	char myString[225];
	cin.getline(myString, 225);
	cout << myString << endl;


	return 0;
}

int main() // print out the ASC code of the latter.
{
	char myString[225];
	cin.getline(myString, 225);

	int a = 0;
	while (true)
	{
		if (myString[a] == NULL) break;

		cout << myString[a] << " " << (int)myString[a] << endl;
		++a;
	}

	return 0;
}