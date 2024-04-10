#ifndef VOL_H
#define VOL_H

#include "Avion.h"
#include "Passager.h"
#include "Date.h"
#include <vector>
#include <string>
#include <iostream>

class Vol
{
private:
    Avion avion;
    std::vector<Passager> passagers;
    Date depart;
    Date arrivee;
    std::string destination;
    std::string origine;
    int idVol;

public:
    Vol();
    Vol(Avion avion, std::vector<Passager> passagers, Date depart, Date arrivee, std::string destination, std::string origine, int idVol);

    void setAvion(Avion avion);
    void setPassagers(std::vector<Passager> passagers);
    void setDepart(Date depart);
    void setArrivee(Date arrivee);
    void setDestination(std::string destination);
    void setOrigine(std::string origine);
    void setIdVol(int idVol);

    Avion getAvion();
    std::vector<Passager> getPassagers();
    Date getDepart();
    Date getArrivee();
    std::string getDestination();
    std::string getOrigine();
    int getIdVol();

    void afficherVol();
    void modifierVol();
    void ajouterPassager(Passager passager);
    void supprimerPassager(int idPassager);
    void afficherPassagers();
    void afficherPassager(int idPassager);
};

#endif // VOL_H

