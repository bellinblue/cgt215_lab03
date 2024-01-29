// cgt215_lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This program is for CGT215 and is meant to demonstrate if statements by accepting user input for a list of choices.

#include <iostream>

using namespace std;

void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;

	cout << "\nYour Selection: ";
	cin >> choice;
}

void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
}

void printAdd(float A, float B) {
	cout << A << " + " << B << " = " << (A+B) << endl;
}

void printSub(float A, float B) {
	cout << A << " - " << B << " = " << (A - B) << endl;
}

void printMult(float A, float B) {
	cout << A << " * " << B << " = " << (A * B) << endl;
}

void printDiv(float A, float B) {
	cout << A << " / " << B << " = " << (A / B) << endl;
}

int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) { printAdd(A, B); }
	if (choice == 2) { printSub(A, B); }
	if (choice == 3) { printMult(A, B); }
	if (choice == 4) { printDiv(A, B); }
	return 0;
}
