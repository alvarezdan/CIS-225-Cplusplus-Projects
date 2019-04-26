#include <iostream>

using namespace std;

const double LOCAL_TAX_RATE = 0.08875;
const double CREDIT_PERC = 0.05;

int main()
{
	int GROSS, NON_TAXABLE;
	int TAXABLE;
	double PRE_TAX, VENDOR_CREDIT, PEN_AND_INT, TAX_DUE;

	cout << "Enter two integers, one for GROSS "
		<< "one for NON_TAXABLE: ";
	cin >> GROSS >> NON_TAXABLE;
	cout << endl;
	cout << "Enter the penalties and interest due at this time: ";
	cin >> PEN_AND_INT;
	cout << endl;

	cout << "The numbers you entered are " << GROSS
		<< " for Gross Sales, " << NON_TAXABLE
		<< " for Sales Exempt From Taxes and " << PEN_AND_INT
		<< " for Penalties and Interest " << endl;

	TAXABLE = GROSS - NON_TAXABLE;
	PRE_TAX = TAXABLE * LOCAL_TAX_RATE;
	VENDOR_CREDIT = PRE_TAX * CREDIT_PERC;
	TAX_DUE = PRE_TAX + PEN_AND_INT - VENDOR_CREDIT;

	cout << "The Taxable Total of the Sales for this quarter is ="
		<< TAXABLE << endl;
	cout << "The Pre Tax for this quarter is ="
		<< PRE_TAX << endl;
	cout << "The amount credited to the vendor for this quarter is ="
		<< VENDOR_CREDIT << endl;
	cout << "The FINAL CALCULATION of the SALES TAXES DUE for this quarter is ="
		<< TAX_DUE << endl;
	system("pause");

	return 0;
}