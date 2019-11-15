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
    reserve=false;
}

Chambre::Chambre(int id, m_type_Chambre type, double prix)
{
    m_id_Chambre=id;
    m_prix_Chambre=prix;
    setTypeChambre(type);     
    reserve=false;
}

//GETTERS
double Chambre::getPrixChambre()
{
  return m_id_Chambre;
}

string Chambre::getTypeChambre(m_type_Chambre type)
{
  string typeC;

  if(type==0)
  {
    typeC="simple";
  }
  else if(type==1)
  {
    typeC="confort";
  }
  else if(type==2)
  {
    typeC="suite";
  }

  return typeC;
}

int Chambre::getIdChambre()
{
  return m_id_Chambre;
}

string Chambre::getReserve(bool reserver)
{    
    string s="libre";

    if(reserver==1)
    {
      s="reserve";
    }

    return s;
}

//SETTERS
void Chambre::setPrixChambre(double prix)
{
  m_prix_Chambre=prix;
}

void Chambre::setTypeChambre(m_type_Chambre type)
{
    if((type==simple)||(type==confort)||(type==suite))
    {
      m_type=type;
    }
    else
    {
      m_type=simple;
    }      
}

void Chambre::setChambre(m_type_Chambre type, double prix)
{
  m_prix_Chambre=prix;
  setTypeChambre(type);
}

void Chambre::setReservation(bool reserver)
{
  reserve=reserver;
}

//TO STRING
string Chambre::infoChambre()
{
    //return "Chambre n°"+std::to_string(getIdChambre())+"\nType : "+std::to_string(getTypeChambre())+"\nPrix : "+std::to_string(getPrixChambre())+" €";
    string s = getTypeChambre(m_type);
    string r = getReserve(reserve);
    cout <<"\nChambre "<< m_id_Chambre << " - Reservee: "<< r <<"\nType : "<< s <<"\nPrix : "<<m_prix_Chambre<<"\n";

    return "";
}
