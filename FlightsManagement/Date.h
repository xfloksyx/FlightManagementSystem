
#ifndef DATE_H
#define DATE_H

#include <stdexcept>

struct Date
{
    int jour;
    int mois;
    int annee;

    Date() = default;
    Date(int jour, int mois, int annee)
    {
        if (jour < 1 || jour > 31 || mois < 1 || mois > 12 || annee < 0)
            throw std::invalid_argument("Date invalide");
        else
        {
            this->jour = jour;
            this->mois = mois;
            this->annee = annee;
        }
    }
};

#endif // DATE_H
