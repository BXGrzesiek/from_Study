#include "Pracownik.h"
#include <iostream>

unsigned Pracownik::counter = 0;

Pracownik::~Pracownik()
{
	std::cout << "Destruktor klasy: " << typeid(*this).name() << " uruchomiony" << std::endl;
	--counter;
}

unsigned Pracownik::get_counter()
{
	return counter;
}