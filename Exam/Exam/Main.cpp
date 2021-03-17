#include <iostream>
#include<fstream>
#include <string.h>
#include "Collection.h"
using namespace std;

int main() {
	Collection fir;		//Создание массива
	//fir.Print();			//Вывод в консоль	

	//fir.rand__str();		//Заполняет случайными значениями массив
	//fir.Print();			//Вывод в консоль

	//cout << "nchan\n Порядковый номер :";			//--
	//int a;										//-----		Ввод порядкого номера для удаления / внесения правки
	//cin >> a;										//--

	//fir.chan(a);						// Изменить уже существующий
	//fir.Print();						//Вывод в консоль

	//fir.dell(a);						//Удаление со смещением массива
	//fir.Print();						//Вывод в консоль

	//fir.add();						//Добавление в конец массива
	//fir.Print();						//Вывод в консоль

	//fir.search();						//Поиск по значениям в массиве

	//fir.write();						//Запись в файл

	//fir.read();						//Выгрузка из файла в массив
	//fir.Print();						//Вывод в консоль
	setlocale(LC_ALL, "Russian");
	while (true)
	{
		cout << "----------------------------------Storage Collection----------------------------------" << endl;
		cout << "1) Заполнить элемент случайными значениями (Для удобства дебага)" << endl;
		cout << "2) Вывести содержимое массива" << endl;
		cout << "3) Внести изменение в элемент" << endl;
		cout << "4) Удаление элемента массива" << endl;
		cout << "5) Поиск в массиве по значению" << endl;
		cout << "6) Добавить элемент" << endl;
		cout << "7) Запись в файл" << endl;
		cout << "8) Выгрузка из файла" << endl;
		cout << "9) Выход" << endl;
		int choi;
		int a;
		cout << "Выбор :";
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
			cout << "Номер элемента	:" << endl;
			cin >> a;
			fir.chan(a);
			break;
		case 4:
			cout << "Номер элемента	:" << endl;
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