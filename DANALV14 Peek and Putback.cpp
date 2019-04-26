// Functions peek and putback

#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Line 1: Enter a string: ";			// Line 11 = ABCDEFG
	cin.get(ch);
	cout << endl;
	cout << "Line 4: After first cin.get(ch); " 
		<< "ch = " << ch << endl;				// Line 15 = A

	cin.get(ch);
	cout << "Line 6: After second cin.get(ch); "
		<< "ch = " << ch << endl;				// Line 19 = B

	cin.putback(ch);
	cin.get(ch);								// Line 22 = B
	cout << "Line 9: After putback and then "
		<< "cin.get(ch); ch = " << ch << endl;

	ch = cin.peek();							// Line 26
	cout << "Line 11: After cin.peek(); ch = "
		<< ch << endl;							// Line 28

	cin.get(ch);								// Line 30 = c
	cout << "Line 13: After cin.get(ch); ch = "
		<< ch << endl;

	cin.get(ch);								// Line 34 = D
	cout << "Line 14: After cin.get(ch); ch = "
		<< ch << endl;

	cin.get(ch);								// Line 38 = E
	cout << "Line 16: After cin.get(ch); ch = "
		<< ch << endl;							// Line 40

	cin.putback(ch);							// Line 42 
	cin.get(ch);								// Line 43 = E
	cout << "Line 18: After putback and then "
		<< "cin.get(ch); ch = " << ch << endl;

	ch = cin.peek();							// Line 47 = F
	cout << "Line 11: After cin.peek(); ch = "
		<< ch << endl;

	
	
	cin.putback(ch);							// Line 53
	cin.get(ch);								//
	cout << "line 21: After putback and then "
		<< "cin.get(ch); ch = " << ch << endl;

	system("pause");
	return 0;
}