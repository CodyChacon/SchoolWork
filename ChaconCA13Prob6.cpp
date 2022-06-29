#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int speed, time, distance;

	cout << "How fast were you travelling (in miles per hour)?\n";
	cin >> speed;

	cout << "How many hours did you travel for?\n";
	cin >> time;

	cout << "Hour" << fixed << setw(40) << "Distance Travelled\n";
	cout << setfill('-') << setw(44) << "-" << endl;
	for(int i = 1; i <= time; i++){
		cout << setfill(' ') << setw(2) << i << setw(42) << speed * i << endl;
	}
}
