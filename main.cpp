#include "chambre.h"
#include "hotel.h"
#include "reservation.h"
#include "Date.h"
#include "client.h"

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
	


	return 0; 
}