#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Karpova_student
{
public:
	friend istream& operator>> (istream& in, Karpova_student& s);
	friend ostream& operator<< (ostream& out, Karpova_student& s);
	friend ofstream& operator<< (ofstream& file, Karpova_student& s);
	friend ifstream& operator>> (ifstream& file2, Karpova_student& s);
private:
	string surname, name;
	int age=0;
	double rating = 0.0;
};