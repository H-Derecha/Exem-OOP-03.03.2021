#include "usb.h"
#include <iostream>
#include<fstream>
using namespace std;

usb::usb() {};

usb::~usb() {};

int usb::ret_class() { return 1; }

void usb::settr() {
	Base::rand_settr();
	cout << "Produkt speed:";
	cin >> this->speed;
}

void usb::settr(char* com_name, char* produkt_model_name, char* produkt_name, int count, int size, int speed) {
	Base::settr(com_name, produkt_model_name, produkt_name, count, size/*, speed*/);
	speed = this->speed;
}

char* usb::get_com_name() { return Base::get_com_name(); }

char* usb::get_produkt_model_name() { return Base::get_produkt_model_name(); }

char* usb::get_produkt_name() { return Base::get_produkt_name(); }

int usb::get_count() { return Base::get_count(); }

int usb::get_size() { return Base::get_size(); }

int usb::get_speed() { return this->speed; }

void usb::rand_settr() {
	Base::rand_settr();
	speed = rand() % 50;
}

void usb::Print() {
	std::cout << std::endl;
	Base::Print();
	std::cout << "Product speed: " << this->speed << std::endl;
}

void usb::write(ofstream& out) {
	if (!out.is_open())
	{
		cout << "Error!";
		return;
	}

	Base::write(out);
	out.write((char*)&speed, sizeof(speed));
}
void usb::read(ifstream& in) {
	int sizes[3];
	if (!in.is_open())
	{
		cout << "Error!";
		return;
	}
	Base::read(in);
	in.read((char*)&speed, sizeof(speed));
}

