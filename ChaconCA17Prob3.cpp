#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
	int num, total = 0;
	ifstream myfile;

	myfile.open ("numbers.dat");
	myfile >> num;

	while(!myfile.eof()){
		total += num;
		myfile >> num;
	}

	myfile.close();

	cout << total << endl;
	return 0;
}
