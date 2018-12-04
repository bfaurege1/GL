//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <userint.h>
#include <ansi_c.h>


int main(void)
{
	char ligne1[80]= "Nom: pentagone_B";
	char ligne2[80]= "Nb points: 5";
	char ligne3[80]= "Coordonnees: 10 20 30 20 25 40 43 53 35 65";  
	
	char nom_fig[80];
	int nb_pts;
	unsigned long x[5],y[5];
	char message[100];
	
	sscanf(ligne1, "%*s %s",nom_fig);
	sscanf(ligne2,"%*s %*s %u", &nb_pts);
	sscanf(ligne3,"%*s %u %*u %u %*u %u %*u %u %*u %u %*u",&x[0],&x[1],&x[2],&x[3],&x[4]);
	sscanf(ligne3,"%*s %*u %u %*u %u %*u %u %*u %u %*u %u",&y[0],&y[1],&y[2],&y[3],&y[4]);
	sprintf(message, "La figure %s possede %u sommets",nom_fig,nb_pts);
	MessagePopup("resultat",message);
	
	
	return 0;
}