#include <iostream>
#include <iomanip>

using namespace std;

const double pi = 3.14159;

int main()
{
	double height, radius, volume, surface;

	; cout << fixed << showpoint << setprecision(2);

	; cout << "Enter a the height and radius of a cylinder: ";
	cin >> height >> radius;
	cout << endl;

	cout << "You have entered: " << height
		<< " For the height and " << radius
		<< " For the radius. " << endl;

	volume = pi * radius * radius * height
		; surface = (2 * pi * radius * radius) + (2 * 3.14 * radius * height)

		; cout << " The volume of the cylinder is = "
		<< volume << endl;
	cout << " The surface of the cylinder is = "
		<< surface << endl;
	system("pause");
	return 0;
}