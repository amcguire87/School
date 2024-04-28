#ifndef DISPLAYTEXTANDGETINPUTS_H
#define DISPLAYTEXTANDGETINPUTS_H

#include <iostream>
#include<iomanip>
#include <conio.h>
using namespace std;
//Function for displaying the input text and to get the inputs from the user
void DisplayTextAndGetInputs(double& initInvAmt, double& monthlyDeposit, double& annualInterest, int& numberYears) {
	cout << setfill('*') << left << setw(34) << '*' << endl;//Formatting for style
	cout << setfill('*') << left << setw(11) << '*' << " Data Input " << setfill('*') << setw(11) << '*' << endl;
	cout << "Intitial Investment Amount: ";
	cin >> initInvAmt;
	cout << "Monthly Deposit: ";
	cin >> monthlyDeposit;
	cout << "Annual Interest: ";
	cin >> annualInterest;
	cout << "Number of years: ";
	cin >> numberYears;
	cout << "Press any key to continue . . .";
	_getch();//Used to pause the screen until the user presses any key
	cout << endl;
}
#endif // !DISPLAYTEXTANDGETINPUTS_H


