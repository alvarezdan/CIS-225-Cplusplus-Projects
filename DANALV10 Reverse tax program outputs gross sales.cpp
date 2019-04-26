#include <iostream>

using namespace std;

int main()
{
	int NON_TAXABLE;
	int TAXABLE;
	double PRE_TAX, VENDOR_CREDIT, PEN_AND_INT, TAX_DUE, LOCAL_TAX_RATE, CREDIT_PERC, GROSS;

	cout << "Enter total paid for taxes: ";
	cin >> TAX_DUE;
	cout << endl;
	cout << "Enter the amount of non-taxable sales: ";
	cin >> NON_TAXABLE;
	cout << endl;
	cout << "Enter the tax rate according to your jurisdiction: ";
	cin >> LOCAL_TAX_RATE;
	cout << endl;
	cout << "Enter the vendor credit rate according to the state: ";
	cin >> CREDIT_PERC;
	cout << endl;
	cout << "Enter the penalties and interest paid at the time: ";
	cin >> PEN_AND_INT;
	cout << endl;

	cout << "The numbers you entered are: " << endl;
	cout << " Taxes paid = "
		<< TAX_DUE << endl;
	cout << " Sales Exempt From Taxes = "
		<< NON_TAXABLE << endl;
	cout << " Tax rate according to your jurisdiction = "
		<< LOCAL_TAX_RATE << endl;
	cout << " The amount every vendor recieves based on the state rate = "
		<< CREDIT_PERC << endl;
	cout << " Interests and penalties paid for late submision = "
		<< PEN_AND_INT << endl;

	//declare equations
	GROSS = (TAX_DUE + LOCAL_TAX_RATE * NON_TAXABLE - LOCAL_TAX_RATE * CREDIT_PERC * NON_TAXABLE - PEN_AND_INT) / ((1 - CREDIT_PERC) * LOCAL_TAX_RATE);

	cout << "------------------------------------------------------------------" << endl;
	cout << "The GROSS SALES for the period in question was = "
		<< GROSS << endl;
	system("pause");

	return 0;
}