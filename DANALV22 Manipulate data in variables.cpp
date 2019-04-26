#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1, num2;
	double sale;
	char first;
	string str;
	string newstr;

	num1 = 4;
	cout << "num1 = " << num1 << endl;

	num2 = 4 * 5 - 11;
	cout << "num2 = " << num2 << endl;

	sale = 0.02 * 1000;
	cout << " sale = " << sale << endl;

	first = 'D';
	cout << "first = "  << num2 << endl;

	str = "It is a sunny day.";
	cout << "str = " << str << endl;
	cout << "Enter a new string " << newstr << endl;
	getline(cin,newstr);
	cout << "The new string you entered is: " << newstr << endl;
	
	system("pause");
	return 0;
}