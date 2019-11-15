
/**
* File:     reservation.cpp 
* Author:   Emilie GENTON
* Date:     24/10/2019 
* Summary:  Défintion de la classe Reservation
*/

#include "reservation.h"
#include "Date.h"

//CONSTRUCTEURS
Reservation::Reservation()
{   
     m_id_reservation=0; 
     /*m_date_debut(1,1,2020);    
     m_date_fin(1,1,2020);*/
     m_id_hotel= ""; 
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
     m_id_client = id_client; 
}


////////////////////////////////////////////////////////////////////GETTERS
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

///////////////////////////////////////////////////////////////////SETTERS
void Reservation::setMontantTotal(double prix)
{
  m_montant_total = prix; 
}
   
void Reservation::setIDChambre(int idChambre)
{
  m_id_chambre = idChambre;
}
    
void Reservation::setDatesSejour(Date dateDebut, Date dateFin)
{
  m_date_debut = dateDebut; 
  m_date_fin = dateFin; 
}

///////////////////////////////////////////////////////////////////AUTRES METHODES
double Reservation::calculMontant( double prixNuit, double remise)
{
  int NombreNuit = m_date_debut.differenceDate(m_date_fin);
  double montant=NombreNuit*prixNuit*remise; 
  return montant; 
}


bool Reservation::verifieDate(Date d1)
{
  bool res =false; 
  if(d1.getMois()>12 || d1.getMois() <1)
  {
    res = false; 
  } 
  else if(d1.getJour() > d1.nbJourDansMois()|| d1.getJour()<1)
  {
    res = false; 
  } else if( d1.getAnnee()<2019 && d1.getAnnee()>2100)
  {
      res= false; 
  }
  else 
  {
    res = true; 
  }
  return res; 
}
