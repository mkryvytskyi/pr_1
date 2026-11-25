#include "Header.h"


void Student::input() {
	cout << "ПІБ студента; ";
	getline(cin, name);

	cout << "Предмети; ";
	getline(cin, subjects);

	cout << "Номер кімнати; ";
	cin >> roomNumber;
	cin.ignore();
}

void Student::print() {
	cout << "ПІБ студента: " << name << endl;
	cout << "Предмети: " << subjects << endl;
	cout << "Номер кімнати: " << roomNumber << endl;
}

int Student::getRoom() {
	return roomNumber;
}