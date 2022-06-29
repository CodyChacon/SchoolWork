#include <iostream>
#include <string>

using namespace std;

#include "vehicleClass.h"

bool validateVehicle(vehicle p){
	bool t = true;
	
	if(p.getMod().empty()){
		t = false;
	}
	
	if(p.getMan().empty()){
		t = false;
	}
	
	if(p.getCyl() < 1 or p.getCyl() > 12){
		t = false;
	}
	
	if(p.getEng() < .1 or p.getEng() > 20){
		t = false;
	}
	
	if(p.getCost() < 0 or p.getCost() > 250000){
		t = false;
	}
	
	return t;
}

void displayVehicle(vehicle p){
	cout << "Model: " << p.getMod() << endl;

	cout << "Manufacturer: " << p.getMan() << endl;

	cout << "Cylinders: " << p.getCyl() << endl;

	cout << "Engine: " << p.getEng() << endl;

	cout << "Cost: $" << p.getCost() << endl;
}

int main(){
	int vehicles, check;
	bool tempBool = false;
	int tempInt;
	float tempFloat;
	string tempStr;

	cout << "How many vehicles would you like to input(max of 20)?\n";
	cin >> vehicles;

	while(vehicles > 20 or vehicles < 1){
		cout << "How many vehicles would you like to input(max of 20)?\n";
		cin >> vehicles;
	}
	vehicle set1[vehicles];

	for(int i = 0; i < vehicles; i++){
		cout << "This information relates to car #" << i + 1 << "\n\n";
	
			while(!tempBool){
				cout << "What is your car model? (type 'quit' now to exit early)\n";
				cin.ignore();
				getline(cin, tempStr);
				if(tempStr != "quit"){
					tempBool = set1[i].setMod(tempStr);
				} else {
					tempBool = true;
				}
			}
			tempBool = false;
			
		if(tempStr != "quit"){
			while (!tempBool){
				cout << "Who is your car manufacturer?\n";
				getline(cin, tempStr);
				tempBool = set1[i].setMan(tempStr);
			}
			tempBool = false;

			while (!tempBool){
				cout << "How many cylinders does your car have?\n";
				cin >> tempInt;
				tempBool = set1[i].setCyl(tempInt);
			}
			tempBool = false;
			
			while (!tempBool){
				cout << "Whats the engine number? (honestly not sure what this even is lol)\n";
				cin >> tempFloat;
				tempBool = set1[i].setEng(tempFloat);
			}
			tempBool = false;
			
			while (!tempBool){
				cout << "What is the cars cost?\n";
				cin >> tempFloat;
				tempBool = set1[i].setCost(tempFloat);
			}
			tempBool = false;
		}
	}
	
	for(int i = 0; i < vehicles; i++){
		bool temp;
		temp = validateVehicle(set1[i]);
		
		cout << "Input check for vehicle " << i + 1 << ": " << temp << endl;
	}
	
	cout << "Thanks for inputting all of your car information!\n";
	while(check != -1){
		do{
			cout << "Enter the vehicle number you'd like information for! (put 0 to check all vehicles or -1 to quit).\n";
			cin >> check;
		} while (check > vehicles || check < -1);
		
		if(check > 0){
			displayVehicle(set1[check - 1]);
		}
		if(check == 0){
			for(int i = 0; i < vehicles; i++){
				cout << "Vehicle #" << i + 1 << endl;
				displayVehicle(set1[i]);
				cout << endl;
			}
		}
	}
	
	cout << "Goodbye!\n";
}