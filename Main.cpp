#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

const int ENTRY_NUMBERS = 3; 

class Employee {
private:
	string name;
	int idnumber;
	string department;
	string position;

public:
	Employee(); // DEFAULT CONSTRUCTOR 

	//MUTATOR METHODS 
	void setName(string n);
	void setId(int idnum);
	void setDepart(string dep);
	void setPosition(string posit);

	//ACCESSOR METHODS 
	string getName() const;
	int getID() const;
	string getDepart() const;
	string getPos() const;
};

// IMPLEMENTATION 
Employee::Employee() {
	name = "";
	idnumber = 0;
	department = "";
	position = "";
}

void Employee::setName(string n) {
	name = n;
}

void Employee::setId(int idnum) {
	idnumber = idnum;
}

void Employee::setDepart(string dep) {
	department = dep;
}

void Employee::setPosition(string posit) {
	position = posit;
}

string Employee::getName() const {
	return name;
}

int Employee::getID() const {
	return idnumber;
}

string Employee::getDepart() const {
	return department;
}

string Employee::getPos() const {
	return position;
}

int main() {
	Employee objectarray[ENTRY_NUMBERS];
	string name, department, position, l;
	int idnumber;
	fstream inputfile;

	inputfile.open("dataentries.txt");

	if (!inputfile) {
		cout << "File could not open." << endl;
	}

	else {

		for (int i = 0; i < ENTRY_NUMBERS; i++) {
			while (getline(inputfile, l)) {
				getline(inputfile, name, ',');
				objectarray[i].setName(name);

				inputfile >> idnumber;
				objectarray[i].setId(idnumber);

				getline(inputfile, department, ',');
				objectarray[i].setDepart(department);

				getline(inputfile, position);
				objectarray[i].setPosition(position);

				cout << "Name: " << objectarray[i].getName() << endl;
				cout << "ID Number: " << objectarray[i].getID() << endl;
				cout << "Department: " << objectarray[i].getDepart() << endl;
				cout << "Position: " << objectarray[i].getPos() << endl;
			}
		}

	}

	system("pause");
	return 0;
}