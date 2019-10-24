/**
* File:     chambre.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Défintio de la classe Chambre
*/

#include "Chambre.h"

//Constructors
Chambre::Chambre(){
    m_id_Chambre=0;
    m_type_Chambre="nul";
    m_prix_Chambre=0.0;
}

Chambre::Chambre(int id, string type, double prix)
{
    m_id_Chambre=id;
    m_type_Chambre=type;
    m_prix_Chambre=prix;
}

//GETTERS
double Chambre::getPrixChambre()
{
  return m_id_Chambre;
}

string Chambre::getTypeChambre()
{
  return m_type_Chambre;
}

int Chambre::getIdChambre()
{
  return m_id_Chambre;
}

//SETTERS
void setPrixChambre(double prix)
{
  m_prix_Chambre=prix;
}

void setTypeChambre(string type)
{
  m_type_Chambre=type;
}

//TO STRING
string Chambre::ToString()
{
    return "Chambre n°"+getIdChambre()+"\nType : "+getTypeChambre()+"\nPrix : "+getPrixChambre()+" €";
}
