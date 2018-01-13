#include "Teacher.h"
#include <iostream>
#include <tuple>

Teacher::Teacher()
{
	std::cout << "Konstruktor domy�lny klasy: " << typeid(*this).name() << std::endl;
	id_ = ++counter;
	data_ = "Grzegorz Biskup";
	classes_ = "Programowanie Obiektowe";
	time_for_students_ = "wt 7:00";
}

Teacher::Teacher(std::string data, std::string classes, std::string time_for_students)	//domy�lny
{
	id_ = ++counter;
	data_ = data;
	classes_ = classes;
	time_for_students_= time_for_students;
}

Teacher::Teacher(const Teacher& kopia)	//kopiuj�cy
{
	id_ = ++counter;
	data_ = kopia.data_;
	classes_ = kopia.classes_;
	time_for_students_ = kopia.time_for_students_;
}
Teacher::~Teacher()	//destruktor
{
	std::cout << "Destruktor klasy: " << typeid(*this).name() << " uruchomiony" << std::endl;
}

void Teacher::print() const	//fun printuj�ca
{
	std::cout << "ID: " << id_ << std::endl;
	std::cout << "Info: " << data_ << std::endl;
	std::cout << "Przedmioty: " << classes_ << std::endl;
	std::cout << "Konsultacje: " << time_for_students_ << std::endl;
}