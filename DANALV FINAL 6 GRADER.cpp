#include <iostream>
#include <string>

using namespace std;

int main()
{
	int points;
	double grade;

	cout << "Enter the total amount of points accumulated: ";
	cin >> points;
	cout << endl;

	cout << "The number you entered for total points accumulated is: "
		 << points << endl;

	if (points == 0)
		cout << "Final grade = F ";

	if (points == 1)
		cout << "Final grade = F ";

	if (points == 2)
		cout << "Final grade = F ";

	if (points == 3)
		cout << "Final grade = F ";

	if (points == 4)
		cout << "Final grade = F ";

	if (points == 5)
	cout << "Final grade = F ";

	if (points == 6)
	cout << "Final grade = D ";

	if (points == 7)
	cout << "Final grade = C ";

	if (points == 8)
	cout << "Final grade = B ";

	if (points == 9)
	cout << "Final grade = A ";

	if (points == 10)
		cout << "Final grade = A+ ";

	else if (points > 10)
		cout << "Invalid entry: total points cannot equal more than 10. ";

	else if (points < 0)
		cout << "Invalid entry: number cannot be negative/less than 0. ";
	cout << endl;

	system("pause");
	return 0;
}