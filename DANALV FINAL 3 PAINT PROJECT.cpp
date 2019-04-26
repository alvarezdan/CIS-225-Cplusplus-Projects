#include <iostream>
#include <string>

using namespace std;

int main()
{
	double date, name, br1w, br1l, br2w, br2l, br3w, br3l,  w1w, w1l, w2w, w2l, w3w, w3l, w4w, w4l, area1, area2, area3, totalarea, totalgallons, ppg1, ppg2, ppg3, ppe1, ppe2, ppe3, totexp1, totexp2, totexp3;
	
	cout << "Danny Paint Project" << endl;
	cout << "1234 Address Ave NY, NY 10011" << endl;
	cout << "email@email.com" << endl;
	cout << "917-917-9117" << endl;

	
	cout << "Enter the width and length for room # 1: ";
	cin >> br1w >> br1l;
	cout << endl; 

	cout << "Enter window #1 width and length for room # 1: ";
	cin >> w1w >> w1l;
	cout << endl;

	cout << "Enter the width and length for room # 2: ";
	cin >> br2w >> br2l;
	cout << endl;

	cout << "Enter window #1 width and length for room # 2: ";
	cin >> w2w >> w2l;
	cout << endl;

	cout << "Enter window #2 width and length for room # 2: ";
	cin >> w3w >> w3l;
	cout << endl;

	cout << "Enter the width and length for room # 3: ";
	cin >> br3w >> br3l;
	cout << endl;

	cout << "Enter window #1 width and length for room # 3: ";
	cin >> w4w >> w4l;
	cout << endl;
	
	area1 = (br1w * br1l) - (w1w * w1l);
	area2 = (br2w * br2l) - ((w2w * w2l) - (w3w * w3l));
	area3 = (br3w * br3l) - (w4w * w4l);
	totalarea = area1 + area2 + area3;
	totalgallons = totalarea / 50;

	cout << "The area for Bedroom # 1 is: "
		<< area1 << "sq ft.";
	cout << endl;

	cout << "The area for Bedroom # 2 is: "
		<< area2 << "sq ft.";
	cout << endl;

	cout << "The area for Bedroom # 3 is: "
		<< area3 << "sq ft.";
	cout << endl;

	cout << "The total area is: "
		<< totalarea << "sq ft. ";
	cout << endl;

	cout << "The total amount of gallons to be used to paint the three rooms is : "
		<< totalgallons;
	cout << endl;

	ppg1 = 32.99;
	ppe1 = 2 * totalarea;
	totexp1 = ppg1 * totalgallons + ppe1;

	ppg2 = 30.99;
	ppe2 = 3 * totalarea;
	totexp2 = ppg2 * totalgallons + ppe2;

	ppg3 = 35.99;
	ppe3 = 4 * totalarea;
	totexp3 = ppg3 * totalgallons + ppe3;

	cout << "The total cost of painting your rooms with Company 1 will be as follows: " << endl;
	cout << "Price per gallon = $" << ppg1 << " Painting expense = $" << ppe1 << " Grand total = $" << totexp1;
	cout << endl;

	cout << "The total cost of painting your rooms with Company 2 will be as follows: " << endl;
	cout << "Price per gallon = $" << ppg2 << " Painting expense = $" << ppe2 << " Grand total = $" << totexp2;
	cout << endl;

	cout << "The total cost of painting your rooms with Company 3 will be as follows: " << endl;
	cout << "Price per gallon = $" << ppg3 << " Painting expense = $" << ppe3 << " Grand total = $" << totexp3;
	cout << endl;

	cout << "Thank you for doing business with us! ";
	cout << endl;


	system("pause");
	return 0;
}