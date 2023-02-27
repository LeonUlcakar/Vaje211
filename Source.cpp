#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

void dayDisplay(int numOfDays, int start);

int main() {
	int numOfDays;
	int month;
	int start;
	cout << "Please enter your month 1-12" << endl;
	cin >> month;
	cout << "Please enter your starting day 1-7" << endl;
	cin >> start;
	switch (month) {
	case 1:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	case 2:
		numOfDays = 28;
		dayDisplay(numOfDays, start);
		break;
	case 3:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	case 4:
		numOfDays = 30;
		dayDisplay(numOfDays, start);
		break;
	case 5:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	case 6:
		numOfDays = 30;
		dayDisplay(numOfDays, start);
		break;
	case 7:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	case 8:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	case 9:
		numOfDays = 30;
		dayDisplay(numOfDays, start);
		break;
	case 10:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	case 11:
		numOfDays = 30;
		dayDisplay(numOfDays, start);
		break;
	case 12:
		numOfDays = 31;
		dayDisplay(numOfDays, start);
		break;
	default:
		cout << "Enter a custom number of days: " << endl;
		cin >> numOfDays;
		dayDisplay(numOfDays, start);
		break;
	}
	

	
	return 0;
}

void dayDisplay(int numOfDays, int start) {
	//cout << "mon tue wed thu fri sat sun " << endl;
	cout << " M  T  W  T  F  S  S " << endl;
	for (int i = 1; i < start; i++)
		cout << " ";
	for (int i = 1; i <= numOfDays; i++) {
		if (i < 10) {
			cout << " " << i << " ";
		}
		else {
			cout << i << " ";
		}
		if ((start + i - 1) % 7 == 0)
			cout << "  " << endl;
	}
}
/*
int main() {
	int month;
	int days[5][7];
	cout << "Please enter a month from 1-12" << endl;
	cin >> month;
	switch (month)
	{
	case 1:
		cout << "Please enter the starting day of the month 1-7" << endl;
	default:
		break;
	}
	
	
	
	
	return 0;
}

void display(int start, int monthLenght) {
	switch (start) {
	case 1:
		for (int i = 1; i <= monthLenght; i++){
			for (int j = 1)
		}
	}
}
*/