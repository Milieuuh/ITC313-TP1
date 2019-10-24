
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
    
  //To String
  string Client::toString()
  {
      return "à faire";
    //return "Client n°"+getIdClient()+"\nNom : "+getNomClient()+"\nPrénom : "+getPrenomClient()+"\nNombre de réservations : "+getNbReservations();
  }
  

