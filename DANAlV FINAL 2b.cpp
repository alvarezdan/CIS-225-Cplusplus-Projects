#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x1, x2, y1, y2;
	double distance

		; cout << "Enter the first x and y coordinates: ";
	cin >> x1 >> y1;
	cout << "Enter the second x and y coordinates: ";
	cin >> x2 >> y2;

	cout << "The first set of coordinates you entered are : " << x1 << " " << y1 << endl;
	cout << " and the second set of coordinates you entered are : " << x2 << " " << y2 << endl;

	distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))

		; cout << " The distance between the two points is = "
		<< distance << endl;
	system("pause");
	return 0;
}