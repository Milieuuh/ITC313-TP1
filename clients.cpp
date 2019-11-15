/** 
* File:     clients.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Gestions des clients
*/
#include "clients.h"

/////CONSTRUCTEUR
Clients::Clients()
{
  m_liste_Client.push_back(Client(1,"Bernard","Jack"));
  m_liste_Client.push_back(Client(2,"Bernard","Jeanine"));
  m_liste_Client.push_back(Client(3,"Couc","Jack"));
  m_liste_Client.push_back(Client(4,"Poituie","Desf"));
  m_liste_Client.push_back(Client(5,"Jeand","Quentin"));
  m_liste_Client.push_back(Client(6,"Pompoi","Jasmine"));
  m_liste_Client.push_back(Client(7,"Yhist","Paul"));
  m_liste_Client.push_back(Client(8,"Pojsa","Camille"));
  m_liste_Client.push_back(Client(9,"Greant","Michel"));
  m_liste_Client.push_back(Client(10,"Pardes","Juliette"));

}

///////////////////////////////////////////////////
  void Clients::ajoutClient(Client client)
  {
      m_liste_Client.push_back(client);
  }

  vector<Client> Clients::getListeClients()
  {
    return m_liste_Client;
  }

 vector<Client> Clients::gestionHomonyme(string nom)
 {
   vector<Client> nouvelleListe;
   for(Client c:m_liste_Client)
   {   
     if(nom==c.getNomClient())
     {
       nouvelleListe.push_back(c);
     }
   }

   if(nouvelleListe.empty)
   {
     for(Client c:m_liste_Client)
     {
       cout << "Ce client n'existe pas ! ";
       nouvelleListe.push_back(c);
     }
   }

   return nouvelleListe;
 }   

 void Clients::choixClient(vector<Client>client)
 {
   int nb;
   cout<<"Choisissez le client avec l'id : ";
   cin >>nb;

   for(Client c:client)
   {
     if(nb==c.getIdClient())
     {
       c.toString();
     }
     else
     {
       cout<<"Cet id n'existe pas";
     }
     
   }
 }