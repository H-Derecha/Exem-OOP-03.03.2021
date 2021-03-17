#include "Base.h"
#include <iostream>
#include<fstream>
using namespace std;

Base::Base() {}

int Base::ret_class() { return 0; }

void Base::settr() {
	cout << "Comp. name:";
	cin >> this->com_name;
	cout << "Produkt model name:";
	cin >> this->produkt_model_name;
	cout << "Produkt name:";
	cin >> this->produkt_name;
	cout << "Produkt count:";
	cin >> this->count;
	cout << "Produkt size:";
	cin >> this->size;
}


void Base::settr(char* com_name, char* produkt_model_name, char* produkt_name, int count, int size/*, int speed*/) {
	for (int i = 0; i < 100; i++)
	{
		this->com_name[i] = com_name[i];
		this->produkt_model_name[i] = produkt_model_name[i];
		this->produkt_name[i] = produkt_name[i];
	}
	count = this->count;
	size = this->size;
}


char* Base::get_com_name() { return this->com_name; }

char* Base::get_produkt_model_name() { return this->produkt_model_name; }

char* Base::get_produkt_name() { return this->produkt_name; }

int Base::get_count() { return this->count; }

int Base::get_size() { return this->size; }


void Base::rand_settr() {
	for (int i = 0; i < 20; i++)
	{
		com_name[i] = rand() % 27 + 65;
	}
	for (int i = 0; i < 20; i++)
	{
		produkt_model_name[i] = rand() % 27 + 65;
	}
	for (int i = 0; i < 20; i++)
	{
		produkt_name[i] = rand() % 27 + 65;
	}
	count = rand() % 50;
	size = rand() % 50;
}


void Base::Print() {
	std::cout << "Product com. name: " << this->com_name << std::endl;
	std::cout << "Product model name: " << this->produkt_model_name << std::endl;
	std::cout << "Product produkt name: " << this->produkt_name << std::endl;
	std::cout << "Product count: " << this->count << std::endl;
	std::cout << "Product size: " << this->size << std::endl;
}

void Base::write(ofstream& out) {
	if (!out.is_open())
	{
		cout << "Error!";
		return;
	}

	int size = _msize(com_name) + 1;
	out.write((char*)&size, sizeof(size));
	out.write((char*)com_name, size);

	size = _msize(produkt_model_name) + 1;
	out.write((char*)&size, sizeof(size));
	out.write((char*)produkt_model_name, size);

	size = _msize(produkt_name) + 1;
	out.write((char*)&size, sizeof(size));
	out.write((char*)produkt_name, size);

	out.write((char*)&count, sizeof(count));
	out.write((char*)&this->size, sizeof(this->size));
}

void Base::read(ifstream& in) {
	int sizes[3];
	if (!in.is_open())
	{
		cout << "Error!";
		return;
	}
	in.read((char*)&sizes[0], sizeof(sizes[0]));
	in.read(com_name, sizes[0]);

	in.read((char*)&sizes[1], sizeof(sizes[1]));
	in.read(produkt_model_name, sizes[1]);

	in.read((char*)&sizes[2], sizeof(sizes[2]));
	in.read(produkt_name, sizes[2]);

	in.read((char*)&count, sizeof(count));
	in.read((char*)&size, sizeof(size));
}