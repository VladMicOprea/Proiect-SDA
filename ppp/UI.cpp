#include <iostream>
#include "UI.h"
using namespace std;

UI::UI(Service& service)
{
	this->service = service;
}

void UI::menu()
{
	int opt;
	while (true)
	{
		cout << "1. Adaugare utilizator" << endl;
		cout << "2. Adaugare eveniment" << endl;
		cout << "3. Adaugare prietenie" << endl;
		cout << "4. Adaugare mesaj" << endl;
		cout << "5. Stergere utilizator" << endl;
		cout << "6. Stergre eveniment" << endl;
		cout << "7. Stergere preietenie" << endl;
		cout << "8. Stergere mesaj" << endl;
		cout << "9. Modificare utilizator" << endl;
		cout << "10. Modificare eveniment" << endl;
		cout << "11. Modificare prietenie" << endl;
		cout << "12. Modificare mesaj" << endl;
		cout << "13. Afisare utilizatori" << endl;
		cout << "14. Afisare evenimente" << endl;
		cout << "15. Afisare mesaje" << endl;
		cout << "16. Afisare prietenie" << endl;
		cout << "0. Iesire" << endl;
		cout << "Dati optiunea dorita:" << endl;

		cin >> opt;
		if (opt == 1)
		{
			adaugareUtilizator();
		}
		else if (opt == 2)
		{
			adaugareEveniment();
		}
		else if (opt == 3)
		{
			adaugarePrietenie();
		}
		else if (opt == 4)
		{
			adaugareMesaj();
		}
		else if (opt == 5)
		{
			stergereUtilizator();
		}
		else if (opt == 6)
		{
			stergereEveniment();
		}
		else if (opt == 7)
		{
			stergerePrietenie();
		}
		else if (opt == 8)
		{
			stergereMesaj();
		}
		else if (opt == 9)
		{
			modificareUtilizator();
		}
		else if (opt == 10)
		{
			modificareEveniment();
		}
		else if (opt == 11)
		{
			modificarePrietenie();
		}
		else if (opt == 12) 
		{
			modificareMesaj();
		}
		else if (opt == 13)
		{
			afisareUtilizatori();
		}
		else if (opt == 14)
		{
			afisareEvenimente();
		}
		else if (opt == 15)
		{
			afisareMesaj();
		}
		else if (opt == 16)
		{
			afisarePrietenie();
		}
		else if (opt == 0)
		{
			break;
		}
	}
}

void UI::adaugareUtilizator()
{
	cout << "Dati numele utilizatorului" << endl;
	string nume;
	cin >> nume;
	cout << "Dati prenumele utilizatorului" << endl;
	string prenume;
	cin >> prenume;
	cout << "Dati varsta utilizatorului" << endl;
	int varsta;
	cin >> varsta;
	cout << "Dati username-ul utilizatorului" << endl;
	string username;
	cin >> username;
	service.addUtilizator(nume, prenume, varsta, username);
}

void UI::adaugareEveniment()
{
	cout << "Dati numele evenimentului" << endl;
	string nume;
	cin >> nume;
	cout << "Dati locatie evenimentului" << endl;
	string locatie;
	cin >> locatie;
	cout << "Dati data evenimentului" << endl;
	string data;
	cin >> data;
	service.addEveniment(nume, locatie, data);
}

void UI::adaugarePrietenie()
{
	cout << "Dati usernameul primului prieten" << endl;
	string username1;
	cin >> username1;
	
	cout << "Dati usernamul celui de al doilea prieten" << endl;
	string username2;
	cin >> username2;
	service.addPrietenie(username1, username2);
}

void UI::adaugareMesaj()
{
	cout << "Dati username-ul primului utilizator al mesajului" << endl;
	string username1;
	cin >> username1;
	cout << "Dati usernameul celui de al doilea utilizator al mesajului" << endl;
	string username2;
	cin >> username2;
	cout << "Dati mesajul " << endl;
	string mesaj;
	cin >> mesaj;
	service.addMesaj(username1, username2, mesaj);
}

void UI::modificareUtilizator()
{
	cout << "Dati username-ul utilizatorului" << endl;
	string username;
	cin >> username;
	cout << "Dati numele noului utilizator" << endl;
	string numeNou;
	cin >> numeNou;
	cout << "Dati prenumele noului utilizator" << endl;
	string prenumeNou;
	cin >> prenumeNou;
	cout << "Dati varsta noului utilizator" << endl;
	int varstaNoua;
	cin >> varstaNoua;
	cout << "Dati username-ul noului utilizator" << endl;
	string usernameNou;
	cin >> usernameNou;
	service.updateUtilizator(username,
		numeNou, prenumeNou, varstaNoua, usernameNou);
}

void UI::modificareEveniment()
{
	cout << "Dati numele evenimentului" << endl;
	string nume;
	cin >> nume;
	cout << "Dati locatie evenimentului" << endl;
	string locatie;
	cin >> locatie;
	cout << "Dati data evenimentului" << endl;
	string data;
	cin >> data;
	cout << "Dati numele nou al evenimentului" << endl;
	string numeNou;
	cin >> numeNou;
	cout << "Dati locatia noua a evenimentului" << endl;
	string locatieNoua;
	cin >> locatieNoua;
	cout << "Dati data noua a evenimentului" << endl;
	string dataNoua;
	cin >> dataNoua;
	service.updateEveniment(nume, locatie, data,
		numeNou, locatieNoua, dataNoua);
}

void UI::modificarePrietenie()
{
	cout << "Dati usernameul primululi prieten" << endl;
	string username1;
	cin >> username1;
	cout << "Dati usernameul al doilea prieten" << endl;
	string username2;
	cin >> username2;
	cout << "Dati usernameul noului prieten1" << endl;
	string usernameNou1;
	cin >> usernameNou1;
	cout << "Dati usernameul noului prieten2" << endl;
	string usernameNou2;
	cin >> usernameNou2;
	service.updatePrietenie(username1, username2, usernameNou1, usernameNou2);
}

void UI::modificareMesaj()
{
	cout << "Dati usernameul primului utilizator al mesajului" << endl;
	string username1;
	cin >> username1;
	cout << "Dati usernameul celui de al doilea utilizator al mesajului" << endl;
	string username2;
	cin >> username2;
	cout << "Dati mesajul" << endl;
	string mesaj;
	cin >> mesaj;
	cout << "Dati usernameul primului utilizatorNou al mesajului" << endl;
	string usernameNou1;
	cin >> usernameNou1;
	cout << "Dati usernameul celui de al doilea utilizatorNou al mesajului" << endl;
	string usernameNou2;
	cin >> usernameNou2;
	cout << "Dati noul mesajul" << endl;
	string mesajNou;
	cin >> mesajNou;
	service.updateMesaj(username1, username2, mesaj, usernameNou1, usernameNou2, mesajNou);
}
void UI::stergereUtilizator()
{
	cout << "Dati username-ul utilizatorului" << endl;
	string username;
	cin >> username;
	service.removeUtilizator(username);
}

void UI::stergereEveniment()
{
	cout << "Dati numele evenimentului" << endl;
	string nume;
	cin >> nume;
	cout << "Dati locatie evenimentului" << endl;
	string locatie;
	cin >> locatie;
	cout << "Dati data evenimentului" << endl;
	string data;
	cin >> data;
	service.removeEveniment(nume, locatie, data);
}

void UI::stergerePrietenie()
{
	cout << "Dati usernameul primului utilizator al preiteniei" << endl;
	string username1;
	cin >> username1;
	cout << "Dati usernameul celui de al doilea utilizator al preiteniei" << endl;
	string username2;
	cin >> username2;
	service.removePrietenie(username1, username2);
}

void UI::stergereMesaj()
{
	cout << "Dati usernameul primului utilizator al mesajului" << endl;
	string username1;
	cin >> username1;
	cout << "Dati usernameul celui de al doilea utilizator al mesajului" << endl;
	string username2;
	cin >> username2;
	cout << "Dati mesajul" << endl;
	string mesaj;
	cin >> mesaj;
	service.removeMesaj(username1, username2, mesaj);
}

void UI::afisareUtilizatori()
{
	cout << "Utilizatorii sunt:" << endl;
	service.getUtilizatori().getAll().afisare();
}

void UI::afisareEvenimente()
{
	cout << "Evenimentele sunt:" << endl;
	service.getEvenimente().afisare();
}

void UI::afisareMesaj()
{
	cout << "Mesajele sunt:" << endl;
	service.getMesaje().afisare();
}
void UI::afisarePrietenie()
{
	cout << "Prieteniile sunt:" << endl;
	service.getPrietenie().afisare();
}

