#pragma once
#include<iostream>
#include<fstream>
#include "Base.h"
class usb :
	public Base
{
private:
	int speed;
public:
	usb();
	~usb();
	int ret_class();
	void settr();
	void settr(char* com_name, char* produkt_model_name, char* produkt_name, int count, int size, int speed);
	char* get_com_name();
	char* get_produkt_model_name();
	char* get_produkt_name();
	int get_count();;
	int get_size();
	int get_speed();
	void rand_settr();
	void Print();
	void write(ofstream& out);
	void read(ifstream& in);
};
