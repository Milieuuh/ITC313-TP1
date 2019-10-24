/** 
* File:     reservation.h 
* Author:   Emilie GENTON
* Date:     24/10/2019 
* Summary:  Déclaration de la classe Réservation
*/


#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

#ifndef _reservation_h
#define _reservation_h

class Reservation{
  public:
    Reservation();
    Reservation(int id, Date debut, Date fin,string id_hotel, int id_chambre, int id_client, double montant=0);
    
    //GETTERS
    int getIdReservation(); 
    Date getDateDebut(); 
    Date getDateFin(); 
    string getIdHotel(); 
    int getIdChambre(); 
    int getIdClient(); 
    double geMontantTotal(); 
    
    //SETTERS
    void setMontantTotal(double prix); 
    void setIDChambre(int idChambre);
    
    //AUTRES METHODES
    void modifierDatesSejour();
    double calculMontant(int NombreNuit, double prixNuit, double remise=1);
    
  
  private:
    int m_id_Reservation;
    Date m_date_debut;
    Date m_date_fin;
    string m_id_hotel; 
    int m_id_chambre; 
    int m_id_client;
    double m_montant_total; 
    

}


#endif // _reservation_h
