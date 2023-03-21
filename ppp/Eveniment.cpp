#include "Eveniment.h"

Eveniment::Eveniment()
{
	this->nume = "";
	this->locatie = "";
	this->data = "";
}

Eveniment::Eveniment(string nume, string locatie, string data)
{
	this->nume = nume;
	this->locatie = locatie;
	this->data = data;
}
Eveniment::Eveniment(const Eveniment& ev)
{
	this->nume = ev.nume;
	this->locatie = ev.locatie;
	this->data = ev.data;
}

string Eveniment::getNume()
{
	return this->nume;
}

string Eveniment::getLocatie()
{
	return this->locatie;
}

string Eveniment::getData()
{
	return this->data;
}

void Eveniment::setNume(string nume)
{
	this->nume = nume;
}

void Eveniment::setLocatie(string locatie)
{
	this->locatie = locatie;
}

void Eveniment::setData(string data)
{
	this->data = data;
}

bool Eveniment::operator==(const Eveniment& ev)
{
	return nume == ev.nume && locatie == ev.locatie && data == ev.data;
}

bool Eveniment::operator!=(const Eveniment& ev)
{
	return !(*this == ev);
}


Eveniment& Eveniment::operator=(const Eveniment& ev)
{
	if (this != &ev)
	{
		this->nume = ev.nume;
		this->locatie = ev.locatie;
		this->data = ev.data;
		return *this;
	}
}

ostream& operator<<(ostream& os, const Eveniment& ev)
{
	os << "nume: " << ev.nume << endl
		<< "locatie: " << ev.locatie <<endl
		<< "data: " << ev.data << endl;
	return os;
}

istream& operator>>(istream& is, Eveniment& ev)
{
	string nume;
	string data;
	string locatie;
	cout << "Nume: ";
	is >> nume;
	cout << endl << "Data: ";
	is >> data;
	cout << endl << "Locatie: ";
	is >> locatie;
	ev.setNume(nume);
	ev.setData(data);
	ev.setLocatie(locatie);
	return is;
}
