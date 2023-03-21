#pragma once
#ifndef SERVICE_H
#define SERVICE_H

#include "Repo.h"

class Service
{
private:
	Repo repo;
public:
	Service() {};
	Service(Repo& repo);
	~Service() = default;
	Dictionary<string, Utilizator>& getUtilizatori();
	Array <Eveniment>& getEvenimente();
	Array <Mesaj>& getMesaje();
	Array<Prietenie>& getPrietenie();
	void addUtilizator(string nume, string prenume, int varsta, string username);
	void addEveniment(string nume, string locatie, string data);
	void addPrietenie(string username1, string username2);
	void addMesaj(string username1, string username2, string mesaj);
	void updateUtilizator(string username, string numeNou, string prenumeNou, int varstaNoua, string usernameNou);
	void updateEveniment(string nume, string locatie, string data,
		string numeNou, string locatieNoua, string dataNoua);
	void updatePrietenie(string username1, string username2, string usernameNou1, string usernameNou2);
	void updateMesaj(string username1, string username2,string mesaj, string usernameNou1, string usernameNou2, string mesajNou);
	void removeUtilizator(string username);
	void removeEveniment(string nume, string locatie, string data);
	void removePrietenie(string username1, string username2);
	void removeMesaj(string username1, string username2, string mesaj);
	void stergePrietenieDacaExista(Utilizator u);
	void modificaPrietenieDacaExista(Utilizator& u, Utilizator& uNou);
	void stergeMesajDacaExista(Utilizator u);

};

#endif // !SERVICE_H

