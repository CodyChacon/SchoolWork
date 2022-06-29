#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double weight, rate;

	cout << "Please enter the weight of your package.\n";
	cin >> weight;

	if(weight <= 2)
		rate = 1.10;
	else if(weight <= 6)
		rate = 2.20;
	else if(weight <= 10)
		rate = 3.70;
	else
		rate = 3.80;

	cout << setprecision(2) << fixed << "The shipping charges will be $" << rate << endl;
}
