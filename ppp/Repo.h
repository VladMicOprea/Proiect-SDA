#pragma once
#ifndef REPO_H
#define REPO_H

#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
#include "Array.h"
#include "Dictionar.h"
#include "Eveniment.h"
#include "Mesaj.h"
#include "Utilizator.h"
#include "Prietenie.h"


class Repo {

private:
	Dictionary <string, Utilizator> utilizatori;
	Array <Eveniment> evenimente;
	Array <Mesaj> mesaje;
	Array <Prietenie> prieteni;
public:

	Repo();
	~Repo();
	Dictionary <string, Utilizator>& getUtilizatori();
	Array <Eveniment>& getEvenimente();
	Array <Mesaj>& getMesaje();
	Array <Prietenie>& getPrieteni();
	void addUtilizator(string username, Utilizator& utilizator);
	void addEveniment(Eveniment& eveniment);
	void addPrietenie(Prietenie& p);
	void addMesaj(Mesaj& mesaj);
	void updateUtilizator(string username, Utilizator& utilizator, string usernameNou, Utilizator& utilizatorNou);
	void updateEveniment(Eveniment& eveniment, Eveniment& evenimentNou);
	void updatePrietenie(Prietenie& prietenie, Prietenie& prietenieNou);
	void updateMesaj(Mesaj& mesaj, Mesaj& mesajNou);
	void removeUtilizator(string username, Utilizator& utilizator);
	void removeEveniment(Eveniment& eveniment);
	void removePrietenie(Prietenie& p);
	void removeMesaj(Mesaj& mesaj);
	Utilizator cautaUtilizator(string username);
	bool existaUtilizator(string username);
	bool existaPrietenie(Prietenie p);

};

#endif // !REPO_H
