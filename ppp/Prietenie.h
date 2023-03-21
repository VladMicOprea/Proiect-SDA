#pragma once
#ifndef PRIETENIE_H
#define PRIETENIE_H
#include "Utilizator.h"
#include "Dictionar.h"
#include <iostream>
using namespace std;

class Prietenie
{
private:
	Utilizator prieten1;
	Utilizator prieten2;
public:
	
	Prietenie() = default;
	Prietenie(Utilizator& prieten1, Utilizator& prieten2);
	~Prietenie() = default;
	bool operator==(const Prietenie& p);
	Prietenie& operator=(const Prietenie& p);
	Utilizator& getPrimulPrieten();
	Utilizator& getAlDoileaPrieten();
	void setPrimulPrieten(Utilizator& prieten1);
	void setAlDoileaPrieten(Utilizator& prieten2);
	friend ostream& operator<<(ostream& os, const Prietenie& p);
	friend istream& operator>>(istream& is, const Prietenie& p);
};

#endif // !PRIETENIE_H
