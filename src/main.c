//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <userint.h>
#include <ansi_c.h>


int main(void)
{
	
	  char prenom[20], nom[20];
	  long anneenais;
	  char libelle[100];
	  
	  printf("Nom:") ;
	  scanf("%s",nom)  ;
	  printf("Prenom:");
	  scanf("%s",prenom) ;
	  printf("Annee de Naissance:");
	  scanf("%u",&anneenais);
	  
	  sprintf(libelle,"je m'appelle %s %s et j'ai %u ans",nom ,prenom, 2018-anneenais);
	  MessagePopup("exo79",libelle);
	
	
	
    return 0;
}
