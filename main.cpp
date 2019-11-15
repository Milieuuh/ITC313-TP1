#include "chambre.h"
#include "hotel.h"
#include "reservation.h"
#include "Date.h"
#include "client.h"
#include "clients.h"

int main() {

	//Création de l'hotel et de ses chambres
	Hotel hotel("1", "Hotel Dieu", "Los Angeles");
	

	for(int i=1;i<=10;i++)
	{
		if((i>0)&(i<=3))
		{
			Chambre chambre(i, simple, 100);
			hotel.ajoutChambre(chambre);
		}
		else if((i>3)&(i<=8))
		{
			Chambre chambre(i, confort, 125);
			hotel.ajoutChambre(chambre);		
		}
		else
		{
			Chambre chambre(i, suite, 210);
			hotel.ajoutChambre(chambre);
					
		}			
	}

	//Informations de l'hotel
	hotel.infoHotel();

	//Création d'une liste de client
	/*vector<Client> liste_client={}; 
	string nom ="A";
	for(int i=1;i<=10;i++)
	{
		
		Client client1(i, nom, "A");
		liste_client.push_back(client1);

		nom+="B";
	}

	for(Client c : liste_client)
	{
		c.toString();
	}*/

	Clients client1;
	string nom; 
	cin >> nom; 
	vector<Client> l = client1.gestionHomonyme(nom); 
	for(Client c : l)
	{
		c.toString();
	}
	client1.choixClient(l);


	//SAISIE DES DATES DE RESERVATION PAR L'UTILISATEUR
/*	Date dateDebut, dateFin;
	int jour=0;
	int mois=0;  
	int annee= 0; 

	Reservation reservation;  

	//DATE DE DEBUT
	bool conforme = false; 
	while (conforme==false)
	{
		cout << "Entrez le jour de la date de séjour que vous souhaitez : " ; 
		cin >> jour ; 
		cout << "Entrez le mois de la date de séjour que vous souhaitez : " ; 
		cin >> mois ; 
		cout << "Entrez l'année de la date de séjour que vous souhaitez : " ; 
		cin >> annee ; 
		dateDebut.setDate(jour, mois, annee);
		conforme = reservation.verifieDate(dateDebut);
		if(conforme==false)
		{
			cout << "Veuillez entrer une date valide !! " << endl; 
		}

	}
	conforme = false;
	//DATE DE FIN
	while (conforme==false)
	{
		cout << "Entrez le jour de la date de séjour que vous souhaitez : " ; 
		cin >> jour ; 
		cout << "Entrez le mois de la date de séjour que vous souhaitez : " ; 
		cin >> mois ; 
		cout << "Entrez l'année de la date de séjour que vous souhaitez : " ; 
		cin >> annee ; 
		dateFin.setDate(jour, mois, annee);
		conforme = reservation.verifieDate(dateDebut);
		if(conforme==false)
		{
			cout << "Veuillez entrer une date valide !! " << endl; 
		}

	}
	reservation.setDatesSejour(dateDebut, dateFin); 
	bool res =false; 
	
	while (res == false )
	{
	 res =reservation.dateSejourCoherentes();
	 if(res==false)
		{
			cout << "La date de fin de séjour doit être postérieur avec la date de début de séjour ! " << endl; 
		} 
	}
*/

	return 0; 
}

