#pragma once
#include <iostream>
#include<fstream>
using namespace std;
class Base {
protected:
	char* com_name = new char[100]{};	// ��� ��������������
	char* produkt_model_name = new char[100]{}; // ��� �������� ���������
	char* produkt_name = new char[100]{};	//��� �������� (�������)
	int count; // ��� �� ��������� 
	int size; //������ ��������
public:
	Base();
	virtual int ret_class();
	virtual void settr();
	virtual void settr(char* com_name, char* produkt_model_name, char* produkt_name, int count, int size/*, int speed*/);
	virtual char* get_com_name();
	virtual char* get_produkt_model_name();
	virtual char* get_produkt_name();
	virtual int get_count();
	virtual int get_size();
	virtual void rand_settr();
	virtual void Print();
	virtual void write(ofstream& out);
	virtual void read(ifstream& in);
};

