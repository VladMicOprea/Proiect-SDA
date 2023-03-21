#include "Prietenie.h"

Prietenie::Prietenie(Utilizator& prieten1, Utilizator& prieten2)
{
	this->prieten1 = prieten1;
	this->prieten2 = prieten2;
}
Utilizator& Prietenie::getPrimulPrieten() {
    return this->prieten1;
}

Utilizator& Prietenie::getAlDoileaPrieten() {
    return this->prieten2;
}

void Prietenie::setPrimulPrieten(Utilizator& prieten1) {
    this->prieten1 = prieten1;
}

void Prietenie::setAlDoileaPrieten(Utilizator& prieten2) {
    this->prieten2 = prieten2;
}

bool Prietenie::operator==(const Prietenie& p)
{
    return prieten1 == p.prieten1 && prieten2 == p.prieten2;
}

Prietenie& Prietenie::operator=(const Prietenie& p)
{
    if (this != &p)
    {
        this->prieten1 = p.prieten1;
        this->prieten2 = p.prieten2;
        return *this;
    }

}

ostream& operator<<(ostream& os, const Prietenie& p)
{
    os << "Prieten1: " << endl << p.prieten1 << endl
        << "Prieten2: " << endl << p.prieten2 << endl;
	return os;
}
