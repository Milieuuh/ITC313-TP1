
/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe date.cpp
*/

#include Date.h

Date::Date(int jour, int mois, int annee)
{
    m_jour=jour;
    int m_mois=mois;
    m_annee=annee;
}

//GETTER
    int Date::getJour()
    {
      return m_jour;
    }
    
    int Date::getMois()
    {
      return m_mois;
    }
    
    int Date::getAnnee()
    {
      return m_annee;
    }
    
//SETTER
    void Date::setDate(int jour, int mois, int annee)
    {
      m_jour=jour;
      m_mois=mois;
      m_annee=annee;
    }
 
//To String 
  string Date::toString()
  {
    return "en cours d ecriture";
  }
