/**
* File:     chambre.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Défintio de la classe Chambre
*/

#include "chambre.h"

//Constructors
Chambre::Chambre(){
    m_id_Chambre=0;
    m_type=simple;
    m_prix_Chambre=0.0;
}

Chambre::Chambre(int id, m_type_Chambre type, double prix)
{
    m_id_Chambre=id;
    m_prix_Chambre=prix;

    
    m_type=type;
 
    
}

//GETTERS
double Chambre::getPrixChambre()
{
  return m_id_Chambre;
}

m_type_Chambre Chambre::getTypeChambre()
{
  return m_type;
}

int Chambre::getIdChambre()
{
  return m_id_Chambre;
}

//SETTERS
void Chambre::setPrixChambre(double prix)
{
  m_prix_Chambre=prix;
}

void Chambre::setTypeChambre(m_type_Chambre type)
{
  m_type=type;
}

void Chambre::setChambre(m_type_Chambre type, double prix)
{
  m_prix_Chambre=prix;
  m_type=type;
}

//TO STRING
string Chambre::toString()
{
    //return "Chambre n°" << getIdChambre() << "\nType : " << getTypeChambre() << "\nPrix : "<<getPrixChambre() <<" €";
    return ""; 
}
