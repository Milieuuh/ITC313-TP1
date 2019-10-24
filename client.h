/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe client.h
*/

#ifndef _client_h
#define _client_h

#include <string>
using namespace std;

class Client{
  public:
    Client(int id,string nom, string prenom,int nbReservations=0);
    
    int getIdClient();
    string getNomClient();
    string getPrenomClient();
    string getNbReservations();
    
    void setNbReservation(int nbReservation);
    
    string toString();
  
  private:
    int m_id_Client;
    string m_nom_Client;
    string m_prenom_Client;
    int m_nbReservations_Client;
};

#endif // _client_h
