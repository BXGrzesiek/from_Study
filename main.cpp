#include "Student.h"
#include "Teacher.h"
#include "Osoba.h"
#include <iostream>


int main()
{
	setlocale(LC_CTYPE, "pl-PL");
	int n = 15;
	std::cout << "Sekcja generowania konstruktor�w\n_______________________________________\n" << std::endl;
	{
		Osoba** tablica = new Osoba*[n];
		for (size_t i = 0; i < n; ++i)
		{
			if (i % 2)
				tablica[i] = new Teacher();
			else
				tablica[i] = new Student();
		}
		std::cout << "_______________________________________\nKoniec sekcji generowania konstruktor�w\n" << std::endl;
		for (size_t i = 0; i < n; ++i)
			tablica[i]->print();
		std::cout << "Ilo�� obiekt�w: " << Osoba::get_counter() << std::endl;
		for (size_t i = 0; i < n; ++i) 
		{
			delete tablica[i];
			std::cout << std::endl;
		}
		std::cout << "Ilo�� obiekt�w: " << Osoba::get_counter() << std::endl;
	std::cout << "Sekcja generowania destruktor�w\n_______________________________________\n" << std::endl;
	std::cout << "_______________________________________\nKoniec sekcji generowania destruktor�w\n" << std::endl;
	}
	system("pause");
	return 0;
}