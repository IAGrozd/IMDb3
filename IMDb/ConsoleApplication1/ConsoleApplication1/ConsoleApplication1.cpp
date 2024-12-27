#include <iostream>
#include <fstream>
using namespace std;

int getlen(const char acc[]) {
	int counter = 0;
	while (acc[counter] != '/0') {
		counter++;
	}
	return counter;
}

bool isAdmin(const char admin[], char a) {
	int i = 0;
	while (admin[i] != '\0') {
		if (a == admin[i]) {
			return true;
		}
		i++;
	}
	return false;
}

bool isUser(const char user[], char u) {
	int i = 0;
	while (user[i] != '\0') {
		if (u == user[i]) {
			return true;
		}
		i++;
	}
	return false;
}

void homePage() {
	cout << "Welcome to my IMDb." << endl;
	char admin[3] = "aA";
	char user[3] = "uU";
	char acc;
	while (true) {
		cout << "Enter \"a\" to enter as an admin or \"u\" to enter as an ordinary user: ";
		cin >> acc;
		if (isAdmin(admin, acc)) {
			cout << "Congratulations! You entered as an admin!";
			break;
		}
		else if (isUser(user, acc)) {
			cout << "Congratulations! You entered as an ordinary user!";
			break;
		}
		else {
			cout << "Sorry but you entered a wrong charecter! Please try again! ";
			continue;
		}
	}
}

int main()
{
	homePage();
	//adminPage();
	//ordUserPage();
}