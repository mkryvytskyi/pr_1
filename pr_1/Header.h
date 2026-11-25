// 10 задача 
#pragma once	
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	string subjects;
	int roomNumber;

public:
	void input();
	void print();
	int getRoom();
};