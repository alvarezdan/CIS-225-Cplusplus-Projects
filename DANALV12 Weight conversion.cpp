#include <iostream>
#include <iomanip>

using namespace std;

const double kg_per_lb = 2.20;

int main()
{
	double kgweight

		; cout << fixed << showpoint << setprecision(2);

	; cout << "Enter a weight in kilograms: ";
	cin >> kgweight;
	cout << endl;

	cout << "Your weight in pounds is: "
		<< kgweight * kg_per_lb << endl;
	system("pause");
	return 0;
}