#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int r, s;

	cout << "Enter the first set of values then press enter for second set ";

	cin >> r;
	cin.ignore(100, '\n');
	cin >> s;

	cout << "The values for r and s are ";
	cout << r << " " << " and " << " " << s;
	cout << endl;
	cout << "================================================================="
; cout << endl;

	system("pause");
	return 0;
}