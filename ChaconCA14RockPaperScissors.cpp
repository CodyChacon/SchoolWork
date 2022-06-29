#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int rand1, evencounter = 0, oddcounter =0;

	srand(time(NULL));
	for(int i = 0; i < 100; i++){
		rand1 = rand() % 500 + 1;
		if(rand1 % 2 == 0){
			evencounter++;
		} else {
			oddcounter++;
		}
	}

	cout << "Number of even numbers is: " << evencounter << endl;
	cout << "Number of odd numbers is: " << oddcounter << endl;

	return 0;
}
