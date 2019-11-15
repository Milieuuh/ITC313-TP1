/** 
* File:     clients.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Gestions des clients
*/

#ifndef _clients_h
#define _clients_h

#include <string>
#include <iostream>
#include <vector>
#include "client.h"

using namespace std;

class Clients{
    public:
        Clients();
        vector<Client>  gestionHomonyme(string nom);
        void ajoutClient(Client client);
        vector<Client> getListeClients();
        void choixClient(vector<Client> client);

    private:
        vector<Client> m_liste_Client;
};

#endif // _clients_h
