#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	// your code
	if( rate >= 0.0 )
		interestRate = rate*100;
	else 
		interestRate = 0.0;
}

double SavingsAccount::calculateInterest() 
{
	// your code
	double bal = getBalance();
	double interestbal = 0;
	interestbal = bal * interestRate;
	return interestbal;
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
	//Account type: Saving
	//Balance: $ 400.00
	//Interest Rate (%): 12.00
	os << "Account type: Saving" << endl;
	os << "Balance: $ " << getBalance() << endl;
	os << "Interest Rate (%): " << interestRate << ".0" << endl;
}
