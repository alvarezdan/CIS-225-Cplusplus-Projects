#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cout << "Enter a string: ";
	getline(cin, input);
	cout << "Number of characters: " << input.length() << endl;

	system("pause");
	return 0;
}