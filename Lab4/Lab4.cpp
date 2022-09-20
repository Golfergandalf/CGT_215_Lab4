// CGT 215
// Lab 4
// Gabby Willard

#include <iostream>
using namespace std;

// Choices Dialog
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}


// Factorial
void factorial() {
	// Input prompt
	int number;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> number;

	// Check input if valid
	while (number < 0)  {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> number;
	}

	// Calculations
	// Variables
	int result = 1;
	// Print start of equation
	cout << number << "! = ";
	// Calculate every number leading to input
	for (int i = 1; i <= number; i++) {
		// Calculate result
		result *= i;
		// What to print if it is last number or not
		if (i == number) {
			cout << i;
		}
		else {
			cout << i << " * ";
		}
	}
	// Print result
	cout << " = " << result << endl;
}

// Arithmetic Series
void arithmetic() {
	// Variables
	int start_num;
	int difference;
	int elements;
	// Input prompt
	cout << "Arithmetic Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start_num;
	cout << "Enter a number to add each time: ";
	cin >> difference;
	cout << "Enter the number of elements in the series: ";
	cin >> elements;

	// Calculations
	// Variables
	int display_number = start_num;
	int calculate_this = start_num;

	// Calculate the difference for amount of elements
	for (int i = 1; i <= elements; i++) {

		// If it's the last number in the sequence
		if (i == elements) {
			cout << display_number;
		}
		// If it's not the last number in the sequence
		else {
			cout << display_number << " + ";
			// Change to next number in line
			display_number += difference;
			// Calculate
			calculate_this += display_number;
		}

	}
	// Print result
	cout << " = " << calculate_this << endl;
}

// Geometric
void geometric() {
	// Variables
	int start_num;
	int difference;
	int elements;
	// Input prompt
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> start_num;
	cout << "Enter a number to multiply by each time: ";
	cin >> difference;
	cout << "Enter the number of elements in the series: ";
	cin >> elements;

	// Calculations
	// Variables
	int display_number = start_num;
	int calculate_this = start_num;

	// Calculate the difference for amount of elements
	for (int i = 1; i <= elements; i++) {

		// If it's the last number in the sequence
		if (i == elements) {
			cout << display_number;
		}
		// If it's not the last number in the sequence
		else {
			cout << display_number << " + ";
			// Change to next number in line
			display_number *= difference;
			// Calculate
			calculate_this += display_number;
		}

	}
	// Print result
	cout << " = " << calculate_this << endl;
}


// Main
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}
