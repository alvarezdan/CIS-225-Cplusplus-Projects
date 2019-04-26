#include <iostream>
#include <string>

using namespace std;

int main()
{
	double s, t, r, u;
	
	cout << "Enter the value for s, t, r and u: ";
	cin >> s >> t >> r >> u;
	cout << endl;
	cout << "The values you have entered are: " << s << " " << t << " " << r << " " << u << " ";
	cout << endl;

	if ((s > t) && (r < u))
		cout << "The expression (s > t) && (r < u) is true in this case. " << endl;
	else
		cout << "The expression(s > t) && (r < u) is false in this case. " << endl;
	if (!((s - u) < (t + r)))
		cout << "The expression !((s - u) < (t + r)) is true in this case. " << endl;
	else
		cout << "The expression !((s - u) < (t + r)) is false in this case. " << endl;

	system("pause");
	return 0;
}