#include<iostream>
#include<string>
using namespace std;

string tasks[100];
int choice = 0, i = 0, a = 0, j = 0;
string index, del;
bool flag = false;
string status[100] = { "pending" };

void add() {
	do {
		cout << "Input tasks you want to add to the list.\n";
		cin >> tasks[i];
		cout << "Status of task (pending/completed).\n";
		cin >> status[i];
		i++;
		cout << "Would you like to add another task?\n1. Yes\n2.No\n";
		cin >> choice;
	} while (choice == 1);
}
void update() {
	cout << "Which task you did like to mark completed?\n";
	cin >> index;
	for (int k = 0; k < i; k++) {
		if (tasks[k] == index) {
			status[k] = "completed";
		}
	}
}
void display() {
	cout << "- Display whole list -\n";
	for (j = 0; j < i; j++) {
		cout << "Index " << j + 1 << " : ";
		cout << tasks[j];
		cout << "\nStatus: " << status[j] << "\n";
	}
}
void deletee() {
	cout << "Which task you did like to remove?\n";
	cin >> del;
	for (int l = 0; l < i; l++) {
		if (tasks[l] == del) {
			flag = true;
			cout << "found!\n";
			for (int t = l; t < i - 1; t++) {
				tasks[t] = tasks[t + 1];
				status[t] = status[t + 1];
			}
			i--;
			break;
		}
	}
	if (!flag) {
		cout << "Task not found!" << endl;
	}
}
int main() {
	cout << "***** To-Do List ******\n";
	add();
	display();

	cout << "Would you like to delete or update? ( 1=update , 2=delete )";
	cin >> a;
	while (a == 1 || a == 2) {
		if (a == 1) {
			update();
			display();
		}
		else if (a == 2) {
			deletee();
			display();
		}
		cout << "Would you like to delete or update again? ( 1=update , 2=delete )";
		cin >> a;
	}
	cout << "Thank you!";
	cout << "\n";
	return 0;
	system("pause");
}