#include "vehicleClass.h"

string vehicle::getMod(){
	return model;
}
bool vehicle::setMod(string a){
	bool set = false;

	if(a.length() > 24){
		cout << "The string is too long.\n";
	} else {
		model = a;
		set = true;
	}

	return set;
}

string vehicle::getMan(){
	return manufacturer;
}
bool vehicle::setMan(string b){
	bool set = false, space = false;;

	if(b.length() > 15){
		cout << "The string is too long.\n";
	} else {
		for(int i = 0; i < b.length(); i++){
			if(isspace(b[i])){
				space = true;
				cout << "No white spaces allowed.\n";
			}
		}
		if(!space){
			manufacturer = b;
			set = true;
		}
	}

	return set;
}

int vehicle::getCyl(){
	return cylinders;
}
bool vehicle::setCyl(int c){
	bool set = false;

	if(c > 12 || c < 1){
		cout << "Not in the correct range.\n";
	} else {
		cylinders = c;
		set = true;
	}

	return set;
}

float vehicle::getEng(){
	return engine;
}
bool vehicle::setEng(float d){
	bool set = false;

	if(d > 20.0 or d < 0.1){
		cout << "Not in the correct range.\n";
	} else {
		engine = d;
		set = true;
	}

	return set;
}

float vehicle::getCost(){
	return cost;
}
bool vehicle::setCost(float e){
	bool set = false;

	if(e > 250000.00 or e < 0.0){
		cout << "Not in the correct range.\n";
	} else {
		cost = e;
		set = true;
	}

	return set;
}