#pragma once
#ifndef EVENT_H
#define EVENT_H


#include <string>
#include <vector>
#include <iostream>
#include "Utilizator.h"

class Eveniment
{
private:
	string nume;
	string locatie;
	string data;
public:
	Eveniment();
	Eveniment(string nume, string locatie, string data);
	Eveniment(const Eveniment& ev);
	string getNume();
	string getLocatie();
	string getData();
	void setNume(string nume);
	void setLocatie(string locatie);
	void setData(string data);
	bool operator==(const Eveniment& ev);
	bool operator!=(const Eveniment& ev);
	Eveniment& operator=(const Eveniment& ev);
	friend ostream& operator<<(ostream& os, const Eveniment& ev);
	friend istream& operator>>(istream& is, const Eveniment& ev);

};

#endif // !EVENT_H
