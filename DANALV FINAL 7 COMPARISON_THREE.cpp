#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3;

	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;

	cout << "You have entered " << n1 << ", " << n2 << ", " << n3 << ". ";
	cout << endl;

	if (n1 >= n2 && n1 >= n3)
	{
		cout << "The largest number is: " << n1;
	}

	if (n2 >= n1 && n2 >= n3)
	{
		cout << "The largest number is: " << n2;
	}

	if (n3 >= n1 && n3 >= n2) {
		cout << "The largest number is: " << n3;
	}
	cout << endl;

	system("pause");
	return 0;
}