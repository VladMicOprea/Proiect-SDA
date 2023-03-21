#include "Utilizator.h"

Utilizator::Utilizator()
{
    this->varsta = 0;
    this->nume = "";
    this->prenume = "";
}

Utilizator::Utilizator(string nume, string prenume, int varsta)
{
    this->nume = nume;
    this->prenume = prenume;
    this->varsta = varsta;
}
Utilizator::Utilizator(const Utilizator& u)
{
    this->nume = u.nume;
    this->prenume = u.prenume;
    this->varsta = u.varsta;
}

int Utilizator::getVarsta()
{
    return this->varsta;
}

string Utilizator::getNume()
{
    return this->nume;
}

string Utilizator::getPrenume()
{
    return this->prenume;
}


void Utilizator::setNume(string nume)
{
    this->nume = nume;
}
void Utilizator::setPrenume(string prenume)
{
    this->prenume = prenume;
}

void Utilizator::setVarsta(int varsta)
{
    this->varsta = varsta;
}


Utilizator::~Utilizator()
{
}
int Utilizator::operator==(const Utilizator& u)
{
    return(this->nume == u.nume) &&
        (this->prenume == u.prenume) &&
        (this->varsta == u.varsta);
}

bool Utilizator::operator!=(const Utilizator& u)
{
    return !(this == &u);
}

Utilizator& Utilizator::operator=(const Utilizator& u)
{
    if (this != &u)
    {
        this->nume = u.nume;
        this->prenume = u.prenume;
        this->varsta = u.varsta;
        return *this;
    }
}

ostream& operator<<(ostream& os, const Utilizator& u)
{
    os << "nume: " << u.nume << endl 
        << "prenume: " << u.prenume << endl 
        << "varsta: " << u.varsta << endl;
    return os;
}

istream& operator>>(istream& is, Utilizator& u)
{
    string nume;
    string prenume;
    int varsta;
    string username;
    cout << "Nume: ";
    is >> nume;
    cout << endl << "Prenume: ";
    is >> prenume;
    cout << endl << "Varsta: ";
    is >> varsta;
    u.setNume(nume);
    u.setPrenume(prenume);
    u.setVarsta(varsta);   
    return is;
}

/*
ostream& loadIntoCSV(std::ostream& os, const Utilizator& u)
{
    os << u.nume << ",";
    os << u.prenume << ",";
    os << u.varsta << ",";
    os << u.username << endl;
    return os;

}

istream& loadFromCSV(istream& is, Utilizator& u)
{
    char* nume;
    char* prenume;
    int varsta;
    char* username;
    getline(is, nume, ',');
    getline(is, prenume, ',');
    getline(is, varsta, ',');
    getline(is, username, ',');
    u.nume = nume;
    u.prenume = prenume;
    u.varsta = varsta;
    u.username = username;
    return is;

}
*/