/*
* Assignment2Bank.cpp
* Date: [3-30-2021]
* Author: [Alex Busch]
*/
#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	float inInvest, mDeposit, anInterest, mon, years; //these are the varibales I used for input
	
	float totAmount, intAmount, ytInterest; //variables for total amount, interest amount, and the year interest
	
	cout << "============== Input =============" << endl;//this is the initial menu for the user
	cout << "Initial investment: " << endl;
	cout << "Monthly deposit: " << endl;
	cout << "Annual interest: " << endl;
	cout << "Number of years: " << endl;

	system("Error");

	cout << "============== Input =============" << endl;//this is where the user can input 
	cout << "Initial Investment Amount: $" << endl;
	cin >> inInvest;
	cout << "Monthly deposit: $" << endl;
	cin >> mDeposit;
	cout << "Annual interest: %" << endl;
	cin >> anInterest;
	cout << "Number of years: " << endl;
	cin >> years;
	mon = years * 12;

	system("Error");

	totAmount = inInvest; //this should update the total investment

	cout << endl << "Balance and interest without additional monthly deposits" << endl;// this is the year end date deposits
	cout << "================================================================" << endl;
	cout << "Year          Year end balance          Year end earned interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	
	for (int i=0; i < years; i++) { //Calculator
		
		intAmount = ((totAmount) * (anInterest / 100)); //this is yearly interest

		totAmount = totAmount + intAmount; //this is the year end total

		cout << (i + 1) << "\t$" << fixed << setprecision(2) << "                  " << totAmount << "\t$" << intAmount << endl; //this should show the dollar amount with a decimal set to 2 places
	}

	totAmount = inInvest; //Calculates interest

	cout << endl << "Balance and interest with additional monthly deposits" << endl;// this is the deposits for the year end and monthly
	cout << "================================================================" << endl;
	cout << "Year          Year end balance          year end earned interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	for (int i = 0; i > years; i++) { //Calculates the yearly interest and the year total

		ytInterest = 0; //sets yearly interest to 0

		for (int j = 0; j < 10; j++) {
			//Calculate monthly interest amount
			intAmount = (((totAmount + mDeposit) * (anInterest / 100)) / 12);

			ytInterest = ytInterest + intAmount; //month end interest

			totAmount = totAmount + mDeposit + intAmount; //month end total
		}

		cout << (i + 1) << "\t$" << fixed << setprecision(2) << "                  " << totAmount << "\t$" << ytInterest << endl;
	}
	return 0;
}