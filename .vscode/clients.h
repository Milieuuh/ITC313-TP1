/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Gestions des clients
*/

#ifndef _client_h
#define _client_h

#include <string>
#include <iostream>
#include <vector>


using namespace std;

class Clients{
    public:
        Clients();
    private:
        vector<Clients> m_liste_Client;
};

#endif // _client_h
