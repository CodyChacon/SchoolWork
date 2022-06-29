#include <iostream>

using namespace std;

int main(){
	string first, last, temp;
	bool quit = false;

	cout << "Please enter a list of names, typing 'quit' once the last name has been entered.\n";
	cin >> temp;

	first = temp;
	last = temp;

	while(quit != true){
		cout << "Please enter another name.\n";
		cin >> temp;

		if(temp == "quit"){
			quit = true;
		}
		if(first > temp && quit != true){
			first = temp;
		}
		if(last < temp && quit != true){
			last = temp;
		}
	}

	cout << "The first name alphabetically is " << first << endl;
	cout << "The last name alphabetically is " << last << endl;
}
