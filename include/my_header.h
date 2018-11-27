//  Copyright (c) 2018 Antoine Tran Tan
//

#ifndef MY_HEADER_H
#define MY_HEADER_H

#include "TP_lib_suite.h" 


short score(void);

short score(void)
{
	short comb_joueur[6] = {5,15,21,33,46,37} ;
	short comb_gagnante[6];
	short j = 0, i, x , numbon=0;
	
	

	initialiserTirage();
	for (x=0 ; x<6 ; x++)
	{
		comb_gagnante[x] = tirerNumero();
		
	}
	
	while ( j<6)
	{
		for (i=0 ; i<6 ; i++)
		{
			if (comb_joueur[j] == comb_gagnante[i])
			{
				
				numbon = numbon+1 ;
			}
			
		}
		
	j++;
	
	}

    return numbon;
	
}

#endif
