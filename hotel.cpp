/** 
  * File:     hotel.cpp
  * Summary:  Définition de la classe hotel
  */


#include <string>
#include <iostream>
#include "hotel.h"
#include <vector>
using namespace std; 

Hotel::Hotel(string id, string nom, string ville)
{
   m_nom= nom; 
   m_ville = ville;
  // m_liste_chambre=liste_chambre; 
}

string Hotel::getIdHotel()
{
   return m_idHotel; 
}
string Hotel::getNom()
{
  return m_nom;
}

string Hotel::getVille()
{
  return m_ville;
}

/*vector Hotel::getListeChambres()
{
   return m_liste_chambre; 
}*/

 void Hotel::ajoutChambre(Chambre ch)
 {
    //m_liste_chambre.push_back(ch);
 }
