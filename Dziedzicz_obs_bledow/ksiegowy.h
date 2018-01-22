#pragma once
#include "pracownik.h"
#include <random>

class Ksiegowy :
	public Pracownik
{
	std::random_device rd_;
	std::random_device rx_;
	std::random_device ry_;

public:
	Ksiegowy();						//konstruktor domyœlny
	Ksiegowy(std::string, std::string, std::string);		//konstruktor sparametryzowany
	Ksiegowy(const Ksiegowy&);		//kontruktor kopiuj¹cy
	~Ksiegowy();						//destruktor
	void print() const override;	//fun printuj¹ca
};

