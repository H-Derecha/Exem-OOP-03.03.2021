#include "dvd.h"
#include <iostream>
#include<fstream>
using namespace std;

dvd::dvd() {};

dvd::~dvd() {};

int dvd::ret_class() { return 3; }

void dvd::settr() {
	Base::settr();
	cout << "Produkt speed:";
	cin >> this->speed;
}

void dvd::settr(char* com_name, char* produkt_model_name, char* produkt_name, int count, int size, int speed) {
	Base::settr(com_name, produkt_model_name, produkt_name, count, size/*, speed*/);
	speed = this->speed;
}

char* dvd::get_com_name() { return Base::get_com_name(); }

char* dvd::get_produkt_model_name() { return Base::get_produkt_model_name(); }

char* dvd::get_produkt_name() { return Base::get_produkt_name(); }

int dvd::get_count() { return Base::get_count(); }

int dvd::get_size() { return Base::get_size(); }

int dvd::get_speed() { return this->speed; }

void dvd::rand_settr() {
	Base::rand_settr();
	speed = rand() % 50;
}

void dvd::Print() {
	std::cout << std::endl;
	Base::Print();
	std::cout << "Product speed: " << this->speed << std::endl;
}

void dvd::write(ofstream& out) {
	if (!out.is_open())
	{
		cout << "Error!";
		return;
	}

	Base::write(out);
	out.write((char*)&speed, sizeof(speed));
}
void dvd::read(ifstream& in) {
	int sizes[3];
	if (!in.is_open())
	{
		cout << "Error!";
		return;
	}
	Base::read(in);
	in.read((char*)&speed, sizeof(speed));
}

