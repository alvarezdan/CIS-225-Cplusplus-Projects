#include <iostream>
using namespace std;

int main() {
	
	const double interest = .1299;
	float pay = 0;
	float balance = 0;
	double penalty, balance2;
	
	cout << "Enter CC balance: ";
	cin >> balance;
	cout << endl;
	cout << "Enter your payment: ";
	cin >> pay;

	cout << "You entered " << balance << "for balance and " << pay << " for payment. " ;
	cout << endl;
	
	penalty = balance * interest / 12;
	balance2 = balance - pay + penalty;

	cout << "With an interest rate of 12.99%, the penalty added to your payment for next month is: " << penalty;
	cout << endl;
	cout << "The balance after this payment will be: " << balance2;
	cout << endl;

	system("pause");
	return 0;
}