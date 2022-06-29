#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double daily = .01, total = 0;
	int days;

	cout << "Please enter the number of days you would work.\n";
	cin >> days;

	cout << "Salary" << setw(20) << "Total\n";
	cout << setw(26) << setfill('-') << "-" << endl;

	for(int i = 1; i <= days; i++){
		total += daily;

		cout << "$" << setfill(' ') << setw(5) << setprecision(2) << fixed << daily << setw(14) << "$" << setw(6) << total << endl;

		daily *= 2;
	}
}
