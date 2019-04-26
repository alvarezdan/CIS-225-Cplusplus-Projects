//******************************************
//CIS 225 PRACTICE CONVERSION UNITS
//
//
//
//bit
//******************************************

//header file
#include <iostream>

using namespace std;

//named constants
const int BITS_PER_KILOBITS = 1000;
const int BITS_PER_BYTES = 8;

int main()
{
	//declare variables
	int bytes, bits;
	int totalBits;
	double kilobits;

	//Statements: Step 1 - Step 7
	cout << "Enter two integers, one for bytes and "
		<< "one for bits: ";
	cin >> bytes >> bits;							//Step 1
	cout << endl;									//Step 2

	cout << "The numbers you entered are " << bytes
		<< " for bytes and " << bits
		<< " for bits. " << endl;					//Step 3

	totalBits = BITS_PER_BYTES * bytes + bits;		//Step 4

	cout << "The total number of bits = "
		<< totalBits << endl;						//Step 5

	kilobits = totalBits / BITS_PER_KILOBITS;		//Step 6

	cout << "The number of kilobits = "
		<< kilobits << endl;						//Step 7
	system("pause");

	return 0;
}