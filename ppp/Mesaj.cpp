#include "Mesaj.h"
#include <cstring>

Mesaj::Mesaj(Utilizator& prieten1, Utilizator& prieten2, string mesaj)
{
    this->prieten1 = prieten1;
    this->prieten2 = prieten2;
    this->mesaj = mesaj;
}


Utilizator& Mesaj::getPrieten1()
{
    return this->prieten1;
}

Utilizator& Mesaj::getPrieten2()
{
    return this->prieten2;
}

string Mesaj::getMesaj()
{
    return this->mesaj;
}

Mesaj& Mesaj::operator=(const Mesaj& m)
{
    if (this != &m)
    {
        this->prieten1 = m.prieten1;
        this->prieten2 = m.prieten2;
        this->mesaj = m.mesaj;
        return *this;
    }
}
bool Mesaj::operator==(const Mesaj& m)
{
    return prieten1 == m.prieten1 && prieten2 == m.prieten2 && mesaj == m.mesaj;
}