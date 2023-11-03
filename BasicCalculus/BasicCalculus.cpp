// BasicCalculus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Simple Calculator : Create a basic calculator that can perform addition, subtraction, multiplication, and division operations.Use if - else statements to determine the operation based on user input.

// printf("\033c"); Moves line to the top left corner; To-Do find out why ; Something uni/ASCII related;
// auto variables good or bad?

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "Modules/Addition.h"
#include "Modules/Division.h"
#include "Modules/Multiplication.h"
#include "Modules/Subtraction.h"
#include "Modules/Exponentiation.h"
#include "Modules/Root.h"

#define cout std::cout
#define cin std::cin
#define endl std::endl

int main()
{
	short selectMod;
	float version = 0.03;

	auto num1 = 0.0f;
	auto num2 = 0.0f;
	auto sum = 0.0f;

	bool bMenu = true;
	bool bExit = false;
	bool bGame = false;
	bool bAddition = false;
	bool bDivision = false;
	bool bMultiplication = false;
	bool bSubtraction = false;
	bool bExponentiation = false;
	bool bRoot = false;

	std::ostringstream name;
	name << "Basic Calculus | Version: " << version;
	std::string nameStr = name.str();

	while (bExit != true)
	{
		cout << nameStr << endl;
		cout << "1 : Addition Module\n"
			 << "2 : Subtraction Module\n"
			 << "3 : Multiplication Module\n"
			 << "4 : Division Module\n"
			 << "5 : Exponentiation Module\n"
			 << "6 : Root Module\n"
			 //  << "8 : Guess A Number\n"
			 << "9 : Exit\n"
			 << "Press a number to continue:\n";
		cin >> selectMod;

		while (selectMod <= 0)
		{ // endless loop with non numerical input
			cout << "Your input is invalid, please try again.\n";
			cout << "Hey! Welcome to Basic Calculus, how can I help you?\n"
				 << "Press a number to continue\n";
			cin >> selectMod;
		}

		switch (selectMod)
		{
		case 1:
			bMenu = false;
			bAddition = true;
			printf("\033c");
			cout << "Addition Module\n"
				 << "Insert 2 numbers to calculate the sum.\n";
			cin >> num1;
			cin >> num2;
			sum = Addition(num1, num2);
			cout << num1 << " + " << num2 << " = " << sum << endl
				 << endl;
			break;
		case 2:
			bMenu = false;
			bSubtraction = true;
			printf("\033c");
			cout << "Subtraction Module\n"
				 << "Insert 2 numbers to calculate the diffrence.\n";
			cin >> num1;
			cin >> num2;
			sum = Subtraction(num1, num2);
			cout << num1 << " - " << num2 << " = " << sum << endl
				 << endl;
			break;
		case 3:
			bMenu = false;
			bMultiplication = true;
			printf("\033c");
			cout << "Multiplication Module\n"
				 << "Insert 2 numbers to calculate the product.\n";
			cin >> num1;
			cin >> num2;
			sum = Multiplication(num1, num2);
			cout << num1 << " * " << num2 << " = " << sum << endl
				 << endl;
			break;
		case 4:
			bMenu = false;
			bDivision = true;
			printf("\033c");
			cout << "Division Module\n"
				 << "Insert 2 numbers to calculate the quotient.\n";
			cin >> num1;
			cin >> num2;
			sum = Division(num1, num2);
			cout << num1 << " / " << num2 << " = " << std::setprecision(15) << sum << endl
				 << endl;
			break;
		case 5:
			bMenu = false;
			bExponentiation = true;
			printf("\033c");
			cout << "Exponentiation Module\n"
				 << "Insert the base number:\n";
			cin >> num1;
			cout << "Now the exponent:\n";
			cin >> num2;
			printf("\033c");
			sum = Exponentiation(num1, num2);
			cout << num1 << " raised by the power of " << num2 << " = " << std::setprecision(15) << sum << endl
				 << endl;
			break;
		case 6:
			bMenu = false;
			bRoot = true;
			printf("\033c");
			cout << "Root Module\n"
				 << "Insert the radicant: ";
			cin >> num1;
			cout << endl
				 << "Insert the degree: ";
			cin >> num2;
			num2 = 2; // Workaround
			sum = ExtractRoot(num1, num2);
			if (num2 == 2)
			{
				cout << endl
					 << "The square root of " << num1 << " = " << std::setprecision(15) << sum << endl
					 << endl;
			}
			else
			{
				cout << endl
					 << "The " << num2 << "th root of " << num1 << " = " << sum << endl
					 << endl;
			}
			break;
		case 8:
		case 9:
			bExit = true;
			break;
		default:
			cout << "Seems like your input dosent have a linked module, please try again.\n";
			break;
		}
	}
	return 0;
}