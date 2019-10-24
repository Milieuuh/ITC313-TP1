/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Declaration de la classe Chambre
*/

#ifndef _chambre_h
#define _chambre_h

#include <iostream>
#include <string>

class Chambre{
  public:
    Chambre();
  
  private:
    int id;
    string type;
    double prix;

}


#endif // _chambre_h
