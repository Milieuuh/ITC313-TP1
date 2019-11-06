#include "chambre.h"
#include "hotel.h"
#include "reservation.h"
#include "Date.h"
#include "client.h"

int main() {

	Chambre chambre(0, "grande", 50); 
	Chambre chambre2(0, "grande", 50); 

	Hotel hotel("", "Nom", "Los Angeles");

	Date dateSejourDebut(1,1,2019); 
	Date dateSejourFin(5,1,2019); 

	Client client(0, "nom", "prenom"); 

	Reservation reservation(0, dateSejourDebut, dateSejourFin,hotel.getIdHotel(), chambre.getIdChambre(), client.getIdClient(),10);

	std::cout << "Coucou" << std::endl; 


	return 0; 
}