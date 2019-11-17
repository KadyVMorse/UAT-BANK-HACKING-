
#include <iostream>
#include <string>


using namespace std;

//Functions:
void doTransaction(int amount, int transferor, int transferee);
void doHackedTransaction(int amount, int& transferor, int& transferee);

//Method:
void coutBalences();

//Variables:
int account = 100;
int terrorists = 1000000000;


void main()
{
	string userName;
	string* rUserName = &userName;
	cout << "WElcome t0 UAT BAnk,WHaTS yoUR Nme";
	cin >> *rUserName;

	// balences of the accounts
	coutBalences();

	// Changes the Color of the font to green
	system("color 0A");

	// performs the transaction 
	doTransaction(terrorists, terrorists, account);

	//show the Balance
	coutBalences();

	//Shows you being hacked
	cout << "\n ErOR HS ocCURed  . . .\n" << endl;
    cout << "\n Hello Old Friend  DID YOU MISS ME  \n" << endl;
	

	//This preforms a transaction 
	doHackedTransaction(terrorists, terrorists, account);

	//Shows the balance 
	coutBalences();
}


void doTransaction(int amount, int transferor, int transferee)
{
	//display
	cout << "Please Wait . . ." << endl;

	//Checks if amount is in account.
	if (transferor >= amount)
	{
		//Takes money from one account and adds to another.
		transferor -= amount;
		transferee += amount;

		//DISPLAY:
		cout << "Amount transferred: " << amount << endl;
	}

	//DISPLAY:
	cout << "Insufficient funds in account." << endl;
}


void doHackedTransaction(int amount, int& transferor, int& transferee)
{
	//DISPLAY:
	cout << "U Wi\\ paY For wHaT u HaVE D0NE . . ." << endl;

	//Checks if amount is in account.
	if (true) 
	{
		//Takes money from one account and adds to another.
		transferor -= amount;
		transferee += amount;

		//DISPLAY:
		cout << "Amount transferred: " << amount << endl;
	}
	//DISPLAY:
	//cout << "Insufficient funds in account." << endl; 
}


// shows balence of both accounts
void coutBalences()
{
	cout << "###############################" << endl;
	cout << "account:" << endl;
	cout << "Current balence: " << account << endl;
	cout << "############################" << endl;
	cout << "Unknown Account:" << endl;
	cout << "YOU HAVE INSFFECIANT FUNDS " << endl;
	cout << "Current balence: " << terrorists << endl;
	cout << "#############################" << endl;
}