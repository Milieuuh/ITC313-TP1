#include "chambre.h"
#include "hotel.h"
#include "reservation.h"
#include "Date.h"
#include "client.h"

int main() {

	Chambre chambre(0, "grande", 50); 
	Chambre chambre2(0, "grande", 50); 
	/*std::vector<Chambre> listeChambres ={chambre, chambre2};*/

	Hotel hotel(0, "Nom", "Los Angeles");

	Date dateSejourDebut(1,1,2019); 
	Date dateSejourFin(5,1,2019); 

	Client client(0, "nom", "prenom"); 

	Reservation reservation(0, dateSejourDebut, dateSejourFin,hotel.getIdHotel(), chambre.getIdChambre(), client.getIdClient());


	return 0; 
}