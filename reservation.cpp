
/**
* File:     reservation.cpp 
* Author:   Emilie GENTON
* Date:     24/10/2019 
* Summary:  Défintion de la classe Reservation
*/

#include "reservation.h"

Reservation::Reservation()
{   
     m_id_reservation=0; 
     m_date_debut=Date date(1,1,2020);    
     m_date_fin=Date date2(1,1,2020); 
     m_id_hotel= 0; 
     m_id_chambre= 0; 
     m_montant_total=0;
}

Reservation::Reservation(int id, Date debut, Date fin,string id_hotel, int id_chambre, int id_client, double montant)
{
     m_id_reservation=id;
     m_date_debut=debut;    
     m_date_fin=fin; 
     m_id_hotel= id_hotel; 
     m_id_chambre= id_chambre; 
     m_montant_total=montant;
}

int Reservation::getIdReservation()
{
   return m_id_reservation; 
}

Date Reservation::getDateDebut()
{
  return m_date_debut;
}

Date Reservation::getDateFin()
{
  return m_date_fin;
}

string Reservation::getIdHotel()
{
  return m_id_hotel;
}
    
int Reservation::getIdChambre()
{
  return m_id_chambre;
}
   
int Reservation::getIdClient()
{
  return m_id_client;
}

double Reservation::geMontantTotal()
{
  return m_montant_total;
}

void Reservation::setMontantTotal(double prix)
{
  m_montant_total = prix; 
}
   
void Reservation::setIDChambre(int idChambre)
{
  m_id_chambre = idChambre;
}
    
void Reservation::modifierDatesSejour()
{

}

double Reservation::calculMontant(int NombreNuit, double prixNuit, double remise)
{
  double montant=NombreNuit*prixNuit*remise; 
}
