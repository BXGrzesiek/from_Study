#pragma once
#include "pracownik.h"
#include <random>

class Informatyk :
	public Pracownik
{
	std::random_device rd_;
	
public:
	Informatyk();
	Informatyk(std::string, short, short, short);
	Informatyk(std::string, short[]);
	Informatyk(const Informatyk&);
	~Informatyk() override;
	void print() const override;
};