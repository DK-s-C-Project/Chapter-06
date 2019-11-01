/* The example of the c-style array code*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char source[] = "Copy this";
	char dest[50];
	strcpy_s(dest, source);

	cout << source << endl;
	cout << dest << endl;

	return 0;
}