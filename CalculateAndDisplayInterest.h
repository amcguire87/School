#ifndef CALCULATEANDDISPLAYINTEREST_H
#define CALCULATEANDDISPLATEINTEREST_H
#include <iostream>
#include<iomanip>
#include <conio.h>
using namespace std;

//Funtion for calculating and diplaying the interest
void CalculateAndDisplayInterest(double initAmt, double depositAmt, double annualInterest, int numYears, double& totalAccountValue) {
	double yearEndInterest = 0.00;
	double monthlyInterest;
	//Formatting text
	cout << setfill(' ') << setw(8) << ' ' << "Balance and Without Additional Monthly Deposits" << endl;
	cout << setfill('=') << setw(62) << '=' << endl;
	cout << "Year" << setfill(' ') << setw(9) << ' ' << "Year End Balance" << setfill(' ') << setw(9) << ' ' << "Year End Earned Interest" << endl;
	cout << setfill('-') << setw(62) << '-' << endl;
	totalAccountValue = initAmt;
	//Loop for the number of years
	for (int i = 0; i < numYears; ++i) {
		yearEndInterest = 0.00;
		//Loop to get the compound interest
		for (int i = 0; i < 12; ++i) {
			yearEndInterest = yearEndInterest + (totalAccountValue * ((annualInterest / 100) / 12));
		}
		totalAccountValue = totalAccountValue + yearEndInterest;

		//If statements for formating the text the way that I want it
		if (totalAccountValue < 100 && yearEndInterest < 10) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(20) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(28) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 1000 && yearEndInterest < 100) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(19) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(27) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 10000 && yearEndInterest < 100) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(17) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(27) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 10000 && yearEndInterest < 1000) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(17) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(26) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 100000 && yearEndInterest < 1000) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(16) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(26) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 100000 && yearEndInterest < 10000) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(16) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(25) << ' ' << '$' << yearEndInterest << endl;
		}
	}

	//Formating text
	cout << setfill(' ') << setw(8) << ' ' << "Balance and With Additional Monthly Deposits" << endl;
	cout << setfill('=') << setw(62) << '=' << endl;
	cout << "Year" << setfill(' ') << setw(9) << ' ' << "Year End Balance" << setfill(' ') << setw(9) << ' ' << "Year End Earned Interest" << endl;
	cout << setfill('-') << setw(62) << '-' << endl;
	totalAccountValue = initAmt;
	//Loop for the number of years
	for (int i = 0; i < numYears; ++i) {
		//Resetting the interest variables after each year
		yearEndInterest = 0.00;
		monthlyInterest = 0.00;
		//Loop to get the compund interest
		for (int i = 0; i < 12; ++i) {
			totalAccountValue = totalAccountValue + depositAmt;//Adding the monthly deposit to the total amount
			monthlyInterest = totalAccountValue * ((annualInterest / 100) / 12);//Calculating the monthly interest
			yearEndInterest = yearEndInterest + monthlyInterest;//Setting the year end interest variable to display the proper amount
			totalAccountValue = totalAccountValue + monthlyInterest;//Adding the monthly interest to the total amount
		}

		//If statements to format the text so that it stays aligned the way that I want it
		if (totalAccountValue < 1000 && yearEndInterest < 100) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(18) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(27) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 10000 && yearEndInterest < 100) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(17) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(27) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 10000 && yearEndInterest < 1000) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(17) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(26) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 100000 && yearEndInterest < 1000) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(16) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(26) << ' ' << '$' << yearEndInterest << endl;
		}
		else if (totalAccountValue < 100000 && yearEndInterest < 10000) {
			cout << fixed << setprecision(2) << setfill(' ') << setw(3) << ' ' << (i + 1) << setfill(' ') << setw(16) << ' ' << '$' << totalAccountValue << setfill(' ') << setw(25) << ' ' << '$' << yearEndInterest << endl;
		}


	}


}


#endif // !CALCULATEANDDISPLAYINTEREST_H

