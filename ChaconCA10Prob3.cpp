#include <iostream>

using namespace std;

int main(){
	int month, day, year;

	cout << "Please enter a month(numerically).\n";
	cin >> month;

	while(month > 13 or month < 1){
		cout << "Please enter a valid month.\n";
		cin >> month;
	}

	cout << "Now please enter a day.\n";
	cin >> day;

	while(day > 31 or day < 1){
		cout << "Please enter a valid day.\n";
		cin >> day;
	}

	cout << "Lastly please enter a two-digit year.\n";
	cin >> year;

	while(year > 99 or year < 0){
		"Please enter a valid year.\n";
		cin >> year;
	}

	if(month * day == year){
		cout << "This date is magic!\n";
	} else {
		cout << "This date is not magic.\n";
	}
}
