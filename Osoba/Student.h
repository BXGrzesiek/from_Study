#pragma once
#include "Osoba.h"
#include <random>

class Student :
	public Osoba
{
	std::random_device rd_;
	short marks_[3];
public:
	Student();
	Student(std::string, short, short, short);
	Student(std::string, short[]);
	Student(const Student&);
	~Student() override;
	void print() const override;
};