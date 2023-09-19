#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Karpova_student.h"

using namespace std;

class Karpova_group
{
public:
	void add_student();
	void delete_students();

	friend ostream& operator <<(ostream& out, Karpova_group& g);

	void load_vector(ifstream& file2);
	void save_vector(ofstream& file);

private:
	vector<Karpova_student*> group;
};
