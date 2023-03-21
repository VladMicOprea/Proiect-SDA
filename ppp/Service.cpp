#include "Service.h"

Service::Service(Repo& repo)
{
	this->repo = repo;
}

Dictionary<string, Utilizator>& Service::getUtilizatori()
{
	return repo.getUtilizatori();
}

Array<Eveniment>& Service::getEvenimente()
{
	return repo.getEvenimente();
}

Array<Mesaj>& Service::getMesaje()
{
	return repo.getMesaje();
}

Array<Prietenie>& Service::getPrietenie()
{
	return repo.getPrieteni();
}

void Service::addUtilizator(string nume, string prenume, int varsta, string username)
{
	if (!repo.existaUtilizator(username)) 
	{
		Utilizator u(nume, prenume, varsta);
		repo.addUtilizator(username, u);
	}
	else
	{
		cout << "Utilizatorul exista deja!" << endl;
	}
	
}

void Service::addEveniment(string nume, string locatie, string data)
{

	Eveniment ev(nume, locatie, data);
	repo.addEveniment(ev);
}

void Service::addPrietenie(string username1, string username2)
{
	if (repo.existaUtilizator(username1) && repo.existaUtilizator(username2))
	{
		Utilizator u1 = repo.cautaUtilizator(username1);
		Utilizator u2 = repo.cautaUtilizator(username2);
		Prietenie p(u1, u2);
		repo.addPrietenie(p);
	}
	else
		cout << "Unul dintre utilizatori nu exista! " << endl;
	
}


void Service::addMesaj(string username1, string username2, string mesaj)
{
	if (repo.existaUtilizator(username1) && repo.existaUtilizator(username2))
	{
		Utilizator prieten1 = repo.cautaUtilizator(username1);
		Utilizator prieten2 = repo.cautaUtilizator(username2);
		Prietenie p(prieten1, prieten2);
		if (repo.existaPrietenie(p))
		{
			Mesaj m(prieten1, prieten2, mesaj);
			repo.addMesaj(m);
		}
		else
			cout << "Nu exista prietenie intre cei doi utilizatori" << endl;
		
	}
	else
		cout << "Unul dintre utilizatori nu exista! " << endl;
	
}

void Service::updateUtilizator(string username, string numeNou, string prenumeNou, int varstaNoua, string usernameNou)
{
	if (repo.existaUtilizator(username))
	{
		Utilizator u = repo.cautaUtilizator(username);
		Utilizator uNou(numeNou, prenumeNou, varstaNoua);
		modificaPrietenieDacaExista(u, uNou);
		repo.updateUtilizator(username, u, usernameNou, uNou);
	}
	else
		cout << "Utilizatorul nu exista!" << endl;
	
}

void Service::updateEveniment(string nume, string locatie, string data, string numeNou, string locatieNoua, string dataNoua)
{
	Eveniment ev(nume, locatie, data);
	Eveniment evNou(numeNou, locatieNoua, dataNoua);
	repo.updateEveniment(ev, evNou);
}
void Service::updatePrietenie(string username1, string username2, string usernameNou1, string usernameNou2) 
{
	if (repo.existaUtilizator(username1) && repo.existaUtilizator(username2) && repo.existaUtilizator(usernameNou1) && repo.existaUtilizator(usernameNou2))
	{
		Utilizator u1 = repo.cautaUtilizator(username1);
		Utilizator u2 = repo.cautaUtilizator(username2);
		Prietenie p(u1, u2);
		Utilizator uNou1 = repo.cautaUtilizator(usernameNou1);
		Utilizator uNou2 = repo.cautaUtilizator(usernameNou2);
		Prietenie pNou(uNou1, uNou2);

		repo.updatePrietenie(p, pNou);
	}
	else
		cout << "Unul dintre utilizatori nu exista!" << endl;
	
}

void Service::updateMesaj(string username1, string username2,string mesaj, string usernameNou1, string usernameNou2, string mesajNou)
{
	if (repo.existaUtilizator(username1) && repo.existaUtilizator(username2) && repo.existaUtilizator(usernameNou1) && repo.existaUtilizator(usernameNou2))
	{
		Utilizator prieten1 = repo.cautaUtilizator(username1);
		Utilizator prieten2 = repo.cautaUtilizator(username2);
		Mesaj m(prieten1, prieten2, mesaj);
		Utilizator prietenNou1 = repo.cautaUtilizator(usernameNou1);
		Utilizator prietenNou2 = repo.cautaUtilizator(usernameNou2);
		Prietenie p(prietenNou1, prietenNou2);
		if (repo.existaPrietenie(p))
		{
			Mesaj mNou(prietenNou1, prietenNou2, mesajNou);
			repo.updateMesaj(m, mNou);
		}
		else
			cout << "Nu exista prietenie intre cei doi utilizatori" << endl;
		
	}
	else
		cout << "Unul dintre utilizatori nu exista!" << endl;


}
void Service::removeUtilizator(string username)
{
	if (repo.existaUtilizator(username))
	{
		Utilizator u = repo.cautaUtilizator(username);
		repo.removeUtilizator(username, u);
		stergePrietenieDacaExista(u);
		stergeMesajDacaExista(u);
	}
	else
		cout << "Utilizatorul nu exista!" << endl;
}

void Service::removeEveniment(string nume, string locatie, string data)
{
	Eveniment ev(nume, locatie, data);
	repo.removeEveniment(ev);
}


void Service::removePrietenie(string username1, string username2)
{
	if (repo.existaUtilizator(username1) && repo.existaUtilizator(username2))
	{
		Utilizator u1 = repo.cautaUtilizator(username1);
		Utilizator u2 = repo.cautaUtilizator(username2);
		Prietenie p(u1, u2);
		repo.removePrietenie(p);
	}
	else
		cout << "Prietenia nu exista!" << endl;
	
}

void Service::removeMesaj(string username1, string username2, string mesaj)
{
	if (repo.existaUtilizator(username1) && repo.existaUtilizator(username2))
	{
		Utilizator prieten1 = repo.cautaUtilizator(username1);
		Utilizator prieten2 = repo.cautaUtilizator(username2);
		Mesaj m(prieten1, prieten2, mesaj);
		repo.removeMesaj(m);
	}
	else
		cout << "Unul dintre prieteni nu exista!" << endl;
	
}

void Service::stergePrietenieDacaExista(Utilizator u) 
{
	Array<Prietenie> prieteni = getPrietenie();
	bool exista = false;
	for (int i = 0; i < prieteni.size(); i++) 
	{
		Prietenie p = prieteni.get_at(i);
		if (p.getPrimulPrieten() == u || p.getAlDoileaPrieten() == u) 
		{
			repo.removePrietenie(p);
		}
	}
}

void Service::modificaPrietenieDacaExista(Utilizator& u, Utilizator& uNou) 
{
	Array<Prietenie> prieteni = getPrietenie();
	bool exista = false;
	for (int i = 0; i < prieteni.size(); i++) 
	{
		Prietenie p = prieteni.get_at(i);
		if (p.getPrimulPrieten() == u) 
		{
			Prietenie pNou(uNou, p.getAlDoileaPrieten());
			repo.updatePrietenie(p, pNou);
		}
		else
		if (p.getAlDoileaPrieten() == u) 
		{
			Prietenie pNou(p.getPrimulPrieten(), uNou);
			repo.updatePrietenie(p, pNou);
		}
	}
}

void Service::stergeMesajDacaExista(Utilizator u) 
{
	Array<Mesaj> mesaje = getMesaje();
	bool exista = false;
	for (int i = 0; i < mesaje.size(); i++) {
		Mesaj m = mesaje.get_at(i);
		if (m.getPrieten1() == u || m.getPrieten2() == u) 
		{
			repo.removeMesaj(m);
		}
	}
}
