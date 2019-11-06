/** 
  * File:     hotel.cpp
  * Summary:  Définition de la classe hotel
  */


#include <string>
#include "hotel.h"
using namespace std; 

Hotel::Hotel(string id, string nom, string ville)
{
   m_id_hotel=id; 
   m_nom=nom; 
   m_ville=ville;
}

string Hotel::getIdHotel()
{
   return m_id_hotel; 
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
