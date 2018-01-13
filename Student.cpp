#include "Student.h"
#include <iostream>
#include <algorithm>

Student::Student()
{
	id_ = ++counter;
	std::cout << "Konstruktor domyœlny klasy: " << typeid(*this).name() << std::endl;
	data_ = "Mark Twain";
	//for (size_t i = 0; i < 3; ++i)
	//	marks_[i] = rand() % 4 + 2;
	std::default_random_engine engine(rd_());
	const std::uniform_int_distribution<short> distribution(2, 5);
	for (size_t i = 0; i < 3; ++i)
		marks_[i] = distribution(rd_);
}

Student::Student(std::string data, short m1, short m2, short m3)
{
	id_ = ++counter;
	std::cout << "Konstruktor sparametryzowany klasy: " << typeid(*this).name() << std::endl;
	data_ = data;
	marks_[0] = m1;
	marks_[1] = m2;
	marks_[2] = m3;
}


Student::Student(std::string data, short marks[])
{
	id_ = ++counter;
	std::cout << "Konstruktor sparametryzowany klasy: " << typeid(*this).name() << std::endl;
	data_ = data;
	for (size_t i = 0; i < 3; ++i)
		marks_[i] = marks[i];
}

Student::Student(const Student& kopia)
{
	std::cout << "Konstruktor kopiuj¹cy klasy: " << typeid(*this).name() << std::endl;
	id_ = kopia.id_;
	data_ = kopia.data_;
	for (size_t i = 0; i < 3; ++i)
		marks_[i] = kopia.marks_[i];
}

Student::~Student()
{
	std::cout << "Destruktor klasy: " << typeid(*this).name() << " uruchomiony" << std::endl;
}

void Student::print() const
{
	size_t average_ = 0;
	std::cout << "ID: " << id_ << std::endl;
	std::cout << "Info: " << data_ << std::endl;
	std::cout << "Oceny: ";
	for (size_t i = 0; i < 3; ++i)
	{
		std::cout << "<" << marks_[i] << "> ";
		average_ += marks_[i];
	}
	std::cout << "Srednia : " << average_ / 3;
	std::cout << std::endl;
}