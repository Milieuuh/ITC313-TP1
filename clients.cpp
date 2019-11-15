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

 void Clients::gestionHomonyme(string nom,vector<Client> clients)
 {
   for(Client c:clients)
   {
   
     if(nom==c.getNomClient())
     {
       cout<<"good";
     }
   }
 }   