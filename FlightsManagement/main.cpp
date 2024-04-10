#include <iostream>
#include <vector>
#include "Passager.h"
#include "Avion.h"
#include "Vol.h"
#include "managementSystem.h"
using namespace std;

/*
class Passager;
class Avion;
class Vol;
class managementSystem;



struct Date
{
    int jour;
    int mois;
    int annee;

    Date() = default;
    Date(int jour, int mois, int annee){
        if(jour < 0 || jour > 31 || mois < 0 || mois > 12 || annee < 0)
            throw invalid_argument("Date invalide");
        else{
            this->jour = jour;
            this->mois = mois;
            this->annee = annee;
        }
    }


};

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
        Passager() = default;
        Passager(string nom, string prenom, string numPassport, string numTel, string adresse, int age, int idPassager){
            this->nom = nom;
            this->prenom = prenom;
            this->numPassport = numPassport;
            this->numTel = numTel;
            this->adresse = adresse;
            this->age = age;
            this->idPassager = idPassager;
        }

        void setNom(string nom){
            this->nom = nom;
        }

        void setPrenom(string prenom){
            this->prenom = prenom;
        }

        void setNumPassport(string numPassport){
            this->numPassport = numPassport;
        }

        void setNumTel(string numTel){
            this->numTel = numTel;
        }

        void setAdresse(string adresse){
            this->adresse = adresse;
        }

        void setAge(int age){
            this->age = age;
        }

        void setIdPassager(int idPassager){
            this->idPassager = idPassager;
        }

        string getNom(){
            return this->nom;
        }

        string getPrenom(){
            return this->prenom;
        }

        string getNumPassport(){
            return this->numPassport;
        }

        string getNumTel(){
            return this->numTel;
        }

        string getAdresse(){
            return this->adresse;
        }

        int getAge(){
            return this->age;
        }

        int getIdPassager(){
            return this->idPassager;
        }

        void afficherPassager(){
            cout<<"---------------{ Informations du passager  }----------------- "<<endl;
            cout << "Nom: " << this->nom << endl;
            cout << "Prenom: " << this->prenom << endl;
            cout << "Numero de passport: " << this->numPassport << endl;
            cout << "Numero de telephone: " << this->numTel << endl;
            cout << "Adresse: " << this->adresse << endl;
            cout << "Age: " << this->age << endl;
            cout << "ID: " << this->idPassager << endl;
            cout<<"-------------------------------------------------------------- "<<endl;
        }

        void modifierPassager(){
            int choix;
            cout<<"Que voulez-vous modifier ?"<<endl;
            cout<<"1. Nom"<<endl;
            cout<<"2. Prenom"<<endl;
            cout<<"3. Numero de passport"<<endl;
            cout<<"4. Numero de telephone"<<endl;
            cout<<"5. Adresse"<<endl;
            cout<<"6. Age"<<endl;
            cout<<"Votre choix: ";
            cin>>choix;
            switch (choix)
            {
            case 1:
                cout<<"Nom: ";
                cin>>this->nom;
                break;
            case 2:
                cout<<"Prenom: ";
                cin>>this->prenom;
                break;
            case 3:
                cout<<"Numero de passport: ";
                cin>>this->numPassport;
                break;
            case 4:
                cout<<"Numero de telephone: ";
                cin>>this->numTel;
                break;
            case 5:
                cout<<"Adresse: ";
                cin>>this->adresse;
                break;
            case 6:
                cout<<"Age: ";
                cin>>this->age;
                break;

            default:
                break;
            }
        }

        Passager getPassager(){
            return *this;
        }
};
class Avion
{
    private:
        string idAvion;
        string nomPilote;
        int modele;
        int capaciteStockage;
        Date dateFabrication;
        int nbVolsAssures;

    public:
        Avion() = default;
        Avion(string idAvion, string nomPilote, int modele, int capaciteStockage, Date dateFabrication, int nbVolsAssures){
            this->idAvion = idAvion;
            this->nomPilote = nomPilote;
            this->modele = modele;
            this->capaciteStockage = capaciteStockage;
            this->dateFabrication = dateFabrication;
            this->nbVolsAssures = nbVolsAssures;
        }

        void setIdAvion(string idAvion){
            this->idAvion = idAvion;
        }

        void setNomPilote(string nomPilote){
            this->nomPilote = nomPilote;
        }

        void setModele(int modele){
            this->modele = modele;
        }

        void setCapaciteStockage(int capaciteStockage){
            this->capaciteStockage = capaciteStockage;
        }

        void setDateFabrication(Date dateFabrication){
            this->dateFabrication = dateFabrication;
        }

        void setNbVolsAssures(int nbVolsAssures){
            this->nbVolsAssures = nbVolsAssures;
        }

        string getIdAvion(){
            return this->idAvion;
        }

        string getNomPilote(){
            return this->nomPilote;
        }

        int getModele(){
            return this->modele;
        }

        int getCapaciteStockage(){
            return this->capaciteStockage;
        }

        Date getDateFabrication(){
            return this->dateFabrication;
        }

        int getNbVolsAssures(){
            return this->nbVolsAssures;
        }

        void afficherAvion(){
            cout<<"---------------{ Informations de l'avion  }----------------- "<<endl;
            cout << "ID: " << this->idAvion << endl;
            cout << "Nom du pilote: " << this->nomPilote << endl;
            cout << "Modele: " << this->modele << endl;
            cout << "Capacite de stockage: " << this->capaciteStockage << endl;
            cout << "Date de fabrication: " << this->dateFabrication.jour << "/" << this->dateFabrication.mois << "/" << this->dateFabrication.annee << endl;
            cout << "Nombre de vols assures: " << this->nbVolsAssures << endl;
            cout<<"-------------------------------------------------------------- "<<endl;
        }

        void modifierAvion(){
            int choix;
            cout<<"Que voulez-vous modifier ?"<<endl;
            cout<<"1. ID"<<endl;
            cout<<"2. Nom du pilote"<<endl;
            cout<<"3. Modele"<<endl;
            cout<<"4. Capacite de stockage"<<endl;
            cout<<"5. Date de fabrication"<<endl;
            cout<<"6. Nombre de vols assures"<<endl;
            cout<<"Votre choix: ";
            cin>>choix;
            switch (choix)
            {
            case 1:
                cout<<"ID: ";
                cin>>this->idAvion;
                break;
            case 2:
                cout<<"Nom du pilote: ";
                cin>>this->nomPilote;
                break;
            case 3:
                cout<<"Modele: ";
                cin>>this->modele;
                break;
            case 4:
                cout<<"Capacite de stockage: ";
                cin>>this->capaciteStockage;
                break;
            case 5:
                cout<<"Date de fabrication: "<<endl;
                cout<<"Jour: ";
                cin>>this->dateFabrication.jour;
                cout<<"Mois: ";
                cin>>this->dateFabrication.mois;
                cout<<"Annee: ";
                cin>>this->dateFabrication.annee;
                break;
            case 6:
                cout<<"Nombre de vols assures: ";
                cin>>this->nbVolsAssures;
                break;

            default:
                break;
            }

         }


};


class Vol
{
    private:
        Avion avion;
        vector<Passager> passagers;
        Date depart;
        Date arrivee;
        string destination;
        string origine;
        int idVol;

    public:
    Vol() = default;
    Vol(Avion avion, vector<Passager> passagers, Date depart, Date arrivee, string destination, string origine, int idVol){
        this->avion = avion;
        this->passagers = passagers;
        this->depart = depart;
        this->arrivee = arrivee;
        this->destination = destination;
        this->origine = origine;
        this->idVol = idVol;
    }

    void setAvion(Avion avion){
        this->avion = avion;
    }

    void setPassagers(vector<Passager> passagers){
        this->passagers = passagers;
    }

    void setDepart(Date depart){
        this->depart = depart;
    }

    void setArrivee(Date arrivee){
        this->arrivee = arrivee;
    }

    void setDestination(string destination){
        this->destination = destination;
    }

    void setOrigine(string origine){
        this->origine = origine;
    }

    void setIdVol(int idVol){
        this->idVol = idVol;
    }

    Avion getAvion(){
        return this->avion;
    }

    vector<Passager> getPassagers(){
        return this->passagers;
    }

    Date getDepart(){
        return this->depart;
    }

    Date getArrivee(){
        return this->arrivee;
    }

    string getDestination(){
        return this->destination;
    }

    string getOrigine(){
        return this->origine;
    }

    int getIdVol(){
        return this->idVol;
    }

    void afficherVol(){
        cout<<"---------------{ Informations du vol  }----------------- "<<endl;
        cout << "ID: " << this->idVol << endl;
        cout << "Avion: " << this->avion.getIdAvion() << endl;
        cout << "Passagers: " << endl;
        for (int i = 0; i < this->passagers.size(); i++)
        {
            cout << "\t\tPassager " << i+1 << ": " << this->passagers[i].getNom() << " " << this->passagers[i].getPrenom() << endl;
        }
        cout << "Date de depart: " << this->depart.jour << "/" << this->depart.mois << "/" << this->depart.annee << endl;
        cout << "Date d'arrivee: " << this->arrivee.jour << "/" << this->arrivee.mois << "/" << this->arrivee.annee << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Origine: " << this->origine << endl;
        cout<<"-------------------------------------------------------------- "<<endl;
    }

    void modifierVol(){
        int choix;
        cout<<"Que voulez-vous modifier ?"<<endl;
        cout<<"1. ID"<<endl;
        cout<<"2. Avion"<<endl;
        cout<<"3. Passager"<<endl;
        cout<<"4. Date de depart"<<endl;
        cout<<"5. Date d'arrivee"<<endl;
        cout<<"6. Destination"<<endl;
        cout<<"7. Origine"<<endl;
        cout<<"Votre choix: ";
        cin>>choix;
        int j, m, a;
        int idPassager;
        switch (choix)
        {
        case 1:
            cout<<"ID: ";
            cin>>this->idVol;
            break;
        case 2:
            this->avion.modifierAvion();
            break;
        case 3:
            cout <<"Entre l'ID du passager: ";

            cin >> idPassager;
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
            cout<<"Date de depart: "<<endl;
            cout<<"Jour: ";
            cin>>j;
            cout<<"Mois: ";
            cin>>m;
            cout<<"Annee: ";
            cin>>a;
             if(j < this->getDepart().jour || m < this->getDepart().mois || a < this->getDepart().annee)
                cout<<"Date invalide"<<endl;
            else{
                this->depart.jour = j;
                this->depart.mois = m;
                this->depart.annee = a;
            }
            break;
        case 5:
            cout<<"Date d'arrivee: "<<endl;
            cout<<"Jour: ";
            cin>>j;
            cout<<"Mois: ";
            cin>>m;
            cout<<"Annee: ";
            cin>>a;
            if(j < this->getDepart().jour || m < this->getDepart().mois || a < this->getDepart().annee)
                cout<<"Date invalide"<<endl;
            else{
                this->arrivee.jour = j;
                this->arrivee.mois = m;
                this->arrivee.annee = a;
            }
            break;
        case 6:
            cout<<"Destination: ";
            cin>>this->destination;
            break;
        case 7:
            cout<<"Origine: ";
            cin>>this->origine;
            break;

        default:
            break;
        }

    }

    void ajouterPassager(Passager passager){
        this->passagers.push_back(passager);
    }

    void supprimerPassager(int idPassager){
        for (int i = 0; i < this->passagers.size(); i++)
        {
            if (this->passagers[i].getIdPassager() == idPassager)
            {
                this->passagers.erase(this->passagers.begin() + i);
                return;
            }
        }
    }

    void afficherPassagers(){
        cout<<"---------------{ Passagers du vol  }----------------- "<<endl;
        for (int i = 0; i < this->passagers.size(); i++)
        {
            cout << "\t\tPassager " << i+1 << ": " << this->passagers[i].getNom() << " " << this->passagers[i].getPrenom() << endl;
        }
        cout<<"-------------------------------------------------------------- "<<endl;
    }

    void afficherPassager(int idPassager){
        int k = 0;
        for (int i = 0; i < this->passagers.size(); i++)
        {
            if (this->passagers[i].getIdPassager() == idPassager)
            {
                this->passagers[i].afficherPassager();

                return;
            }
        }
        if(k == 0)
            cout<<"Passager introuvable"<<endl;
    }

};

class managementSystem
{
    private:
        vector<Passager> passagers;
        vector<Avion> avions;
        vector<Vol> vols;


    public:
        managementSystem() = default;
        managementSystem(vector<Passager> passagers, vector<Avion> avions, vector<Vol> vols){
            this->passagers = passagers;
            this->avions = avions;
            this->vols = vols;
        }

        void setPassagers(vector<Passager> passagers){
            this->passagers = passagers;
        }

        void setAvions(vector<Avion> avions){
            this->avions = avions;
        }

        void setVols(vector<Vol> vols){
            this->vols = vols;
        }

        vector<Passager> getPassagers(){
            return this->passagers;
        }

        vector<Avion> getAvions(){
            return this->avions;
        }

        vector<Vol> getVols(){
            return this->vols;
        }

        void ajouterPassager(Passager passager){
            this->passagers.push_back(passager);
        }

        void ajouterAvion(Avion avion){
            this->avions.push_back(avion);
        }

        void volAjouter(Vol vol){
            this->vols.push_back(vol);
        }

        void supprimerPassager(int idPassager){
            for (int i = 0; i < this->passagers.size(); i++)
            {
                if (this->passagers[i].getIdPassager() == idPassager)
                {
                    this->passagers.erase(this->passagers.begin() + i);
                    return;
                }
            }
        }

        void supprimerAvion(string idAvion){
            for (int i = 0; i < this->avions.size(); i++)
            {
                if (this->avions[i].getIdAvion() == idAvion)
                {
                    this->avions.erase(this->avions.begin() + i);
                    return;
                }
            }
        }

        void supprimerVol(int idVol){
            for (int i = 0; i < this->vols.size(); i++)
            {
                if (this->vols[i].getIdVol() == idVol)
                {
                    this->vols.erase(this->vols.begin() + i);
                    return;
                }
            }
        }

        void deletePassagerFromVol(int idPassager, int idVol){
            for (int i = 0; i < this->vols.size(); i++)
            {
                if (this->vols[i].getIdVol() == idVol)
                {
                    this->vols[i].supprimerPassager(idPassager);
                    return;
                }
            }
        }

        void searchPassager(int idPassager){
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
            if(k == 0)
                cout<<"Passager introuvable"<<endl;
        }

        void searchAvion(string idAvion){
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
            if(k == 0)
                cout<<"Avion introuvable"<<endl;
        }

        void searchVol(int idVol){
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
            if(k == 0)
                cout<<"Vol introuvable"<<endl;
        }

        void searchPassagerInVol(int idPassager, int idVol){
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
            if(k == 0)
                cout<<"Vol introuvable"<<endl;
        }

        void afficherPassagers(){
            cout<<"---------------{ Passagers  }----------------- "<<endl;
            for (int i = 0; i < this->passagers.size(); i++)
            {
                this->passagers[i].afficherPassager();
            }
            cout<<"-------------------------------------------------------------- "<<endl;
        }

        void afficherAvions(){
            cout<<"---------------{ Avions  }----------------- "<<endl;
            for (int i = 0; i < this->avions.size(); i++)
            {
                this->avions[i].afficherAvion();
            }
            cout<<"-------------------------------------------------------------- "<<endl;
        }

        void afficherVols(){
            cout<<"---------------{ Vols  }----------------- "<<endl;
            for (int i = 0; i < this->vols.size(); i++)
            {
                this->vols[i].afficherVol();
            }
            cout<<"-------------------------------------------------------------- "<<endl;
        }

        void afficherTousVolsDePassager(int idPassager){
            int k = 0;
            for (int i = 0; i < this->vols.size(); i++)
            {
                for (int j = 0; j < this->vols[i].getPassagers().size(); j++)
                {
                    if (this->vols[i].getPassagers()[j].getIdPassager() == idPassager)
                    {
                        this->vols[i].afficherVol();
                        k = 1;
                        return;
                    }
                }
            }
            if(k == 0)
                cout<<"Passager introuvable"<<endl;
        }

        void afficherPassagerParAge(int age){
            int k = 0;
            for (int i = 0; i < this->passagers.size(); i++)
            {
                if (this->passagers[i].getAge() <= age)
                {
                    this->passagers[i].afficherPassager();
                    k = 1;

                }
            }
            if(k == 0)
                cout<<"Passager introuvable"<<endl;
        }

        void afficherVolsParDate(Date date){
            int k = 0;
            for (int i = 0; i < this->vols.size(); i++)
            {
                if (this->vols[i].getDepart().jour == date.jour && this->vols[i].getDepart().mois == date.mois && this->vols[i].getDepart().annee == date.annee)
                {
                    this->vols[i].afficherVol();
                    k = 1;
                    return;
                }
            }
            if(k == 0)
                cout<<"Vol introuvable"<<endl;
        }

        void ajouterVol(Vol vol){
            this->vols.push_back(vol);
        }

        Avion searchAvionReturn(string idAvion){
            int k = 0;
            for (int i = 0; i < this->avions.size(); i++)
            {
                if (this->avions[i].getIdAvion() == idAvion)
                {
                    return this->avions[i];

                }
            }
            if(k == 0)
                cout<<"Avion introuvable"<<endl;
                return Avion();
        }

        Passager getPassagerReturn(int idPassager){
            int k = 0;
            for (int i = 0; i < this->passagers.size(); i++)
            {
                if (this->passagers[i].getIdPassager() == idPassager)
                {
                    return this->passagers[i];

                }
            }
            if(k == 0)
                cout<<"Passager introuvable"<<endl;
                return Passager();
        }
        Vol searchVolReturn(int idVol){
            int k = 0;
            for (int i = 0; i < this->vols.size(); i++)
            {
                if (this->vols[i].getIdVol() == idVol)
                {
                    return this->vols[i];

                }
            }
            if(k == 0)
                cout<<"Vol introuvable"<<endl;
                return Vol();
        }



        void afficherPassagersDeVol(int idVol){
            int k = 0;
            for (int i = 0; i < this->vols.size(); i++)
            {
                if (this->vols[i].getIdVol() == idVol)
                {
                    this->vols[i].afficherPassagers();
                    k = 1;
                    break;
                }
            }
            if(k == 0)
                cout<<"Vol introuvable"<<endl;
        }

        void afficherReservationsPassager(int idPassager){
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
            if(k == 0)
                cout<<"Passager introuvable"<<endl;
        }







};
*/
managementSystem ms;

int main(){

    //creation des passagers
    Passager passager1("Moussa", "Sow", "123456789", "77889900", "Dakar", 20, 1);
    Passager passager2("Marouane", "Wos", "123456789", "77889900", "Maroc", 23, 2);
    Passager passager3("Ayoub", "Amine", "123456789", "77889900", "Maroc", 25, 3);

    //creation des avions
    Date dateFabrication1(12, 12, 2012);
    Avion avion1("123", "Moussa", 123, 123, dateFabrication1, 123);
    Date dateFabrication2(12, 2, 2012);
    Avion avion2("456", "Marouane", 456, 456, dateFabrication2, 456);

    //creation des vols
    Date depart1(1, 5, 2012);
    Date arrivee1(2, 5, 2012);
    Vol vol1(avion1, {passager1, passager2}, depart1, arrivee1, "Dakar", "Maroc", 1);
    Date depart2(2, 5, 2012);
    Date arrivee2(4, 5, 2012);
    Vol vol2(avion2, {passager3}, depart2, arrivee2, "Jakarta", "Maroc", 2);


    //ajout des passagers dans le systeme
    ms.ajouterPassager(passager1);
    ms.ajouterPassager(passager2);
    ms.ajouterPassager(passager3);

    //ajout des avions dans le systeme

    ms.ajouterAvion(avion1);
    ms.ajouterAvion(avion2);


    //ajout des vols dans le systeme
    ms.ajouterVol(vol1);
    ms.ajouterVol(vol2);


    int choix;
    do{
    cout<<"Bienvenue dans le systeme de gestion de vols"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"1. Passager"<<endl;
    cout<<"2. Avion"<<endl;
    cout<<"3. Vol"<<endl;
    cout<<"4. Reservation"<<endl;
    cout<<"5. Quitter"<<endl;
    cout<<"Votre choix: ";
    cin>>choix;

        if(choix == 1){
            int choixPassager;
            do{
                cout <<"------{ Gestion des passagers }------"<<endl;
                cout<<"1. Ajouter un passager"<<endl;
                cout<<"2. Supprimer un passager"<<endl;
                cout<<"3. Modifier un passager"<<endl;
                cout<<"4. Afficher tous les passagers"<<endl;
                cout<<"5. Afficher un passager"<<endl;
                cout<<"6. Afficher tous les vols d'un passager"<<endl;
                cout<<"7. Afficher les passagers par age"<<endl;
                cout<<"8. Quitter"<<endl;
                cout<<"Votre choix: ";
                cin>>choixPassager;

                    if(choixPassager == 1){
                        string nom, prenom, numPassport, numTel, adresse;
                        int age, idPassager;
                        cout<<"Nom: ";
                        cin>>nom;
                        cout<<"Prenom: ";
                        cin>>prenom;
                        cout<<"Numero de passport: ";
                        cin>>numPassport;
                        cout<<"Numero de telephone: ";
                        cin>>numTel;
                        cout<<"Adresse: ";
                        cin>>adresse;
                        cout<<"Age: ";
                        cin>>age;
                        cout<<"ID: ";
                        cin>>idPassager;
                        Passager passager(nom, prenom, numPassport, numTel, adresse, age, idPassager);
                        ms.ajouterPassager(passager);

                        cout<<"Passager ajoute avec succes"<<endl;
                    }

                        else if(choixPassager == 2){
                            int idPassager;
                            cout<<"ID du passager: ";
                            cin>>idPassager;
                            ms.supprimerPassager(idPassager);
                            cout<<"Passager supprime avec succes"<<endl;
                        }

                        else if(choixPassager == 3){
                            int idPassager;
                            int idVol;
                            int nbvols;
                            cout<<"ID du passager: ";
                            cin>>idPassager;
                            Passager passager = ms.getPassagerReturn(idPassager);
                            cout<< "Combien de vols a ce passager ? ";
                            cin >> nbvols;
                            for(int i = 0; i < nbvols; i++){
                                cout << "ID du vol " << i+1 << " : ";
                                cin >> idVol;
                                Vol vol = ms.searchVolReturn(idVol);
                                vol.supprimerPassager(idPassager);
                                passager.modifierPassager();
                                vol.ajouterPassager(passager);
                                ms.supprimerPassager(idPassager);
                                ms.ajouterPassager(passager);
                                ms.supprimerVol(idVol);
                                ms.ajouterVol(vol);
                            }

                            cout<<"Passager modifie avec succes"<<endl;
                        }
                        else if(choixPassager == 4){
                            ms.afficherPassagers();
                        }
                        else if(choixPassager == 5){
                            int idPassager;
                            cout<<"ID du passager: ";
                            cin>>idPassager;
                            ms.searchPassager(idPassager);
                        }
                        else if(choixPassager == 6){
                            int idPassager;
                            cout<<"ID du passager: ";
                            cin>>idPassager;
                            ms.afficherReservationsPassager(idPassager);
                        }
                        else if(choixPassager == 7){
                            int age;
                            cout<<"Age: ";
                            cin>>age;
                            ms.afficherPassagerParAge(age);
                        }
                        else if(choixPassager == 8){
                            cout<<"Retour au menu principal"<<endl;
                        }
                        else{
                            cout<<"Choix invalide"<<endl;
                        }

            }while(choixPassager != 8);


        }
        else if(choix == 2){
            int choixAvion;
            do{
                cout <<"------{ Gestion des avions }------"<<endl;
                cout<<"1. Ajouter un avion"<<endl;
                cout<<"2. Supprimer un avion"<<endl;
                cout<<"3. Modifier un avion"<<endl;
                cout<<"4. Afficher tous les avions"<<endl;
                cout<<"5. Afficher un avion"<<endl;
                cout<<"6. Quitter"<<endl;
                cout<<"Votre choix: ";
                cin >> choixAvion;

                    if(choixAvion == 1){
                        string idAvion, nomPilote;
                        int modele, capaciteStockage, nbVolsAssures;
                        Date dateFabrication;
                        cout<<"ID: ";
                        cin>>idAvion;
                        cout<<"Nom du pilote: ";
                        cin>>nomPilote;
                        cout<<"Modele: ";
                        cin>>modele;
                        cout<<"Capacite de stockage: ";
                        cin>>capaciteStockage;
                        cout<<"Date de fabrication: "<<endl;
                        cout<<"Jour: ";
                        cin>>dateFabrication.jour;
                        cout<<"Mois: ";
                        cin>>dateFabrication.mois;
                        cout<<"Annee: ";
                        cin>>dateFabrication.annee;
                        cout<<"Nombre de vols assures: ";
                        cin>>nbVolsAssures;
                        Avion avion(idAvion, nomPilote, modele, capaciteStockage, dateFabrication, nbVolsAssures);
                        ms.ajouterAvion(avion);
                        cout<<"Avion ajoute avec succes"<<endl;
                    }
                    else if(choixAvion == 2){
                            string idAvion;
                            cout<<"ID de l'avion: ";
                            cin>>idAvion;
                            ms.supprimerAvion(idAvion);
                            cout<<"Avion supprime avec succes"<<endl;
                    }
                    else if(choixAvion == 3){
                            string idAvion;
                            cout<<"ID de l'avion: ";
                            cin>>idAvion;
                            for(int i = 0; i < ms.getAvions().size(); i++){
                                if(ms.getAvions()[i].getIdAvion() == idAvion){
                                    Avion avion = ms.getAvions()[i];
                                    ms.supprimerAvion(idAvion);
                                    avion.modifierAvion();
                                    ms.ajouterAvion(avion);
                                    break;
                                }
                            }
                            cout<<"Avion modifie avec succes"<<endl;
                    }
                    else if(choixAvion == 4){
                            ms.afficherAvions();
                    }
                    else if(choixAvion == 5){
                            string idAvion;
                            cout<<"ID de l'avion: ";
                            cin>>idAvion;
                            ms.searchAvion(idAvion);
                    }
                    else if(choixAvion == 6){
                            cout<<"Retour au menu principal"<<endl;
                    }
                    else{
                            cout<<"Choix invalide"<<endl;
                        }
            }while(choixAvion != 6);


        }
        else if(choix == 3){
            int choixVol;
            do{
                cout <<"------{ Gestion des vols }------"<<endl;
                cout<<"1. Ajouter un vol"<<endl;
                cout<<"2. Supprimer un vol"<<endl;
                cout<<"3. Modifier un vol"<<endl;
                cout<<"4. Afficher tous les vols"<<endl;
                cout<<"5. Afficher un vol"<<endl;
                cout<<"6. Afficher les passagers d'un vol"<<endl;
                cout<<"7. Afficher les vols par date"<<endl;
                cout<<"8. Quitter"<<endl;
                cout<<"Votre choix: ";
                cin >> choixVol;

                    if(choixVol == 1){
                        Vol vol;
                        string idAvion, nomPilote, nom, prenom, numPassport, numTel, adresse, destination, origine;
                        int modele, capaciteStockage, nbVolsAssures, age, idVol, jour, mois, annee, idPassager;
                        int choixAvionExiste;
                        cout<<"Est ce que l'avion de ce vol existe deja ? Oui: 1 / Non: 0"<<endl;
                        cin>>choixAvionExiste;
                            if( choixAvionExiste == 1){
                                cout<<"ID de l'avion: ";
                                cin>>idAvion;
                                Avion avion = ms.searchAvionReturn(idAvion);
                                vol.setAvion(avion);
                                cout<<"Les passagers de ce vol sont-ils deja enregistres ? Oui: 1 / Non: 0"<<endl;
                                int choixPassagerExiste;
                                cin >> choixPassagerExiste;
                                    if(choixPassagerExiste == 1){
                                        int idPassager;
                                        do{
                                            cout<<"ID du passager: ";
                                            cin>>idPassager;
                                            vol.ajouterPassager(ms.getPassagerReturn(idPassager));
                                            cout<<"Voulez-vous ajouter un autre passager ? Oui: 1 / Non: 0"<<endl;
                                            cin>>choixPassagerExiste;
                                            }while(choixPassagerExiste != 0);
                                    }
                                    else{
                                        do{
                                            Passager passager;
                                            cout<<"Nom: ";
                                            cin>>nom;
                                            passager.setNom(nom);
                                            cout<<"Prenom: ";
                                            cin>>prenom;
                                            passager.setPrenom(prenom);
                                            cout<<"Numero de passport: ";
                                            cin>>numPassport;
                                            passager.setNumPassport(numPassport);
                                            cout<<"Numero de telephone: ";
                                            cin>>numTel;
                                            passager.setNumTel(numTel);
                                            cout<<"Adresse: ";
                                            cin>>adresse;
                                            passager.setAdresse(adresse);
                                            cout<<"Age: ";
                                            cin>>age;
                                            passager.setAge(age);
                                            cout<<"ID: ";
                                            cin>>idPassager;
                                            passager.setIdPassager(idPassager);
                                            vol.ajouterPassager(passager);
                                            ms.ajouterPassager(passager);
                                            cout<<"Voulez-vous ajouter un autre passager ? Oui: 1 / Non: 0"<<endl;
                                            cin>>choixPassagerExiste;
                                            }while(choixPassagerExiste != 0);
                                        }
                                        cout<<"Date de depart: "<<endl;
                                        cout<<"Jour: ";
                                        cin>>jour;
                                        cout<<"Mois: ";
                                        cin>>mois;
                                        cout<<"Annee: ";
                                        cin>>annee;
                                        Date depart(jour, mois, annee);
                                        vol.setDepart(depart);
                                        cout<<"Date d'arrivee: "<<endl;
                                        cout<<"Jour: ";
                                        cin>>jour;
                                        cout<<"Mois: ";
                                        cin>>mois;
                                        cout<<"Annee: ";
                                        cin>>annee;
                                        Date arrivee(jour, mois, annee);
                                        vol.setArrivee(arrivee);
                                        cout<<"Destination: ";
                                        cin>>destination;
                                        vol.setDestination(destination);
                                        cout<<"Origine: ";
                                        cin>>origine;
                                        vol.setOrigine(origine);
                                        cout<<"ID: ";
                                        cin>>idVol;
                                        vol.setIdVol(idVol);
                                        ms.ajouterVol(vol);
                                        cout<<"Vol ajoute avec succes"<<endl;
                                    }
                            else{
                                cout<<"ID: ";
                                cin>>idAvion;
                                cout<<"Nom du pilote: ";
                                cin>>nomPilote;
                                cout<<"Modele: ";
                                cin>>modele;
                                cout<<"Capacite de stockage: ";
                                cin>>capaciteStockage;
                                cout<<"Date de fabrication: "<<endl;
                                cout<<"Jour: ";
                                cin>>jour;
                                cout<<"Mois: ";
                                cin>>mois;
                                cout<<"Annee: ";
                                cin>>annee;
                                cout<<"Nombre de vols assures: ";
                                cin>>nbVolsAssures;
                                Avion avion(idAvion, nomPilote, modele, capaciteStockage, Date(jour, mois, annee), nbVolsAssures);
                                vol.setAvion(avion);

                                cout<<"Les passagers de ce vol sont-ils deja enregistres ? Oui: 1 / Non: 0"<<endl;
                                int choixPassagerExiste;
                                cin >> choixPassagerExiste;

                                    if(choixPassagerExiste == 1){
                                        int idPassager;
                                        do{
                                            cout<<"ID du passager: ";
                                            cin>>idPassager;
                                            vol.ajouterPassager(ms.getPassagerReturn(idPassager));
                                            cout<<"Voulez-vous ajouter un autre passager ? Oui: 1 / Non: 0"<<endl;
                                            cin>>choixPassagerExiste;
                                            }while(choixPassagerExiste != 0);

                                    }
                                    else{

                                        do{
                                            Passager passager;
                                            cout<<"Nom: ";
                                            cin>>nom;
                                            passager.setNom(nom);
                                            cout<<"Prenom: ";
                                            cin>>prenom;
                                            passager.setPrenom(prenom);
                                            cout<<"Numero de passport: ";
                                            cin>>numPassport;
                                            passager.setNumPassport(numPassport);
                                            cout<<"Numero de telephone: ";
                                            cin>>numTel;
                                            passager.setNumTel(numTel);
                                            cout<<"Adresse: ";
                                            cin>>adresse;
                                            passager.setAdresse(adresse);
                                            cout<<"Age: ";
                                            cin>>age;
                                            passager.setAge(age);
                                            cout<<"ID: ";
                                            cin>>idPassager;
                                            passager.setIdPassager(idPassager);
                                            vol.ajouterPassager(passager);
                                            ms.ajouterPassager(passager);
                                            cout<<"Voulez-vous ajouter un autre passager ? Oui: 1 / Non: 0"<<endl;
                                            cin>>choixPassagerExiste;
                                            }while(choixPassagerExiste != 0);

                                        cout<<"Date de depart: "<<endl;
                                        cout<<"Jour: ";
                                        cin>>jour;
                                        cout<<"Mois: ";
                                        cin>>mois;
                                        cout<<"Annee: ";
                                        cin>>annee;
                                        Date depart(jour, mois, annee);
                                        vol.setDepart(depart);
                                        cout<<"Date d'arrivee: "<<endl;
                                        cout<<"Jour: ";
                                        cin>>jour;
                                        cout<<"Mois: ";
                                        cin>>mois;
                                        cout<<"Annee: ";
                                        cin>>annee;
                                        Date arrivee(jour, mois, annee);
                                        vol.setArrivee(arrivee);
                                        cout<<"Destination: ";
                                        cin>>destination;
                                        vol.setDestination(destination);
                                        cout<<"Origine: ";
                                        cin>>origine;
                                        vol.setOrigine(origine);
                                        cout<<"ID: ";
                                        cin>>idVol;
                                        vol.setIdVol(idVol);
                                        ms.ajouterVol(vol);
                                        ms.ajouterAvion(avion);

                                        cout<<"Vol ajoute avec succes"<<endl;
                            }



                            }

                    }

                            else if(choixVol == 2){
                                int idVol;
                                cout<<"ID du vol: ";
                                cin>>idVol;
                                ms.supprimerVol(idVol);

                                cout<<"Vol supprime avec succes"<<endl;
                            }

                            else if(choixVol == 3){
                                int idVol;
                                cout<<"ID du vol: ";
                                cin>>idVol;
                                Vol vol = ms.searchVolReturn(idVol);
                                for(int i = 0; i < ms.getVols().size(); i++){
                                    if(ms.getVols()[i].getIdVol() == idVol){
                                        ms.supprimerVol(idVol);
                                        vol.modifierVol();
                                        ms.ajouterVol(vol);
                                        break;
                                    }
                                }

                                   cout<<"Vol modifie avec succes"<<endl;
                                }

                            else if(choixVol == 4){
                                ms.afficherVols();
                            }

                            else if(choixVol == 5){
                                int idVol;
                                cout<<"ID du vol: ";
                                cin>>idVol;
                                ms.searchVol(idVol);
                            }

                            else if(choixVol == 6){
                                int idVol;
                                cout<<"ID du vol: ";
                                cin>>idVol;
                                ms.searchVol(idVol);
                                ms.getVols()[idVol].afficherPassagers();
                            }

                            else if(choixVol == 7){
                                int jour, mois, annee;
                                cout<<"Date de depart: "<<endl;
                                cout<<"Jour: ";
                                cin>>jour;
                                cout<<"Mois: ";
                                cin>>mois;
                                cout<<"Annee: ";
                                cin>>annee;
                                Date date(jour, mois, annee);
                                ms.afficherVolsParDate(date);
                            }

                            else if(choixVol == 8){
                                cout<<"Retour au menu principal"<<endl;
                            }

                            else{
                                cout<<"Choix invalide"<<endl;
                            }

            }while(choixVol != 8);
        }
        else if(choix == 4){
            int choixReservation;
            do{
                cout <<"------{ Gestion des reservations }------"<<endl;
                cout<<"1. Ajouter une reservation"<<endl;
                cout<<"2. Supprimer une reservation"<<endl;
                cout<<"3. Afficher une reservation"<<endl;
                cout<<"4. Afficher les reservations d'un passager"<<endl;
                cout<<"5. Afficher les reservations d'un vol"<<endl;
                cout<<"6. Quitter"<<endl;
                cout<<"Votre choix: ";
                cin >> choixReservation;

                    if(choixReservation == 1){
                        Passager passager;
                        Vol vol;
                        int idPassager, idVol;
                        cout<<"ID du passager: ";
                        cin>>idPassager;
                        cout<<"ID du vol: ";
                        cin>>idVol;
                        vol = ms.searchVolReturn(idVol);
                        ms.supprimerVol(idVol);
                        passager = ms.getPassagerReturn(idPassager);
                        vol.ajouterPassager(passager);
                        ms.ajouterVol(vol);

                        cout<<"Reservation effectuee avec succes"<<endl;
                    }
                    else if(choixReservation == 2){
                        int idPassager, idVol;
                        cout<<"ID du passager: ";
                        cin>>idPassager;
                        cout<<"ID du vol: ";
                        cin>>idVol;
                        ms.deletePassagerFromVol(idPassager, idVol);
                        Vol vol = ms.searchVolReturn(idVol);
                        vol.supprimerPassager(idPassager);
                        cout<<"Reservation supprimee avec succes"<<endl;
                    }

                    else if(choixReservation == 3){
                        int idPassager, idVol;
                        cout<<"ID du passager: ";
                        cin>>idPassager;
                        cout<<"ID du vol: ";
                        cin>>idVol;
                        ms.searchPassagerInVol(idPassager, idVol);
                    }
                    else if(choixReservation == 4){
                        int idPassager;
                        cout<<"ID du passager: ";
                        cin>>idPassager;
                        ms.afficherReservationsPassager(idPassager);

                    }
                    else if(choixReservation == 5){
                        int idVol;
                        cout<<"ID du vol: ";
                        cin>>idVol;
                        ms.afficherPassagersDeVol(idVol);
                    }
                    else if(choixReservation == 6){
                        cout<<"Retour au menu principal"<<endl;
                    }
                    else{
                        cout<<"Choix invalide"<<endl;
                    }
            }while(choixReservation != 6);
        }
        else if(choix == 5){
            cout<<"Merci d'avoir utilise notre systeme de gestion de vols"<<endl;
            cout<<"Au revoir"<<endl;
            cout<<"---------------------------------------------"<<endl;
            cout<<"Copyright: Marouane EL Hizabri "<<endl;
            cout<<"---------------------------------------------"<<endl;
        }
        else{
            cout<<"Choix invalide"<<endl;
        }




    }while(choix != 5);



    return 0;

}




