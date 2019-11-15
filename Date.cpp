
/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe date.cpp
*/

#include "Date.h"
#include <iostream>
using namespace std; 

Date::Date()
{
    m_jour=1;
    m_mois=1;
    m_annee=2019;
}

Date::Date(int jour, int mois, int annee)
{
    m_jour=jour;
    m_mois=mois;
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
     // return to_string(getJour());//+"/"+getMois()+"/"+getAnnee();
     return "date à faire";
  }


string Date::dateToString()
{
    string mois[12]={"Janvier","Février","Mars","Avril","Mai","Juin","Juillet","Aout","Septembre","Octobre","Novembre","Décembre"};
    string current_mois=mois[m_mois-1];

    cout << "Date : " << getJour() << " "<< current_mois <<" "<<getAnnee();
    return " date à faire";
   
}

int Date::nbJourDansMois(Date d1)
{
  int numMois = 0; 
  switch(d1.getMois()){
    case 1 : numMois =31;
    break; 
    case 2 : numMois =28;
    break; 
    case 3 : numMois =31;
    break; 
    case 4 : numMois =30;
    break; 
    case 5 : numMois =31;
    break; 
    case 6 : numMois =30;
    break; 
    case 7 : numMois =31;
    break; 
    case 8 : numMois =31;
    break; 
    case 9 : numMois =30;
    break; 
    case 10 : numMois =31;
    break; 
    case 11 : numMois =30;
    break; 
    case 12 : numMois =31;
    break; 
    default : numMois =31;
  } 
  return numMois;

}

int Date::differenceDate(Date debut, Date fin)
{
    int nbJours=0; 
    if(fin.getJour()-debut.getJour()>0)
    {
      nbJours= fin.getJour()-debut.getJour(); 
    } else {
      nbJours = debut.nbJourDansMois(debut)-debut.getJour()+1+fin.getJour(); 
    }

    return nbJours; 

}