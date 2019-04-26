#include <iostream>
#include <string>

using namespace std;

int main()
{

	double temp1, temp2, temp3;
	double set1, set2, set3;
	

	cout << "Enter the values of current temperatures: ";
	cin >> temp1 >> temp2 >> temp3;
	cout << endl;
	cout << "Enter the values of desired temperatures: ";
	cin >> set1 >> set2 >> set3;
	cout << endl;

	cout << "The current temperatures are: " << temp1
		<< ", for the first floor. ";
	cout << endl;
	cout << "The desired temperatures are: " << set1
		<< ", for the first floor. ";
	cout << endl;

	cout << "The current temperatures are: " << temp2
		<< ", for the second floor. ";
	cout << endl;
	cout << "The desired temperatures are: " << set2
		<< ", for the second floor. ";
	cout << endl;

	cout << "The current temperatures are: " << temp3
		<< ", for the third floor. ";
	cout << endl;
	cout << "The desired temperaturee are: " << set3
		<< ", for the third floor. ";
	cout << endl;

	if (set1 <= temp1 && set2 <= temp2 && set3 <= temp3)
		cout << "The Logic Circuity Combination Output is 0 0 0. "; //case1

	else if (set1 <= temp1 && set2 <= temp2 && set3 > temp3)
		cout << "The Logic Circuity Combination Output is 0 0 1. "; //case2

	if (set1 <= temp1 && set2 > temp2 && set3 <= temp3)
		cout << "The Logic Circuity Combination Output is 0 1 0. "; //case3

	else if (set1 <= temp1 && set2 > temp2 && set3 > temp3)
		cout << "The Logic Circuity Combination Output is 0 1 1. "; //case4

	if (set1 > temp1 && set2 <= temp2 && set3 <= temp3)
		cout << "The Logic Circuity Combination Output is 1 0 0. "; //case5

	else if (set1 > temp1 && set2 <= temp2 && set3 > temp3)
		cout << "The Logic Circuity Combination Output is 1 0 1. "; //case6

	if (set1 > temp1 && set2 > temp2 && set3 <= temp3)
		cout << "The Logic Circuity Combination Output is 1 1 0. "; //case7

	else if (set1 > temp1 && set2 > temp2 && set3 > temp3)
		cout << "The Logic Circuity Combination Output is 1 1 1. "; //case8


	system("pause");
	return 0;
}