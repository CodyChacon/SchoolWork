#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int rand1, rand2, guess;

	srand(time(NULL));

	rand1 = rand() % 500 + 1;
	rand2 = rand() % 500 + 1;

	cout << "  " << rand1 << endl;
	cout << "+ " << rand2 << endl;

	cin >> guess;

	if(guess == rand1 + rand2){
		cout << "Congratulations!\n";
	} else {
		cout << "The correct answer was " << rand1 + rand2 << endl;
	}

	return 0;
}
