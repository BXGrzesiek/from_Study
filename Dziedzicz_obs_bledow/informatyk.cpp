#include "informatyk.h"
#include <iostream>
#include <algorithm>
#include <locale>

Informatyk::Informatyk()		//konstruktor domyœlny
{
	id_ = ++counter;
	std::cout << "Konstruktor domyœlny klasy: " << typeid(*this).name() << std::endl;

	std::default_random_engine engine(rd_());
	const std::uniform_real_distribution<double> distribution3(0.1, 1.0);
	wymiar_ = distribution3(rd_);

	const std::uniform_real_distribution<double> distribution2(50.0, 200.0);
	godziny_ = distribution2(rd_);

	const std::uniform_real_distribution<double> distribution(50.0, 200.0);
	stawka_ = distribution(rd_);

}

Informatyk::~Informatyk()
{
	std::cout << "Destruktor klasy: " << typeid(*this).name() << " uruchomiony" << std::endl;
}

void Informatyk::print() const
{
	size_t average_ = 0;
	std::cout << "ID: \t\t\t\t" << id_ << std::endl;
	std::cout << "Imie: \t\t\t\t" << imie_ << std::endl;
	std::cout << "nazwisko: \t\t\t\t" << nazwisko_ << std::endl;
	std::cout << "Stanowisko: \t\t\t" << stanowisko_ << std::endl;
	std::cout << "Wymiar godzin: \t\t\t" << wymiar_ << std::endl;
	std::cout << "Godziny przepracowane: \t\t" << godziny_ << std::endl;
	std::cout.imbue(std::locale("pl_PL"));
	std::cout << "Stawka godzinowa: \t\t\t" << std::showbase << stawka_ << std::endl;
	//std::cout << "Stawka godzinowa: \t\t" << stawka_ << std::endl;
	std::cout << std::endl << std::endl;
}