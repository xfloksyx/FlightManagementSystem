#ifndef AVION_H
#define AVION_H

#include <string>
#include <iostream>
#include "Date.h"

class Avion
{
private:
    std::string idAvion;
    std::string nomPilote;
    int modele;
    int capaciteStockage;
    Date dateFabrication;
    int nbVolsAssures;

public:
    Avion();
    Avion(std::string idAvion, std::string nomPilote, int modele, int capaciteStockage, Date dateFabrication, int nbVolsAssures);

    void setIdAvion(std::string idAvion);
    void setNomPilote(std::string nomPilote);
    void setModele(int modele);
    void setCapaciteStockage(int capaciteStockage);
    void setDateFabrication(Date dateFabrication);
    void setNbVolsAssures(int nbVolsAssures);

    std::string getIdAvion();
    std::string getNomPilote();
    int getModele();
    int getCapaciteStockage();
    Date getDateFabrication();
    int getNbVolsAssures();

    void afficherAvion();
    void modifierAvion();
};

#endif // AVION_H

