#include "phd.h"
#include <iostream>
#include<fstream>
using namespace std;

phd::phd() {};

phd::~phd() {};

int phd::ret_class() { return 2; }

void phd::settr() {
	Base::settr();
	cout << "Produkt speed:";
	cin >> this->speed;
}

void phd::settr(char* com_name, char* produkt_model_name, char* produkt_name, int count, int size, int speed) {
	Base::settr(com_name, produkt_model_name, produkt_name, count, size/*, speed*/);
	speed = this->speed;
}

char* phd::get_com_name() { return Base::get_com_name(); }

char* phd::get_produkt_model_name() { return Base::get_produkt_model_name(); }

char* phd::get_produkt_name() { return Base::get_produkt_name(); }

int phd::get_count() { return Base::get_count(); }

int phd::get_size() { return Base::get_size(); }

int phd::get_speed() { return this->speed; }

void phd::rand_settr() {
	Base::rand_settr();
	speed = rand() % 50;
}

void phd::Print() {
	std::cout << std::endl;
	Base::Print();
	std::cout << "Product speed: " << this->speed << std::endl;
}

void phd::write(ofstream& out) {
	if (!out.is_open())
	{
		cout << "Error!";
		return;
	}
	Base::write(out);
	out.write((char*)&speed, sizeof(speed));
}
void phd::read(ifstream& in) {
	int sizes[3];
	if (!in.is_open())
	{
		cout << "Error!";
		return;
	}
	Base::read(in);
	in.read((char*)&speed, sizeof(speed));
}

