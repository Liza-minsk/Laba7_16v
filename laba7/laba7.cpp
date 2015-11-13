// laba6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include"Matriz.h"
#include"Stud.h"
#include<iostream>
using namespace std;


int main()
{
	Matriza <Student> s(2,1);
	s.create(Student(1, "Ivanow", "Ivan", "Ivanovich", 25, 7, 1992, "Minsk, Majakovskogo 160-24", +375333654734, "FIT", 4, 2));
	s.create(Student(2, "Sidorov", "Sergei", "Mihailovich", 1, 12, 1998, "Brest, Lenina 5-34", +375442348765, "HTIT", 2, 8));
	s.show();
	cout << "\n\n";
	return 0;
}


