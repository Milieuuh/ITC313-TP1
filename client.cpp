
/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe client.cpp
*/

#include "client.h"

Client::Client(int id,string nom, string prenom,int nbReservations)
{
    m_id_Client=id;
    m_nom_Client=nom;
    m_prenom_Client=prenom;
    m_nbReservations_Client=nbReservations;
}

//GETTERS
  int Client::getIdClient()
  {
    return m_id_Client;
  }
  
  string Client::getNomClient()
  {
    return m_nom_Client;
  }
  
  string Client::getPrenomClient()
  {
    return m_prenom_Client;
  }
  
  int Client::getNbReservations()
  {
    return m_nbReservations_Client;
  }
    
  //SETTER
  void Client::setNbReservation(int nbReservation)
  {
     m_nbReservations_Client=nbReservation; 
  }
    
///////////////////////////////////////////////////
 void Client::gestionHomonyme(string nom,vector<Client> clients)
 {
   for(Client c:clients)
   {
   
     if(nom==c.getNomClient())
     {
       cout<<"good";
     }
   }
 }    

//////////////////////////////////////////////////To String
  string Client::toString()
  {
    cout <<"Id : "<<m_id_Client<<"\nNom : "<<m_nom_Client<<"\nPrenom : "<<m_prenom_Client<<"\nNombre de reservation : "<<m_nbReservations_Client<<"\n\n";
    
    return "";
  }
  

