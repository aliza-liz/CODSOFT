#include<iostream>
using namespace std;

float a, b;
int choice;

void task() {
	cout << "Enter Number 1 : ";
	cin >> a;
	cout << "Enter Number 2 : ";
	cin >> b;
	cout << "\nWhat would you like to do?\n1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
	cin >> choice;
	if (choice == 1) {
		cout << "For Addition a+b is equals to " << a+b;
	}
	else if (choice == 2) {
		cout << "What would you like to do?\n1. a - b\n2.b - a\n";
		cin >> choice;
		if (choice == 1) {
			cout << "For Subtraction a-b is equals to " << a - b;
		}
		else if (choice == 2) {
			cout << "For Subtraction b-a is equals to " << b-a;
		}
	}
	else if (choice == 3) {
		cout << "For Multiplication a*b is equals to " << a*b;
	}
	else if (choice == 4) {
		cout << "What would you like to do?\n1. a / b\n2.b / a\n";
		cin >> choice;
		if (choice == 1) {
			cout << "For Division a/b is equals to " << a/ b;
		}
		else if (choice == 2) {
			cout << "For Division b/a is equals to " << b / a;
		}
	}
	else {
		cout << "Wrong Choice! ";
	}
}

int main() {
	cout << "***** Calculator ******\n";
	task();
	cout << "\n";
	return 0;
	system("pause");
}