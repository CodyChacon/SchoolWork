#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	int num, count = 1;
	string name;
	ifstream myfile;

	myfile.open ("golf.dat");
	myfile >> name;

	cout << "Player name: " << name << endl;

	myfile >> num;

	while(!myfile.eof()){
		cout << "Hole " << count << ": " << num << endl;
        count++;
		myfile >> num;
	}

	myfile.close();
	return 0;
}
