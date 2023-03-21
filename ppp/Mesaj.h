#pragma once
#ifndef MESAJ_H
#define MESAJ_H

#include<cstring>
#include <string>
#include <ostream>
#include "Utilizator.h"

class Mesaj
{
private:
	Utilizator prieten1;
	Utilizator prieten2;
	string mesaj;
public:
	Mesaj() = default;
	Mesaj(Utilizator& prieten1, Utilizator& prieten2, string mesaj);
	~Mesaj() {}
	Utilizator& getPrieten1();
	Utilizator& getPrieten2();
	string getMesaj();
	bool operator==(const Mesaj& m);
	Mesaj& operator=(const Mesaj& m);
	friend ostream& operator<<(ostream& os, Mesaj mesaj)
	{
		os << "Cel care trimite mesajul: " << endl << mesaj.prieten1;
		os << "Cel care primeste mesajul: " << endl << mesaj.prieten2;
		os << "Mesajul trimis: " << mesaj.mesaj << endl;
		return os;
	}
};

#endif // !MESAJ_H
