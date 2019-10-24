/**
* File:     chambre.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Défintio de la classe Chambre
*/

#include "chambre.h"

//Constructors
Chambre::Chambre(){
    this->m_id_Chambre=0;
    this->m_type_Chambre="nul";
    this->m_prix_Chambre=0.0;
}

Chambre::Chambre(int id, string type, double prix)
{
    this->m_id_Chambre=id;
    this->m_type_Chambre=type;
    this->m_prix_Chambre=prix;
}

//GETTERS
double Chambre::getPrixChambre()
{
  return this->m_id_Chambre;
}

string Chambre::getTypeChambre()
{
  return this->m_type_Chambre;
}

int Chambre::getIdChambre()
{
  return this->m_id_Chambre;
}

//SETTERS
void setPrixChambre(double prix)
{
  this->m_prix_Chambre=prix;
}

void setTypeChambre(string type)
{
  this->m_type_Chambre=type;
}

//TO STRING
string Chambre::ToString()
{
    return "Chambre n°"+getIdChambre()+"\nType : "+getTypeChambre()+"\nPrix : "+getPrixChambre()+" €";
}
