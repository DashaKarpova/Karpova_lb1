#include "Karpova_student.h"
#include "Karpova_checking.h"

using namespace std;

//Оператор ввода информации, консоль
istream& operator>> (istream& in, Karpova_student& s)
{
	cout << "\nВведите фамилию: ";
	in.clear();
	in.ignore(INT_MAX, '\n');
	getline( in, s.surname);
	cout << "\nВведите имя: ";
	in.clear();
	in.ignore(INT_MAX, '\n');
	getline(in, s.name);
	cout << "Введите возраст: ";
	s.age = getcorrectnumber(0, INT_MAX);
	cout << "\nВведите рейтинг студента: ";
	s.rating = getcorrectnumber(0, 100);
	return in;
};

//Оператор вывода информации, консоль
ostream& operator<< (ostream& out, Karpova_student& s)
{
	out<< s.surname << "\n" << s.name << "\n" << s.age
		<< "\n" << s.rating<<endl;
	return out;
};

//Ввод в файл
ofstream& operator<< (ofstream& file, Karpova_student& s)
{
	file << s.surname << endl << s.name << endl << s.age << endl << s.rating << endl;
	return file;
};

//Вывод из файла
ifstream& operator>> (ifstream& file2, Karpova_student& s)
{
	getline(file2, s.surname);
	getline(file2, s.surname);
	getline(file2, s.name);
	file2 >> s.age;
	file2 >> s.rating;
	return file2;
};
