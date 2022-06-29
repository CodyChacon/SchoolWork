#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void linearSearch(string names[], string name){
    int count = 0;
	for(int i = 0; i < 50; i++){
		if(names[i] == name){
			cout << i << endl;
			cout << count << endl;
			break;
		}
		count++;
	}
}

int main(){
    int count = 0;
	string names[50];
	string name;

	ifstream myfile;

	myfile.open ("names.txt");

	while(!myfile.eof() && count < 50){
		getline(myfile, names[count]);
		count++;
	}

	cout << "Please enter a name to check for.\n";

	cin >> name;

    linearSearch(names, name);

	myfile.close();


}
