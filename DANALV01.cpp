#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3;

	num1 = 125;
	num2 = 28;
	num3 = -25;
	
	int average = (num1 + num2 + num3) / 3;

	cout << "Num 1 = " << num1 << endl;
	cout << "Num 2 = " << num2 << endl;
	cout << "Num 3 = " << num3 << endl;
	cout << "Average = " << average << endl;
	system("pause");

	return 0;
}