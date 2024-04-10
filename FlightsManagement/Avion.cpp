#include "Avion.h"
#include "Avion.h"

Avion::Avion() {
    // Default constructor implementation
}

Avion::Avion(std::string idAvion, std::string nomPilote, int modele, int capaciteStockage, Date dateFabrication, int nbVolsAssures) {
    // Parameterized constructor implementation
    this->idAvion = idAvion;
    this->nomPilote = nomPilote;
    this->modele = modele;
    this->capaciteStockage = capaciteStockage;
    this->dateFabrication = dateFabrication;
    this->nbVolsAssures = nbVolsAssures;
}

void Avion::setIdAvion(std::string idAvion) {
    this->idAvion = idAvion;
}

void Avion::setNomPilote(std::string nomPilote) {
    this->nomPilote = nomPilote;
}

void Avion::setModele(int modele) {
    this->modele = modele;
}

void Avion::setCapaciteStockage(int capaciteStockage) {
    this->capaciteStockage = capaciteStockage;
}

void Avion::setDateFabrication(Date dateFabrication) {
    this->dateFabrication = dateFabrication;
}

void Avion::setNbVolsAssures(int nbVolsAssures) {
    this->nbVolsAssures = nbVolsAssures;
}

std::string Avion::getIdAvion() {
    return this->idAvion;
}

std::string Avion::getNomPilote() {
    return this->nomPilote;
}

int Avion::getModele() {
    return this->modele;
}

int Avion::getCapaciteStockage() {
    return this->capaciteStockage;
}

Date Avion::getDateFabrication() {
    return this->dateFabrication;
}

int Avion::getNbVolsAssures() {
    return this->nbVolsAssures;
}

void Avion::afficherAvion() {
    std::cout << "---------------{ Informations de l'avion  }----------------- " << std::endl;
    std::cout << "ID: " << this->idAvion << std::endl;
    std::cout << "Nom du pilote: " << this->nomPilote << std::endl;
    std::cout << "Modele: " << this->modele << std::endl;
    std::cout << "Capacite de stockage: " << this->capaciteStockage << std::endl;
    std::cout << "Date de fabrication: " << this->dateFabrication.jour << "/" << this->dateFabrication.mois << "/" << this->dateFabrication.annee << std::endl;
    std::cout << "Nombre de vols assures: " << this->nbVolsAssures << std::endl;
    std::cout << "-------------------------------------------------------------- " << std::endl;
}

void Avion::modifierAvion() {
    int choix;
    std::cout << "Que voulez-vous modifier ?" << std::endl;
    std::cout << "1. ID" << std::endl;
    std::cout << "2. Nom du pilote" << std::endl;
    std::cout << "3. Modele" << std::endl;
    std::cout << "4. Capacite de stockage" << std::endl;
    std::cout << "5. Date de fabrication" << std::endl;
    std::cout << "6. Nombre de vols assures" << std::endl;
    std::cout << "Votre choix: ";
    std::cin >> choix;
    switch (choix) {
        case 1:
            std::cout << "ID: ";
            std::cin >> this->idAvion;
            break;
        case 2:
            std::cout << "Nom du pilote: ";
            std::cin >> this->nomPilote;
            break;
        case 3:
            std::cout << "Modele: ";
            std::cin >> this->modele;
            break;
        case 4:
            std::cout << "Capacite de stockage: ";
            std::cin >> this->capaciteStockage;
            break;
        case 5:
            std::cout << "Date de fabrication: " << std::endl;
            std::cout << "Jour: ";
            std::cin >> this->dateFabrication.jour;
            std::cout << "Mois: ";
            std::cin >> this->dateFabrication.mois;
            std::cout << "Annee: ";
            std::cin >> this->dateFabrication.annee;
            break;
        case 6:
            std::cout << "Nombre de vols assures: ";
            std::cin >> this->nbVolsAssures;
            break;
        default:
            break;
    }
}
