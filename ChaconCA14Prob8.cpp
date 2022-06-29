#include <iostream>

using namespace std;

double fallingDistance(int time);

int main(){
	for(int i = 1; i <= 10; i++){
		fallingDistance(i);
	}
}

double fallingDistance(int time){
	double distance, g = 9.8;

	distance = .5 * g * (time * time);

	cout << "At " << time << " seconds the object has fallen " << distance << " meters.\n";
	return distance;
}
