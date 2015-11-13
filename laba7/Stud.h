#pragma once
#include<iostream>
#include<string>
class Student {
private:
	int id;
	std::string name_f;
	std::string name;
	std::string ot;
	struct dayi {
		int day;
		int month;
		int yar;
	} d;
	std::string adres;
	int telef;
	std::string fak;
	int kurs;
	int gruppa;
public:
	Student();
	Student(int, std::string, std::string, std::string, int, int, int, std::string, int, std::string, int, int);
	Student(const Student&);
	~Student(void);
	void setId(int);
	int getId();
	void setName_f(std::string);
	std::string getName_f();
	void setName(std::string);
	std::string getName();
	void setOt(std::string);
	std::string getOt();
	void setDay(int, int, int);
	int getDay();
	int getMonth();
	int getYar();
	void setAdres(std::string);
	void setTelef(int);
	std::string getAdres();
	void setFak(std::string);
	std::string getFak();
	int getTelef();
	void setKurs(int);
	int getKurs();
	void setGruppa(int);
	int getGruppa();
	int stAge(int, int);
	void print();
};
