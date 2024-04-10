#ifndef PASSAGER_H
#define PASSAGER_H

#include <iostream>
using namespace std;

class Passager
{
private:
    string nom;
    string prenom;
    string numPassport;
    string numTel;
    string adresse;
    int age;
    int idPassager;

public:
    Passager();
    Passager(string nom, string prenom, string numPassport, string numTel, string adresse, int age, int idPassager);

    void setNom(string nom);
    void setPrenom(string prenom);
    void setNumPassport(string numPassport);
    void setNumTel(string numTel);
    void setAdresse(string adresse);
    void setAge(int age);
    void setIdPassager(int idPassager);

    string getNom();
    string getPrenom();
    string getNumPassport();
    string getNumTel();
    string getAdresse();
    int getAge();
    int getIdPassager();

    void afficherPassager();
    void modifierPassager();
    Passager getPassager();
};

#endif // PASSAGER_H
