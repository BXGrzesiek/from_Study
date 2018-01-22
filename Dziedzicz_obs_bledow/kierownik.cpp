#include "kierownik.h"
#include <iostream>
#include <algorithm>

Kierownik::Kierownik()		//konstruktor domyœlny
{
	id_ = ++counter;
	std::cout << "Konstruktor domyœlny klasy: " << typeid(*this).name() << std::endl;

	std::default_random_engine engine3(ry_());
	const std::uniform_real_distribution<double> distribution3(0.1, 1.0);
	godziny_ = distribution3(ry_);

	std::default_random_engine engine2(rx_());
	const std::uniform_real_distribution<double> distribution2(50.0, 200.0);
	godziny_ = distribution2(rx_);

	std::default_random_engine engine(rd_());
	const std::uniform_real_distribution<double> distribution(50, 250);
	stawka_ = distribution(rd_);
}


Kierownik::~Kierownik()
{
	std::cout << "Destruktor klasy: " << typeid(*this).name() << " uruchomiony" << std::endl;
}

void Kierownik::print() const
{
	size_t average_ = 0;
	std::cout << "ID: \t\t\t\t" << id_ << std::endl;
	std::cout << "Imie: \t\t\t\t" << imie_ << std::endl;
	std::cout << "nazwisko: \t\t\t\t" << nazwisko_ << std::endl;
	std::cout << "Stanowisko: \t\t\t" << stanowisko_ << std::endl;
	std::cout << "Wymiar godzin: \t\t\t" << wymiar_ << std::endl;
	std::cout << "Godziny przepracowane: \t\t" << godziny_ << std::endl;
	std::cout << "Stawka: \t\t\t" << stawka_ << std::endl;

	std::cout << std::endl << std::endl;
}