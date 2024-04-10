#include "Vol.h"
#include <iostream>

// Default constructor
Vol::Vol() : idVol(0) {}

// Parameterized constructor
Vol::Vol(Avion avion, std::vector<Passager> passagers, Date depart, Date arrivee, std::string destination, std::string origine, int idVol)
    : avion(avion), passagers(passagers), depart(depart), arrivee(arrivee), destination(destination), origine(origine), idVol(idVol) {}

// Setter methods
void Vol::setAvion(Avion avion) { this->avion = avion; }
void Vol::setPassagers(std::vector<Passager> passagers) { this->passagers = passagers; }
void Vol::setDepart(Date depart) { this->depart = depart; }
void Vol::setArrivee(Date arrivee) { this->arrivee = arrivee; }
void Vol::setDestination(std::string destination) { this->destination = destination; }
void Vol::setOrigine(std::string origine) { this->origine = origine; }
void Vol::setIdVol(int idVol) { this->idVol = idVol; }

// Getter methods
Avion Vol::getAvion() { return this->avion; }
std::vector<Passager> Vol::getPassagers() { return this->passagers; }
Date Vol::getDepart() { return this->depart; }
Date Vol::getArrivee() { return this->arrivee; }
std::string Vol::getDestination() { return this->destination; }
std::string Vol::getOrigine() { return this->origine; }
int Vol::getIdVol() { return this->idVol; }

// Function to display flight details
void Vol::afficherVol()
{
    std::cout << "---------------{ Informations du vol  }----------------- " << std::endl;
    std::cout << "ID: " << this->idVol << std::endl;
    std::cout << "Avion: " << this->avion.getIdAvion() << std::endl;
    std::cout << "Passagers: " << std::endl;
    for (int i = 0; i < this->passagers.size(); i++)
    {
        std::cout << "\t\tPassager " << i + 1 << ": " << this->passagers[i].getNom() << " " << this->passagers[i].getPrenom() << std::endl;
    }
    std::cout << "Date de depart: " << this->depart.jour << "/" << this->depart.mois << "/" << this->depart.annee << std::endl;
    std::cout << "Date d'arrivee: " << this->arrivee.jour << "/" << this->arrivee.mois << "/" << this->arrivee.annee << std::endl;
    std::cout << "Destination: " << this->destination << std::endl;
    std::cout << "Origine: " << this->origine << std::endl;
    std::cout << "-------------------------------------------------------------- " << std::endl;
}

// Function to modify flight details
void Vol::modifierVol()
{
    int choix;
    std::cout << "Que voulez-vous modifier ?" << std::endl;
    std::cout << "1. ID" << std::endl;
    std::cout << "2. Avion" << std::endl;
    std::cout << "3. Passager" << std::endl;
    std::cout << "4. Date de depart" << std::endl;
    std::cout << "5. Date d'arrivee" << std::endl;
    std::cout << "6. Destination" << std::endl;
    std::cout << "7. Origine" << std::endl;
    std::cout << "Votre choix: ";
    std::cin >> choix;
    int j, m, a;
    int idPassager;
    switch (choix)
    {
    case 1:
        std::cout << "ID: ";
        std::cin >> this->idVol;
        break;
    case 2:
        this->avion.modifierAvion();
        break;
    case 3:
        std::cout << "Entre l'ID du passager: ";
        std::cin >> idPassager;
        for (int i = 0; i < this->passagers.size(); i++)
        {
            if (this->passagers[i].getIdPassager() == idPassager)
            {
                this->passagers[i].modifierPassager();
                break;
            }
        }
        break;
    case 4:
        std::cout << "Date de depart: " << std::endl;
        std::cout << "Jour: ";
        std::cin >> j;
        std::cout << "Mois: ";
        std::cin >> m;
        std::cout << "Annee: ";
        std::cin >> a;
        if (j < this->getDepart().jour || m < this->getDepart().mois || a < this->getDepart().annee)
            std::cout << "Date invalide" << std::endl;
        else
        {
            this->depart.jour = j;
            this->depart.mois = m;
            this->depart.annee = a;
        }
        break;
    case 5:
        std::cout << "Date d'arrivee: " << std::endl;
        std::cout << "Jour: ";
        std::cin >> j;
        std::cout << "Mois: ";
        std::cin >> m;
        std::cout << "Annee: ";
        std::cin >> a;
        if (j < this->getDepart().jour || m < this->getDepart().mois || a < this->getDepart().annee)
            std::cout << "Date invalide" << std::endl;
        else
        {
            this->arrivee.jour = j;
            this->arrivee.mois = m;
            this->arrivee.annee = a;
        }
        break;
    case 6:
        std::cout << "Destination: ";
        std::cin >> this->destination;
        break;
    case 7:
        std::cout << "Origine: ";
        std::cin >> this->origine;
        break;
    default:
        break;
    }
}

// Function to add a passenger to the flight
void Vol::ajouterPassager(Passager passager)
{
    this->passagers.push_back(passager);
}

// Function to remove a passenger from the flight
void Vol::supprimerPassager(int idPassager)
{
    for (int i = 0; i < this->passagers.size(); i++)
    {
        if (this->passagers[i].getIdPassager() == idPassager)
        {
            this->passagers.erase(this->passagers.begin() + i);
            return;
        }
    }
}

// Function to display all passengers of the flight
void Vol::afficherPassagers()
{
std::cout << "---------------{ Passagers du vol }----------------- " << std::endl;
for (int i = 0; i < this->passagers.size(); i++)
{
std::cout << "\t\tPassager " << i + 1 << ": " << this->passagers[i].getNom() << " " << this->passagers[i].getPrenom() << std::endl;
}
std::cout << "-------------------------------------------------------------- " << std::endl;
}

// Function to display details of a specific passenger by ID
void Vol::afficherPassager(int idPassager)
{
int k = 0;
for (int i = 0; i < this->passagers.size(); i++)
{
if (this->passagers[i].getIdPassager() == idPassager)
{
this->passagers[i].afficherPassager();
return;
}
}
if (k == 0)
std::cout << "Passager introuvable" << std::endl;
}
