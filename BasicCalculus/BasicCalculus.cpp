// BasicCalculus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Simple Calculator : Create a basic calculator that can perform addition, subtraction, multiplication, and division operations.Use if - else statements to determine the operation based on user input.

// printf("\033c"); Clears terminal; To-Do find out why ; Something uni/ASCII related;
// auto variables good or bad?

#include <iostream>
#include <string>
#include <sstream>
#include "Modules/Addition.h"
#include "Modules/Division.h"
#include "Modules/Multiplication.h"
#include "Modules/Subtraction.h"

#define cout std::cout
#define cin std::cin
#define endl std::endl
#define string std::string

int main()
{
	short selectMod;
	float version = 0.02;

	auto num1 = 0.0f;
	auto num2 = 0.0f;
	auto sum = 0.0f;

	bool bMenu = true;
	bool bExit = false;
	bool bAddition = false;
	bool bDivision = false;
	bool bMultiplication = false;
	bool bSubtraction = false;

	std::ostringstream name;
	name << "Basic Calculus | Version: " << version;
	string nameStr = name.str();

	while (bExit != true)
	{
		cout << nameStr << endl;
		cout << "1 : Addition Module\n"
			 << "2 : Subtraction Module\n"
			 << "3 : Multiplication Module\n"
			 << "4 : Division Module\n"
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
			cout << num1 << " / " << num2 << " = " << sum << endl
				 << endl;
			break;
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