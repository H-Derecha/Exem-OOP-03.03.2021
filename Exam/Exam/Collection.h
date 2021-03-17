#include "dvd.h"
#include "phd.h"
#include "usb.h"
#pragma once
class Collection
{
private:
	int ch_long = 10;
	Base** collection = new Base * [ch_long];
public:
	Collection();
	~Collection();
	void Print();
	void chan(int nomb);
	void dell(int nomb);
	void add();
	void rand__str();
	void search();
	void write();
	void read();
};

