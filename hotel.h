/** 
  * File:     point.h 
  * Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * Date:     Fall 2019 
  * Course:   C-C++ Programming / Esirem 3A Informatique Electronique 
  * Summary:  Declaration of the class Point
  */

#include <iostream>
#include <string>
//#include <vector>
#include "chambre.h"
using namespace std;

#ifndef HOTEL_H
#define HOTEL_H

class Hotel {
  public:
    Hotel(string id=0, string nom, string ville/*, vector liste_chambre*/); 
 
    //GETTERS
    string getIdHotel(); 
    string getNom(); 
    string getVille(); 
    //vector getListeChambres(); 
 
    //AUTRES METHODES / FONCTIONS
    void ajoutChambre(Chambre ch); 
    
  
  private:
    string m_id_hotel;
    string m_nom;
    string m_ville; 
   // vector m_liste_chambres;
};

#endif // HOTEL_H
