/* This program will simulate a soft drink dispenser
It will display the name of the drinks as well as the number
of drinks in the machine.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Programmer-defined data type
struct SoftDrinks
{
	string dkName;		// Drink name
	int dkStock;		// Drink stock
};

// Global Constants
const int OPTIONS = 5;	// Number of soft drink options available

// Function prototype
void dispenseDrink(SoftDrinks[], int, int&);

int main()
{
	// Constants and variables
	const int COLA = 1, ROOTBEER = 2, LEMONLIME = 3, GRAPESODA = 4, CREAMSODA = 5, QUIT = 6;

	// Array holding all available drinks
	SoftDrinks machine[OPTIONS] = { {"Cola", 20},{"Root Beer", 20}, {"Lemon-Lime", 20},
									{"Grape Soda", 20}, {"Cream Soda", 20} };

	// Variables
	int option;

	// Intro 
	cout << "Soft Drink Dispenser ..." << endl;

	// Menu
	do
	{
		//Display menu and prompt user for option
		cout << "\nChoose one of the following drinks\n"
			<< "\t1. " << machine[0].dkName << "\t\t(" << machine[0].dkStock << " left)" << endl
			<< "\t2. " << machine[1].dkName << "\t(" << machine[1].dkStock << " left)" << endl
			<< "\t3. " << machine[2].dkName << "\t(" << machine[2].dkStock << " left)" << endl
			<< "\t4. " << machine[3].dkName << "\t(" << machine[3].dkStock << " left)" << endl
			<< "\t5. " << machine[4].dkName << "\t(" << machine[4].dkStock << " left)" << endl
			<< "\t6. Quit" << endl;
		cout << "Option: ";
		cin >> option;

		// Drive menu options
		switch (option)
		{
		case COLA:			//Coca Cola drink choice
			dispenseDrink(machine, option, machine[0].dkStock);
			break;
		case ROOTBEER:		//Root Beer drink choice
			dispenseDrink(machine, option, machine[1].dkStock);
			break;
		case LEMONLIME:		//Lemon Lime drink choice
			dispenseDrink(machine, option, machine[2].dkStock);
			break;
		case GRAPESODA:		//Grape Soda drink choice
			dispenseDrink(machine, option, machine[3].dkStock);
			break;
		case CREAMSODA:		//Cream Soda drink choice
			dispenseDrink(machine, option, machine[4].dkStock);
			break;
		case QUIT:			//Quit choice
			cout << "\nGood Bye ..." << endl;
			break;
		default:			//Validation. What will happen if option chosen is invlaid
			cout << "Error ... Invalid choice. Try again.\n";
		}
	} while (option != QUIT);
}

// Function used to dispense the drink and modify the stock of the drink
void dispenseDrink(SoftDrinks arr[], int option, int& stock)
{
	if (arr[option - 1].dkStock > 0)
	{
		cout << "\nBlink ... Blink ... Blink\n" << "Clink ... Clink ... Clink\n" << "Sink ... Sink ... Sink\n" << "Here is your Drink!\n";
		arr[option - 1].dkStock--;
	}
	return;
}


