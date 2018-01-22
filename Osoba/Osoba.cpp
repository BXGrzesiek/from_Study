#include "Osoba.h"
#include <iostream>

unsigned Osoba::counter = 0;

//Osoba::Osoba()
//{
//	std::cout << "Konstruktor domyœlny klasy: " << typeid(*this).name() << std::endl;
//	id_ = ++counter;
//	data_ = "Jan Kowalski";
//}
//
//Osoba::Osoba(std::string data)
//{ 
//	std::cout << "Konstruktor sparametryzowany klasy: " << typeid(*this).name() << std::endl;
//	id_ = ++counter;
//	this->data_ = data;
//}
//
//Osoba::Osoba(const Osoba& source)
//{
//	id_ = source.id_;
//	++counter;
//	data_ = source.data_;
//}
Osoba::~Osoba()
{
	std::cout << "Destruktor klasy: " << typeid(*this).name() << " uruchomiony" << std::endl;
	--counter;
}

//void Osoba::print() const
//{
//	std::cout << "ID: " << id_ << std::endl;
//	std::cout << "Info: " << data_ << std::endl;
//}

unsigned Osoba::get_counter()
{
	return counter;
}