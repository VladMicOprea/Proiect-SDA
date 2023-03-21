#include "Repo.h"
Repo::Repo()
{}

Repo::~Repo()
{}

Dictionary <string, Utilizator>& Repo::getUtilizatori()
{
	return this->utilizatori;
}

Array <Eveniment>& Repo::getEvenimente()
{
	return this->evenimente;
}

Array<Mesaj>& Repo::getMesaje()
{
	return this->mesaje;
}

Array<Prietenie>& Repo::getPrieteni()
{
	return this->prieteni;
}

void Repo::addUtilizator(string username, Utilizator& utilizator)
{
	utilizatori.add(username, utilizator);
}

void Repo::addEveniment(Eveniment& eveniment)
{
	evenimente.add(eveniment);
}

void Repo::addPrietenie(Prietenie& p)
{
	prieteni.add(p);
}

void Repo::addMesaj(Mesaj& mesaj)
{
	mesaje.add(mesaj);
}

void Repo::updateUtilizator(string username, Utilizator& utilizator, string usernameNou, Utilizator& utilizatorNou)
{
	utilizatori.update(username, utilizator, usernameNou, utilizatorNou);
}

void Repo::updateEveniment(Eveniment& eveniment, Eveniment& evenimentNou)
{
	evenimente.update(eveniment, evenimentNou);
}

void Repo::updatePrietenie(Prietenie& prietenie, Prietenie& prietenieNou)
{
	prieteni.update(prietenie, prietenieNou);
}
void Repo::updateMesaj(Mesaj& mesaj, Mesaj& mesajNou)
{
	mesaje.update(mesaj, mesajNou);
}
void Repo::removeUtilizator(string username, Utilizator& utilizator)
{
	utilizatori.deleting(username, utilizator);
}

void Repo::removeEveniment(Eveniment& eveniment)
{
	evenimente.remove(eveniment);
}

void Repo::removePrietenie(Prietenie& p)
{
	prieteni.remove(p);
}

void Repo::removeMesaj(Mesaj& mesaj)
{
	mesaje.remove(mesaj);
}

Utilizator Repo::cautaUtilizator(string username)
{
	return utilizatori.search(username);
}

bool Repo::existaUtilizator(string username)
{
	return utilizatori.exist(username);
}

bool Repo::existaPrietenie(Prietenie p) 
{
	int i = prieteni.search(p);
	if (i >= 0) return true;
	return false;
}
