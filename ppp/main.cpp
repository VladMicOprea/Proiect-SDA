#include <iostream>
#include "Repo.h"
#include "Service.h"
#include "UI.h"

using namespace std;

int main()
{
	Repo repo;
	Service service(repo);
	service.addUtilizator("Pop", "Mihai", 17, "1");
	service.addUtilizator("Oprea", "Antonio", 21, "2");
	service.addUtilizator("Mic", "Alin", 33, "3");
	service.addUtilizator("Verdes", "Teodora", 19, "4");
	service.addPrietenie("1", "4");
	service.addPrietenie("2", "4");
	service.addPrietenie("1", "3");
	service.addMesaj("1", "3", "Ce faci?");
	service.addMesaj("1", "4", "Am plecat acasa.");
	service.addEveniment("Untold", "Cluj", "03/08/2022");
	service.addEveniment("Neversea", "Constanta", "03/07/2022");
	service.addEveniment("Electric Castle", "CLuj", "15/07/2022");
	UI ui(service);
	ui.menu();
	return 0;
}
