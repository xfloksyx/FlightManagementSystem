#include "Passager.h"

Passager::Passager() {
    // Default constructor
}

Passager::Passager(string nom, string prenom, string numPassport, string numTel, string adresse, int age, int idPassager) {
    this->nom = nom;
    this->prenom = prenom;
    this->numPassport = numPassport;
    this->numTel = numTel;
    this->adresse = adresse;
    this->age = age;
    this->idPassager = idPassager;
}

void Passager::setNom(string nom) {
    this->nom = nom;
}

void Passager::setPrenom(string prenom) {
    this->prenom = prenom;
}

void Passager::setNumPassport(string numPassport) {
    this->numPassport = numPassport;
}

void Passager::setNumTel(string numTel) {
    this->numTel = numTel;
}

void Passager::setAdresse(string adresse) {
    this->adresse = adresse;
}

void Passager::setAge(int age) {
    this->age = age;
}

void Passager::setIdPassager(int idPassager) {
    this->idPassager = idPassager;
}

string Passager::getNom() {
    return this->nom;
}

string Passager::getPrenom() {
    return this->prenom;
}

string Passager::getNumPassport() {
    return this->numPassport;
}

string Passager::getNumTel() {
    return this->numTel;
}

string Passager::getAdresse() {
    return this->adresse;
}

int Passager::getAge() {
    return this->age;
}

int Passager::getIdPassager() {
    return this->idPassager;
}

void Passager::afficherPassager() {
    cout << "---------------{ Informations du passager  }----------------- " << endl;
    cout << "Nom: " << this->nom << endl;
    cout << "Prenom: " << this->prenom << endl;
    cout << "Numero de passport: " << this->numPassport << endl;
    cout << "Numero de telephone: " << this->numTel << endl;
    cout << "Adresse: " << this->adresse << endl;
    cout << "Age: " << this->age << endl;
    cout << "ID: " << this->idPassager << endl;
    cout << "-------------------------------------------------------------- " << endl;
}

void Passager::modifierPassager() {
    int choix;
    cout << "Que voulez-vous modifier ?" << endl;
    cout << "1. Nom" << endl;
    cout << "2. Prenom" << endl;
    cout << "3. Numero de passport" << endl;
    cout << "4. Numero de telephone" << endl;
    cout << "5. Adresse" << endl;
    cout << "6. Age" << endl;
    cout << "Votre choix: ";
    cin >> choix;
    switch (choix) {
        case 1:
            cout << "Nom: ";
            cin >> this->nom;
            break;
        case 2:
            cout << "Prenom: ";
            cin >> this->prenom;
            break;
        case 3:
            cout << "Numero de passport: ";
            cin >> this->numPassport;
            break;
        case 4:
            cout << "Numero de telephone: ";
            cin >> this->numTel;
            break;
        case 5:
            cout << "Adresse: ";
            cin >> this->adresse;
            break;
        case 6:
            cout << "Age: ";
            cin >> this->age;
            break;
        default:
            break;
    }
}

Passager Passager::getPassager() {
    return *this;
}
