#pragma once
#include "Osoba.h"

class Teacher :
	public Osoba
{
	std::string classes_;
	std::string time_for_students_;
public:
	Teacher();						//konstruktor domyœlny
	Teacher(std::string, std::string, std::string);		//konstruktor sparametryzowany
	Teacher(const Teacher&);		//kontruktor kopiuj¹cy
	~Teacher();						//destruktor
	void print() const override;	//fun printuj¹ca
};

