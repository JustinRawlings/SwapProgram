// Justin Rawlings
//11/4/2018
//CSC215
//Swap Program

#include "pch.h"
#include <iostream>

using namespace std;

//parameters
void badSwap(int x, int y);
void goodSwap(int& x, int& y);

//Function for stealing account funds
void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

//Function for a reversal of funds transfer
void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

//Main program
int main()
{
	//Account information for both accounts
	int realAccount = 2000;
	int fakeAccount = 0;
	cout << "Your account funds are\n";
	cout << "Funds: " << realAccount << "\n";
	cout << "Account funds in transfer account: " << fakeAccount << "\n\n";

	//Funds stolen
	cout << "Calling badSwap()\n";
	badSwap(realAccount, fakeAccount);
	cout << "Current funds in transferring account: " << realAccount << "\n";
	cout << "Current funds in transferred account: " << fakeAccount << "\n\n";

	//Funds returned
	cout << "Calling goodSwap()\n";
	goodSwap(realAccount, fakeAccount);
	cout << "Funds: " << realAccount << "\n";
	cout << "Account funds in transfer account: " << fakeAccount << "\n\n";
	
	return 0;
}