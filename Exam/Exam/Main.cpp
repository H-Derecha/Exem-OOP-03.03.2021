#include <iostream>
#include<fstream>
#include <string.h>
#include "Collection.h"
using namespace std;

int main() {
	Collection fir;		//�������� �������
	//fir.Print();			//����� � �������	

	//fir.rand__str();		//��������� ���������� ���������� ������
	//fir.Print();			//����� � �������

	//cout << "nchan\n ���������� ����� :";			//--
	//int a;										//-----		���� ��������� ������ ��� �������� / �������� ������
	//cin >> a;										//--

	//fir.chan(a);						// �������� ��� ������������
	//fir.Print();						//����� � �������

	//fir.dell(a);						//�������� �� ��������� �������
	//fir.Print();						//����� � �������

	//fir.add();						//���������� � ����� �������
	//fir.Print();						//����� � �������

	//fir.search();						//����� �� ��������� � �������

	//fir.write();						//������ � ����

	//fir.read();						//�������� �� ����� � ������
	//fir.Print();						//����� � �������
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		cout << "----------------------------------Storage Collection----------------------------------" << endl;
		cout << "1) ��������� ������� ���������� ���������� (��� �������� ������)" << endl;
		cout << "2) ������� ���������� �������" << endl;
		cout << "3) ������ ��������� � �������" << endl;
		cout << "4) �������� �������� �������" << endl;
		cout << "5) ����� � ������� �� ��������" << endl;
		cout << "6) �������� �������" << endl;
		cout << "7) ������ � ����" << endl;
		cout << "8) �������� �� �����" << endl;
		cout << "9) �����" << endl;
		int choi;
		int a;
		cout << "����� :";
		cin >> choi;
		switch (choi)
		{
		case 1:
			fir.rand__str();
			break;
		case 2:
			fir.Print();
			break;
		case 3:
			cout << "����� ��������	:" << endl;
			cin >> a;
			fir.chan(a);
			break;
		case 4:
			cout << "����� ��������	:" << endl;
			cin >> a;
			fir.dell(a);
			break;
		case 5:
			fir.search();
			break;
		case 6:
			fir.add();
			break;
		case 7:
			fir.write();
			break;
		case 8:
			fir.read();
			break;
		case 9:
			return 0;
		default:
			break;
		}
	}

}