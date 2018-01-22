#pragma once
#include "pracownik.h"
#include <random>

class Kierownik :
	public Pracownik
{
	std::random_device rd_;
	std::random_device rx_;
	std::random_device ry_;


public:
	Kierownik();
	Kierownik(std::string, short, short, short);
	Kierownik(std::string, short[]);
	Kierownik(const Kierownik&);
	~Kierownik() override;
	void print() const override;
};