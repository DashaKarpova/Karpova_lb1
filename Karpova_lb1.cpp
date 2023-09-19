#include <iostream>
#include <Windows.h>
#include "Karpova_student.h"
#include "Karpova_group.h"
#include "Karpova_checking.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, ".1251");
	SetConsoleCP(1251);
	Karpova_group group;
	int option = -1;
	while (option)
	{
		cout << "\n1.Добавить студента 2.Показать группу 3.Сохранить группу в файл 4.Вывод группы из файла 5. очистка списка группы 0.Выход" << endl;
		option = getcorrectnumber(0, 5);
		switch (option)
		{
		case 1:
		{
			group.add_student();
			break;
		}
		case 2:
		{
			cout << group;
			break;
		}
		case 3:
		{
			string inputfile;
			cout << "\n Введите название файла без .txt" << endl;
			cin >> inputfile;
			ofstream file;
			file.open(inputfile + ".txt");
			group.save_vector(file);
			file.close();
			cout << "\nДанные сохранены в файл" << endl;
			break;
		}
		case 4:
		{
			string outputfile;
			ifstream file2;
			cout << "\nВведите название файла без .txt" << endl;
			cin >> outputfile;
			file2.open(outputfile + ".txt");
			group.load_vector(file2);
			cout << "\nДанные загружены" << endl;
			file2.close();
			break;
		}
		case 5:
		{
			group.delete_students();
			break;
		}
		case 0:
			return 0;
		default:
		{
			cout << "\n Введите значение от 0 до 5" << endl;
			break;
		}
		}
	}
	return 0;
}


