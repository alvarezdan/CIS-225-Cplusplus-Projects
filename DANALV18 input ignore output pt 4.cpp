#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int basenum, powerof, result1, result2;

	cout << "Enter two numbers, the base number first then enter number to the power of: ";

	cin >> basenum;
	cin >> powerof;
	result1 = pow(basenum, powerof);
	result2 = sqrt(basenum);

	cout << "The result of taking the basenum to the power of is: ";
	cout << result1;
	cout << endl;
	cout << "The extraction of the square root of the base number is: ";
	cout << result2;
	cout << endl;
	cout << "********************************************************************************"
		; cout << endl;

	system("pause");
	return 0;
}