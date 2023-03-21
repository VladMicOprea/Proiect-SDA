#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include<cstring>
#include <ostream>
#include <istream>
#include <iostream>

using namespace std;
class Utilizator
{
private:
    string nume;
    string prenume;
    int varsta;
public:
    Utilizator();
    Utilizator(string, string, int);
    Utilizator(const Utilizator&);
    ~Utilizator();
    string getNume();
    string getPrenume();
    int getVarsta();
    void setNume(string nume);
    void setPrenume(string prenume);
    void setVarsta(int varsta);
    int operator==(const Utilizator& u);
    bool operator!=(const Utilizator& u);
    Utilizator& operator=(const Utilizator& u);
    friend ostream& operator<<(ostream& os, const Utilizator& u);
    friend istream& operator>>(istream& is, const Utilizator& u);
 };

#endif //UTILIZATOR_H
