//  Copyright (c) 2018 Antoine Tran Tan
//

#include "TP_lib.h"
#include "cvi_gui.h"

void main (void)
{
	short resultat;
	long point=0;

	do 
	{
		resultat = GetLong("Saisir la valeur");
		if (resultat%2 == 0)
			point = point + resultat;
		
		else if (resultat == 3)
		{
			point = point * 2;
		}
		
		else if (resultat == 5)
		{
			point = point - 2;
		}
		else 
			point = point ;
		
		
	}
	while (resultat != 1)	;
	
	if (point<0)
	{	point = 0;}
	
	
	DisplayLong("Votre nombre de point est : ",point) ;

	
}
