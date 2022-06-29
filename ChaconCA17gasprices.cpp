#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	int month, day, year, lowm, lowd, lowy, highm, highd, highy;
	double price, lowp, highp;
	ifstream myfile;

	myfile.open ("gasprices.dat");
	myfile >> month;
	myfile >> day;
	myfile >> year;
	myfile >> price;

	lowm = highm = month;
	lowd = highd = day;
	lowy = highy = year;
	lowp = highp = price;

	while(!myfile.eof()){
		if(price > highp){
			highm = month;
			highd = day;
			highy = year;
			highp = price;
		}
		if(price < lowp){
			lowm = month;
			lowd = day;
			lowy = year;
			lowp = price;
		}

		myfile >> month;
		myfile >> day;
		myfile >> year;
		myfile >> price;
	}

	myfile.close();

	cout << "Highest gas price: $" << highp << " on " << highm << "/" << highd << "/" << highy << endl;
	cout << "Lowest gas price: $" << lowp << " on " << lowm << "/" << lowd << "/" << lowy << endl;
	return 0;
}
