/** 
  * File:     point.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Point
  */

#include <iostream>
#include <string>
#include <array>
using namespace std;

#ifndef HOTEL.H
#define HOTEL.H

class Hotel {
  public:
    Hotel(); 
 
    //GETTERS
    string getIdHotel(); 
    string getNom(); 
    string getVille(); 
    array getListeChambres(); 
 
    //AUTRES METHODES / FONCTIONS
    ajoutChambre(Chambre ch); 
    
  
  private:
    string m_id_hotel;
    string m_nom;
    string m_ville; 
    array m_liste_chambres;
}

#endif // HOTEL.H
