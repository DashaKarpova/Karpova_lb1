#include "Karpova_group.h"

using namespace std;

void Karpova_group::add_student()
{
	Karpova_student *student = new Karpova_student;
	cin >> *student;
	group.push_back(student);
};

void Karpova_group::delete_students()
{
	for (auto& student : group)
		delete student;
	group.clear();
};

ostream& operator <<(ostream& out, Karpova_group& g)
{
	out << "Студенты группы: " << endl;
	for (auto& student : g.group)
		out << *student;
	return out;
};

//Ввод данных в файл
void Karpova_group::save_vector(ofstream& file)
{
	if (!file.is_open())
		cout << "\nОшибка!" << endl;
	file << group.size() << endl;
	for (auto& student : group)
		file << *student;
};


//Чтение данных из файла
void Karpova_group::load_vector(ifstream& file2)
{
	if (!file2.is_open())
		cout << "\nОшибка!" << endl;
	delete_students();
	int n=0;
	file2 >> n;
	for (int i=0; i<n; i++)
	{
		Karpova_student* student = new Karpova_student;
		file2 >> *student;
		group.push_back(student);
	}
};

