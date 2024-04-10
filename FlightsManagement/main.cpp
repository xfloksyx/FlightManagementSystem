#include <iostream>
#include <vector>
#include "Passager.h"
#include "Avion.h"
#include "Vol.h"
#include "managementSystem.h"
using namespace std;

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




