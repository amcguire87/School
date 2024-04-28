// McGuire, Adam 4/7/2024

#include "DisplayTextAndGetInputs.h"
#include "CalculateAndDisplayInterest.h"
#include <conio.h>

int main()
{
	double initInvAmt;
	double monthlyDeposit;
	double annualInterest;
	int numberYears;
	double totalAccountValue;

	DisplayTextAndGetInputs(initInvAmt, monthlyDeposit, annualInterest, numberYears);//Call to programmer defined function
	system("cls");//Clears the screen to make things look better
	CalculateAndDisplayInterest(initInvAmt, monthlyDeposit, annualInterest, numberYears, totalAccountValue);//Call to programmer defined function

}
