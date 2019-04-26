#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	char character;
	double area;
	
	cout << "What kind of geometric figure is it ? Enter R for rectangle, T for triangle and Z for trapeze. ";
	
loop:
	cin >> character;
	
	if ((character == 'r') || (character == 'R'))
	{
		double l, w;
		cout << "Enter length: ";
		cin >> l;
		cout << "Enter width: ";
		cin >> w;
		area = l*w;
	}
	else if ((character == 't') || (character == 'T'))
	{
		double b, h;
		cout << "Enter base: ";
		cin >> b;
		cout << "Enter height: ";
		cin >> h;
		area = h*b / 2;
	}
	else if ((character == 'z') || (character == 'Z'))
	{
		double B, b, h;
		cout << "Enter small base: ";
		cin >> b;
		cout << "Enter big base: ";
		cin >> B;
		cout << "Enter height: ";
		cin >> h;
		area = (B+b)*h / 2;
	}

	else
	{
		cout << "Select only R, T, or Z: ";
		goto loop;
	}
	cout << "Area:" << area << endl;

	system("pause");
	return 0;
}
