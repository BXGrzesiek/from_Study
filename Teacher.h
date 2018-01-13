#pragma once
#include "Osoba.h"

class Teacher :
	public Osoba
{
	std::string classes_;
	std::string time_for_students_;
public:
	Teacher();
	Teacher(std::string, std::string, std::string);
	Teacher(const Teacher&);
	~Teacher();
	void print() const override;
};

