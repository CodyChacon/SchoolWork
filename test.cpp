#include <iostream>
#include <fstream>

using namespace std;

struct item{
	char description[100];
	int ID;
	int quantity;
	float wholesale;
	float retail;
};

void createRecords(){
	item temp;

	ofstream file;
	file.open("inventory.dat");

	if(file.is_open()){
		cout << "What is the item ID?\n";
		cin >> temp.ID;
		file << temp.ID << endl;

		cout << "What is the description of the item?\n";
		cin.ignore();
		cin.getline(temp.description, 100);
		file << temp.description << endl;

		cout << "How much of the item do you currently have in stock?\n";
		cin >> temp.quantity;
		file << temp.quantity << endl;

		cout << "What is the item's wholesale cost?\n";
		cin >> temp.wholesale;
		file << temp.wholesale << endl;

		cout << "What is the item's retail cost?\n";
		cin >> temp.retail;
		file << temp.retail << endl;
	}

	file.close();
	return;
}

void changeRecords(){
	item temp;
	string strtemp, strtemp2, check;

	cout << "What is the ID number of the item you're looking for?\n";
	cin >> check;
	cout << endl;

	ifstream file;
	file.open("inventory.dat", ios::in);

	ofstream newfile;
	newfile.open("newfile.dat");

	if(file.is_open() and newfile.is_open()){
        while(getline(file, strtemp)){
            if(strtemp == check){
                cout << "Item ID: " << strtemp << endl;
                getline(file, strtemp);
				cout << "Previous Item Description: " << strtemp << endl;
				cout << "Please enter a new one: " << endl;
				cin >> strtemp2;
				newfile << strtemp2 << endl;
				getline(file, strtemp);
                cout << "Previous Item Quantity: " << strtemp << endl;
				cout << "Please enter a new one: " << endl;
				cin >> strtemp2;
				newfile << strtemp2 << endl;
                getline(file, strtemp);
                cout << "Previous Item Wholsale Cost: $" << strtemp << endl;
				cout << "Please enter a new one: " << endl;
				cin >> strtemp2;
				newfile << strtemp2 << endl;
                getline(file, strtemp);
                cout << "Previous Item Retial Cost: $" << strtemp << endl << endl;
				cout << "Please enter a new one: " << endl;
				cin >> strtemp2;
				newfile << strtemp2 << endl;
            } else {
				newfile << strtemp << endl;
			}
        }
	}

	file.close();
	newfile.close();

	if(remove("inventory.dat") != 0){
		cout << "File does not exist\n";
	}

	if(rename("newfile.dat", "inventory.dat") != 0){
		cout << "File could not be changed names.\n";
	}
}

void addRecords(){
	item temp;

	ofstream file;
	file.open("inventory.dat", ios::out | ios::app | ios::binary);

	if(file.is_open()){
		cout << "What is the item ID?\n";
		cin >> temp.ID;
		file << temp.ID << endl;

		cout << "What is the description of the item?\n";
        cin.ignore();
		cin.getline(temp.description, 100);
		file << temp.description << endl;

		cout << "How much of the item do you currently have in stock?\n";
		cin >> temp.quantity;
		file << temp.quantity << endl;

		cout << "What is the item's wholesale cost?\n";
		cin >> temp.wholesale;
		file << temp.wholesale << endl;

		cout << "What is the item's retail cost?\n";
		cin >> temp.retail;
		file << temp.retail << endl;
	}

	file.close();
	return;
}

void displayRecords(){
	item temp;
	string strtemp, strtemp2, check;

	cout << "What is the ID number of the item you're looking for?\n";
	cin >> check;
	cout << endl;

	ifstream file;
	file.open("inventory.dat", ios::in);

	if(file.is_open()){
        while(getline(file, strtemp)){
            if(strtemp == check){
                cout << "Item ID: " << strtemp << endl;
                getline(file, strtemp);
				cout << "Item Description: " << strtemp << endl;
				getline(file, strtemp);
                cout << "Item Quantity: " << strtemp << endl;
                getline(file, strtemp);
                cout << "Item Wholsale Cost: $" << strtemp << endl;
                getline(file, strtemp);
                cout << "Item Retial Cost: $" << strtemp << endl << endl;
            }
        }
	}

	file.close();
	return;
}

int main(){
	int choice = 0;

	cout << "Press 1 if you'd like to create a new inventory/overwrite the previous one.\n";
    cout << "Press 2 if you'd like to add to the inventory.\n";
    cout << "Press 3 if you'd like to view products in an already made inventory.\n";
	cout << "Press 4 if you'd like to change one of the products already made.\n";
    cout << "Press -1 to quit.\n";

	while(choice != -1){
		cin >> choice;

		if(choice == 1){
			createRecords();
		} else if(choice == 2){
			addRecords();
		} else if(choice == 3){
			displayRecords();
		} else if(choice == 4){
			changeRecords();
		}
		cout << "Press 1, 2, 3, 4, or -1 to continue.\n";
	}
	return 0;
}
