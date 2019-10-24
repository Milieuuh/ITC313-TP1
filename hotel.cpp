/** 
  * File:     hotel.cpp
  * Summary:  Définition de la classe hotel
  */


#include <string>
#include <iostream>
#include "hotel.h"
using namespace std; 

Hotel::Hotel(string id, string nom, string ville, array liste_chambre)
{
   m_nom= nom; 
   m_ville = ville;
   m_liste_chambre=liste_chambre; 
}

string Hotel::getIdHotel()
{

}
string Hotel::getNom()
{

}

string Hotel::getVille()
{

}

array Hotel::getListeChambres()
{

}

 Hotel::ajoutChambre(Chambre ch)
 {
 
 }
