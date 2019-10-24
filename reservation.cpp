
/**
* File:     reservation.cpp 
* Author:   Emilie GENTON
* Date:     24/10/2019 
* Summary:  Défintion de la classe Reservation
*/

Reservation::Reservation()
{

}

Reservation:: Reservation(int id, Date debut, Date fin,string id_hotel, int id_chambre, int id_client, double montant)
{

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

Reservation::setMontantTotal(double prix)
{
  m_montant_total = prix; 
}
   
Reservation::setIDChambre(int idChambre)
{
  m_id_chambre = idChambre;
}
    
Reservation::modifierDatesSejour()
{

}

double Reservation::calculMontant(int NombreNuit, double prixNuit, double remise)
{
  double montant=NombreNuit*prixNuit*remise; 
}
