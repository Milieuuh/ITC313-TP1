/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe client.h
*/

#ifndef _client_h
#define _client_h

#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Client{
  public:
    Client(int id,string nom, string prenom,int nbReservations=0);
    
    int getIdClient();
    string getNomClient();
    string getPrenomClient();
    int getNbReservations();
    
    void setNbReservation(int nbReservation);
    
    string toString();
    void gestionHomonyme(string nom,vector<Client> clients);
  
  private:
    int m_id_Client;
    string m_nom_Client;
    string m_prenom_Client;
    int m_nbReservations_Client;
};

#endif // _client_h
