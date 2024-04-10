#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include <vector>
#include <iostream>
#include "Passager.h"
#include "Avion.h"
#include "Vol.h"

class managementSystem
{
private:
    std::vector<Passager> passagers;
    std::vector<Avion> avions;
    std::vector<Vol> vols;

public:
    managementSystem() = default;
    managementSystem(std::vector<Passager> passagers, std::vector<Avion> avions, std::vector<Vol> vols);

    void setPassagers(std::vector<Passager> passagers);
    void setAvions(std::vector<Avion> avions);
    void setVols(std::vector<Vol> vols);

    std::vector<Passager> getPassagers();
    std::vector<Avion> getAvions();
    std::vector<Vol> getVols();

    void ajouterPassager(Passager passager);
    void ajouterAvion(Avion avion);
    void volAjouter(Vol vol);

    void supprimerPassager(int idPassager);
    void supprimerAvion(std::string idAvion);
    void supprimerVol(int idVol);

    void deletePassagerFromVol(int idPassager, int idVol);

    void searchPassager(int idPassager);
    void searchAvion(std::string idAvion);
    void searchVol(int idVol);
    void searchPassagerInVol(int idPassager, int idVol);

    void afficherPassagers();
    void afficherAvions();
    void afficherVols();

    void afficherTousVolsDePassager(int idPassager);
    void afficherPassagerParAge(int age);
    void afficherVolsParDate(Date date);

    void ajouterVol(Vol vol);

    Avion searchAvionReturn(std::string idAvion);
    Passager getPassagerReturn(int idPassager);
    Vol searchVolReturn(int idVol);

    void afficherPassagersDeVol(int idVol);
    void afficherReservationsPassager(int idPassager);
};

#endif // MANAGEMENTSYSTEM_H

