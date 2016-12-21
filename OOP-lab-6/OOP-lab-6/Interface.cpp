#include "stdafx.h"
#include "Interface.h"
#include "My_template.h"
#include "Cexception.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Виведення меню
bool outputMenu() {

	system("cls");
	printf("Menu:\n1. Start program\n2. Exit\n\nMake your choice ");

	try {
		char str[Isize];
		gets_s(str, Isize);

		if (strlen(str) != 1) throw Cexception("Wrong input format!!!");

		switch (str[0]) {
		case '1': {
			My_template<int> a;
			a.i_get();
			if (a.find())
			{
				cout << "found";
			}
			else
				cout << "not found";
			printf("\n");
			system("pause");
			break;
		}
		case '2': return false;
		default: throw Cexception("Unexpected input!");
		}

		return true;
	}
	catch (Cexception& excection) {
		excection.show();
		system("pause");
		return true;
	}
}