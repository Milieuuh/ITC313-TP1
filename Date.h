/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe date.h
*/

#ifndef _Date_h
#define _Date_h

#include <string>

using namespace std;

class Date{
  public:
    Date();
    Date(int jour, int mois, int annee);
    
    int getJour();
    int getMois();
    int getAnnee();
    
    void setDate(int jour, int mois, int annee);
    
    string toString();
    string dateToString();
  
  private:
    int m_jour;
    int m_mois;
    int m_annee;
};

#endif // _Date_h
