#include "managementSystem.h"
#include <iostream>

using namespace std;


managementSystem::managementSystem(vector<Passager> passagers, vector<Avion> avions, vector<Vol> vols)
{
    this->passagers = passagers;
    this->avions = avions;
    this->vols = vols;
}

void managementSystem::setPassagers(vector<Passager> passagers)
{
    this->passagers = passagers;
}

void managementSystem::setAvions(vector<Avion> avions)
{
    this->avions = avions;
}

void managementSystem::setVols(vector<Vol> vols)
{
    this->vols = vols;
}

vector<Passager> managementSystem::getPassagers()
{
    return this->passagers;
}

vector<Avion> managementSystem::getAvions()
{
    return this->avions;
}

vector<Vol> managementSystem::getVols()
{
    return this->vols;
}

void managementSystem::ajouterPassager(Passager passager)
{
    this->passagers.push_back(passager);
}

void managementSystem::ajouterAvion(Avion avion)
{
    this->avions.push_back(avion);
}

void managementSystem::volAjouter(Vol vol)
{
    this->vols.push_back(vol);
}

void managementSystem::supprimerPassager(int idPassager)
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

void managementSystem::supprimerAvion(string idAvion)
{
    for (int i = 0; i < this->avions.size(); i++)
    {
        if (this->avions[i].getIdAvion() == idAvion)
        {
            this->avions.erase(this->avions.begin() + i);
            return;
        }
    }
}

void managementSystem::supprimerVol(int idVol)
{
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getIdVol() == idVol)
        {
            this->vols.erase(this->vols.begin() + i);
            return;
        }
    }
}

void managementSystem::deletePassagerFromVol(int idPassager, int idVol)
{
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getIdVol() == idVol)
        {
            this->vols[i].supprimerPassager(idPassager);
            return;
        }
    }
}

void managementSystem::searchPassager(int idPassager)
{
    int k = 0;
    for (int i = 0; i < this->passagers.size(); i++)
    {
        if (this->passagers[i].getIdPassager() == idPassager)
        {
            this->passagers[i].afficherPassager();
            k = 1;
            return;
        }
    }
    if (k == 0)
        cout << "Passager introuvable" << endl;
}

void managementSystem::searchAvion(string idAvion)
{
    int k = 0;
    for (int i = 0; i < this->avions.size(); i++)
    {
        if (this->avions[i].getIdAvion() == idAvion)
        {
            this->avions[i].afficherAvion();
            k = 1;
            return;
        }
    }
    if (k == 0)
        cout << "Avion introuvable" << endl;
}

void managementSystem::searchVol(int idVol)
{
    int k = 0;
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getIdVol() == idVol)
        {
            this->vols[i].afficherVol();
            k = 1;
            return;
        }
    }
    if (k == 0)
        cout << "Vol introuvable" << endl;
}

void managementSystem::searchPassagerInVol(int idPassager, int idVol)
{
    int k = 0;
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getIdVol() == idVol)
        {
            this->vols[i].afficherPassager(idPassager);
            k = 1;
            return;
        }
    }
    if (k == 0)
        cout << "Vol introuvable" << endl;
}

void managementSystem::afficherPassagers()
{
    cout << "---------------{ Passagers  }----------------- " << endl;
    for (int i = 0; i < this->passagers.size(); i++)
    {
        this->passagers[i].afficherPassager();
    }
    cout << "-------------------------------------------------------------- " << endl;
}

void managementSystem::afficherAvions()
{
    cout << "---------------{ Avions  }----------------- " << endl;
    for (int i = 0; i < this->avions.size(); i++)
    {
        this->avions[i].afficherAvion();
    }
    cout << "-------------------------------------------------------------- " << endl;
}

void managementSystem::afficherVols()
{
    cout << "---------------{ Vols  }----------------- " << endl;
    for (int i = 0; i < this->vols.size(); i++)
    {
        this->vols[i].afficherVol();
    }
    cout << "-------------------------------------------------------------- " << endl;
}

void managementSystem::afficherTousVolsDePassager(int idPassager)
{
    int k = 0;
    for (int i = 0; i < this->vols.size(); i++)
    {
        for (int j = 0; j < this->vols[i].getPassagers().size(); j++)
        {
            if (this->vols[i].getPassagers()[j].getIdPassager() == idPassager)
            {
                this->vols[i].afficherVol();
                k = 1;
                break;
            }
        }
    }
    if (k == 0)
        cout << "Passager introuvable" << endl;
}

void managementSystem::afficherPassagerParAge(int age)
{
    int k = 0;
    for (int i = 0; i < this->passagers.size(); i++)
    {
        if (this->passagers[i].getAge() <= age)
        {
            this->passagers[i].afficherPassager();
            k = 1;
        }
    }
    if (k == 0)
        cout << "Passager introuvable" << endl;
}

void managementSystem::afficherVolsParDate(Date date)
{
    int k = 0;
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getDepart().jour == date.jour && this->vols[i].getDepart().mois == date.mois && this->vols[i].getDepart().annee == date.annee)
        {
            this->vols[i].afficherVol();
            k = 1;
            break;
        }
    }
    if (k == 0)
        cout << "Vol introuvable" << endl;
}

void managementSystem::ajouterVol(Vol vol)
{
    this->vols.push_back(vol);
}

Avion managementSystem::searchAvionReturn(string idAvion)
{
    for (int i = 0; i < this->avions.size(); i++)
    {
        if (this->avions[i].getIdAvion() == idAvion)
        {
            return this->avions[i];
        }
    }
    cout << "Avion introuvable" << endl;
    return Avion();
}

Passager managementSystem::getPassagerReturn(int idPassager)
{
    for (int i = 0; i < this->passagers.size(); i++)
    {
        if (this->passagers[i].getIdPassager() == idPassager)
        {
            return this->passagers[i];
        }
    }
    cout << "Passager introuvable" << endl;
    return Passager();
}

Vol managementSystem::searchVolReturn(int idVol)
{
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getIdVol() == idVol)
        {
            return this->vols[i];
        }
    }
    cout << "Vol introuvable" << endl;
    return Vol();
}

void managementSystem::afficherPassagersDeVol(int idVol)
{
    for (int i = 0; i < this->vols.size(); i++)
    {
        if (this->vols[i].getIdVol() == idVol)
        {
            this->vols[i].afficherPassagers();
            return;
        }
    }
    cout << "Vol introuvable" << endl;
}

void managementSystem::afficherReservationsPassager(int idPassager)
{
    for (int i = 0; i < this->vols.size(); i++)
    {
        for (int j = 0; j < this->vols[i].getPassagers().size(); j++)
        {
            if (this->vols[i].getPassagers()[j].getIdPassager() == idPassager)
            {
                this->vols[i].afficherVol();
                return;
            }
        }
    }
    cout << "Passager introuvable" << endl;
}
