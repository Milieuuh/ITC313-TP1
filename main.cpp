#include "chambre.h"
#include "hotel.h"
#include "reservation.h"
#include "Date.h"
#include "client.h"

int main() {

	//Création de l'hotel et des chambres
	Hotel hotel("1", "Hotel Dieu", "Los Angeles");
	

	for(int i=0;i<10;i++)
	{
		if((i>=0)&(i<3))
		{
			Chambre chambre(i+1, simple, 100);
			hotel.ajoutChambre(chambre);
		}
		else if((i>=3)&(i<8))
		{
			Chambre chambre(i+1, confort, 125);
			hotel.ajoutChambre(chambre);		
		}
		else
		{
			Chambre chambre(i+1, suite, 210);
			hotel.ajoutChambre(chambre);			
		}
			
	}
	


	return 0; 
}