#pragma once
#include <string>

class Osoba
{
protected:
	static unsigned counter;
	unsigned id_;
	std::string data_;
public:
	//Osoba();
	//Osoba(std::string);
	//Osoba(const Osoba&);
	virtual ~Osoba();
	virtual void print() const = 0;
	static unsigned get_counter();
};