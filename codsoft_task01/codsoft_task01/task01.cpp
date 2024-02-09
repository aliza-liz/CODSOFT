#include<iostream>
using namespace std;

int x = 0;
int guessno=0;
int attempts = 0;
void generateRandNo() {
	x = rand() % 100 + 1;
}
void guess() {
	do {
		cout << "\n\nNow enter your guessed number: ";
		cin >> guessno;
		attempts++;
	if (guessno == x) {
		cout << "**** Hey! you got the number in "<<attempts<<" attempts. * ***";
	}
	if (guessno < 1 || guessno > 100) {
		cout << "The number doesn't match the criteria.";
	}
	if (guessno < x && guessno < 100) {
		cout << "The number is smaller than the generated number.";
		if ((x % 2) == 0) {
			cout << "\nHint: * The number is even. *";
		}
		else {
			cout << "\nHint: * The number is odd. *";
		}
	}
	if (guessno > x && guessno < 100) {
		cout << "The number is greater than the generated number.";
		if ((x % 2) == 0) {
			cout << "\nHint: * The number is even. *";
		}
		else {
			cout << "\nHint: * The number is odd. *";
		}
	}
	}while (guessno != x);
}
int main() {
	generateRandNo();
	cout << " \nNow it's time for you to play!" << "\n";
	cout << "Guess the number!\n\nHint: 1 < number < 100 :)";
	guess();
	cout << "\n";
	return 0;
	system("pause");
}