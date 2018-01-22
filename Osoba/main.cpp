#include "Student.h"
#include "Teacher.h"
#include "Osoba.h"
#include <iostream>


int main()
{
	setlocale(LC_CTYPE, "pl-PL");
	int n = 16;
	std::cout << "Sekcja generowania konstruktorów\n_______________________________________\n" << std::endl;
	{
		/*
		Teacher naucz1;
		naucz1.print();
		naucz1.~Teacher();
		Student stud1;
		stud1.print();
		stud1.~Student();
		*/
		
		Osoba** tablica = new Osoba*[n];
		for (size_t i = 0; i < n; ++i)
		{
			if (i == 0)
				tablica[i] = new Teacher();
			else
				tablica[i] = new Student();
		}
		std::cout << "_______________________________________\nKoniec sekcji generowania konstruktorów\n" << std::endl;
		for (size_t i = 0; i < n; ++i)
			tablica[i]->print();
		std::cout << "Iloœæ obiektów: " << Osoba::get_counter() << std::endl;
		for (size_t i = 0; i < n; ++i) 
		{
			delete tablica[i];
			std::cout << std::endl;
		}
		std::cout << "Iloœæ obiektów: " << Osoba::get_counter() << std::endl;
	
	std::cout << "_______________________________________\nKoniec sekcji generowania destruktorów\n" << std::endl;
	}
	system("pause");
	return 0;
}