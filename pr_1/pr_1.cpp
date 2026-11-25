// як праильно локлізувати укр мову бо дуже складно перевіряти

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{

	setlocale(LC_ALL, "Ukrainian");

	int n;
	cout << "Введіть кількість студентів: ";
	cin >> n;
	cin.ignore();

	Student* list = new Student[n];

	for(int i = 0; i < n; i++) {
		cout << "Студент " << i + 1 << endl;
		list[i].input();
	}

	int room;
	cout << "Введіть номер аудиторії для пошуку: ";
	cin >> room;

	cout << "студенти в аудиторії " << room << ": " << endl;
	for(int i = 0; i < n; i++) {
		if(list[i].getRoom() == room) {
			list[i].print();
		}
	}
	
	delete[] list;
	return 0;
}
