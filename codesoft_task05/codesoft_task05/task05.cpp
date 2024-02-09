#include<iostream>
using namespace std;

int i = 0, choice, a, b;
string t;
bool flag = false;
struct book {
	string title[100];
	string author[100];
	string ISBN[100];
}obj;
void store() {
	do {
		cout << "Store book information: \n";
		cout << "Tile: ";
		cin >> obj.title[i];
		cout << "Author: ";
		cin >> obj.author[i];
		cout << "ISBN: ";
		cin >> obj.ISBN[i];
		i++;
		cout << "Would you like to store another book?\n1. Yes\n2.No\n";
		cin >> choice;
	} while (choice == 1);
}
void returnn() {
	cout << "Returning book information: \n";
	cout << "Tile: ";
	cin >> obj.title[i];
	cout << "Author: ";
	cin >> obj.author[i];
	cout << "ISBN: ";
	cin >> obj.ISBN[i];
	i++;
}
void borrow() {
	cout << "Enter title of book you want to borrow: ";
	cin >> t;
	for (int k = 0; k < i; k++) {
		if (obj.title[k] == t) {
			flag = true;
			cout << "Available!!\n";
			cout << "Tile: " << obj.title[k] << "\nAuthor: " << obj.author[k] << "\nISBN: " << obj.ISBN[k] << "\nDuration: 2 weeks\n";
			for (int t = k; t < i - 1; t++) {
				obj.title[t] = obj.title[t + 1];
				obj.author[t] = obj.author[t + 1];
				obj.ISBN[t] = obj.ISBN[t + 1];
			}
			i--;
			break;
		}
	}
	if (!flag) {
		cout << "Book not found!" << endl;
	}
}
void display() {
	cout << "- Display whole list of Books -\n";
	for (int j = 0; j < i; j++) {
		cout << "Book " << j + 1 << "\n";
		cout << "Tile: " << obj.title[j] << "\nAuthor: " << obj.author[j] << "\nISBN: " << obj.ISBN[j] << "\n";

	}
}
void finecal() {
	cout << "Fine calculation system for books.\nEnter Book name: ";
	cin >> t;
	cout << "Enter borrowed duration(weeks): ";
	cin >> b;
	for (int k = 0; k < i; k++) {
		if (obj.title[k] == t) {
			cout << "\nTile: " << obj.title[k] << "\nAuthor: " << obj.author[k] << "\nISBN: " << obj.ISBN[k];
		}
		else {
			cout << "Unavailable :(\n";
		}
	}
	if (b == 2 || b == 1) {
		cout << "No fine";
	}
	else if (b > 2) {
		cout << "Fine: " << b * 100 << "$\n";
	}
	else {
		cout << "Incorrect duration!";
	}
}
int main() {
	cout << "***** Library ******\n";
	store();

	do {
		cout << "1. Borrow\n2. Diplay all Books\n3. Return Book\n4. Fine Calculation\n";
		cin >> a;
		if (a == 1) {
			borrow();
		}
		if (a == 2) {
			display();
		}
		if (a == 3) {
			returnn();
		}
		if (a == 4) {
			finecal();
		}
		cout << "Do you want to perform any other task?\n1. Yes\n2.No\n ";
		cin >> choice;
	} while (choice == 1);
	cout << "\nThank you!";
	cout << "\n";
	return 0;
	system("pause");
}