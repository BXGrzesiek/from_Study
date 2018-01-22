#pragma once
#include <string>

class Pracownik
{
protected:
	static unsigned counter;
	unsigned id_;
	std::string imie_;
	std::string nazwisko_;
	std::string stanowisko_;
	double wymiar_;
	double godziny_;
	double stawka_;
	std::string cecha_;

public:
	//Pracownik();
	//Pracownik(std::string);
	//Pracownik(const Pracownik&);
	virtual ~Pracownik();
	virtual void print() const = 0;
	static unsigned get_counter();
};