#pragma once
#ifndef UI_H
#define UI_H

#include <cstring>
#include <vector>
#include <iostream>
#include "Service.h"

class UI
{
private:
	Service service;
public:
	UI() {};
	UI(Service& service);
	~UI() = default;
	void menu();
	void adaugareUtilizator();
	void adaugareEveniment();
	void adaugarePrietenie();
	void adaugareMesaj();
	void modificareUtilizator();
	void modificareEveniment();
	void modificarePrietenie();
	void modificareMesaj();
	void stergereUtilizator();
	void stergereEveniment();
	void stergerePrietenie();
	void stergereMesaj();
	void afisareUtilizatori();
	void afisareEvenimente();
	void afisareMesaj();
	void afisarePrietenie();

};

#endif //UI_H
