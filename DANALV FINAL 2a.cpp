#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi = 3.14159;

int main()
{
	double radius, volume;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the radius of a sphere: ";
	cin >> radius;
	cout << endl;

	cout << "You have entered: " << radius
		<< " For the radius. " << endl;

	volume = (1.33333333333333) * pi * radius * radius * radius


		; cout << " The volume of the sphere is = "
		<< volume << endl;
	system("pause");
	return 0;
}