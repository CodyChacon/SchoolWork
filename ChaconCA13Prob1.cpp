#include <iostream>

using namespace std;

int main(){
	int bugs, total = 0;

	for(i = 0; i < 7; i++){
		cout << "How many bugs did you collect today?\n";
		cin >> bugs;

		total += bugs;
	}

	cout << "You caught " << total << " bugs this week.\";

	return 0;
}
