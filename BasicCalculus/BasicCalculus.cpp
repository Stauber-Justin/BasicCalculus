// BasicCalculus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
// Simple Calculator : Create a basic calculator that can perform addition, subtraction, multiplication, and division operations.Use if - else statements to determine the operation based on user input.

// printf("\033c"); Clears terminal; To-Do find out why;

#include <iostream>

void Addition() {
	int numberOne;
	int numberTwo;
	int sum;

	printf("\033c");

	std::cout << "Hey! Welcome to the addition module, please insert two numbers to calculate the sum\n";
	std::cin >> numberOne >> numberTwo;
	
	sum = numberOne + numberTwo;
	std::cout << numberOne << " + " << numberTwo << " = " << sum << std::endl << std::endl;
}

void Subtraction() {
	int numberOne;
	int numberTwo;
	int difference;

	printf("\033c");

	std::cout << "Hey! Welcome to the subtraction module, please insert two numbers to calculate the difference\n";
	std::cin >> numberOne >> numberTwo;

	difference = numberOne - numberTwo;
	std::cout << numberOne << " - " << numberTwo << " = " << difference << std::endl << std::endl;
}

void Multiplication() {
	int numberOne;
	int numberTwo;
	int product;

	printf("\033c");

	std::cout << "Hey! Welcome to the multiplication module, please insert two numbers to calculate the product\n";
	std::cin >> numberOne >> numberTwo;
	product = numberOne * numberTwo;
	std::cout << numberOne << " * " << numberTwo << " = " << product << std::endl << std::endl;
}

void Division() {
	int numberOne;
	int numberTwo;
	int quotient;

	printf("\033c");

	std::cout << "Hey! Welcome to the division module, please insert two numbers to calculate the quotient\n";
	std::cin >> numberOne >> numberTwo;
	quotient = numberOne / numberTwo;
	std::cout << numberOne << " / " << numberTwo << " = " << quotient << std::endl << std::endl;
}

int main()
{
	short inputNumber;
	bool exit = false;

	while (exit != true)
	{
		std::cout << "Hey! Welcome to Basic Calculus, how can I help you?\n";
		std::cout << "1 : Addition Module\n" << "2 : Subtraction Module\n" << "3 : Multiplication Module\n" << "4 : Division Module\n" << "9 : Exit\n"<<"Press a number to continue:\n";
		std::cin >> inputNumber;

		while (inputNumber <= 0) { //endless loop with non numerical input
			std::cout << "Your input is invalid, please try again.\n";
			std::cout << "Hey! Welcome to Basic Calculus, how can I help you?\n" << "Press a number to continue\n";
			std::cin >> inputNumber;
		}

		switch (inputNumber) {
		case 1:
			Addition();
			break;
		case 2:
			Subtraction();
			break;
		case 3:
			Multiplication();
			break;
		case 4:
			Division();
			break;
		case 9:
			exit = true;
			break;
		default:
			std::cout << "Seems like your input dosent have a linked module, please try again.\n";
			break;
		}
	}
	return 0;
}