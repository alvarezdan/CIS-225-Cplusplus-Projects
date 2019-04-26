#include <iostream>
#include <string>

using namespace std;

int main()
{
	double x, y, z, w;

	cout << "Enter the value for x, y, z and w: ";
	cin >> x >> y >> z >> w;
	cout << endl;
	cout << "The values you have entered are: " << x << " " << y << " " << z << " " << w << " ";
	cout << endl;

	if (z == x)
		cout << "The expression (z == z) is true in this case. " << endl;
	else
		cout << "The expression (z == z) is false in this case. " << endl;
	if ((z - 25) != (y + 10))
		cout << "The expression (z-25) != (y+10) is true in this case. " << endl;
	else
		cout << "The expression (z-25) != (y+10) is false in this case. " << endl;
	if (w >= z)
		cout << "The expression (w>=z) is true in this case. " << endl;
	else
		cout << "The expression (w>=z) is false in this case. " << endl;
	if ((w<x) && (y>z))
		cout << "The expression (w<x)&&(y>z) is true in this case. " << endl;
	else
		cout << "The expression (w<x)&&(y>z) is false in this case. " << endl;
	if ((z + 11) != (11 + z))
		cout << "The expression (z+11) != (11+z) is true in this case. " << endl;
	else
		cout << "The expression (z+11) != (11+z) is false in this case. " << endl;

	system("pause");
	return 0;
}