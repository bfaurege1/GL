//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"


int main (void)
{
	partie1();
	partie2();
	partie3();
	partie4();
	partie5();

	return 0;
}

int partie1(void)
{
	unsigned char bin[10]={25,10,140,75,56,89,220,5,207,184};
	short int i,seuil=120;
	
	for (i=0 ; i<10 ; i=i+1)
	{
		if (bin[i] < seuil)
			
			bin[i] =0;
		else
			bin[i]=1;
	
	}
	
	
    return 0;
}


int partie2 (void)
{
	short int sat[10];
	short int i,seuilh=2500, seuilb=-2500; 
	
	for (i=0 ; i<10 ; i++)
	{	
		sat[i]= rand()-16383;
	
	if (sat[i]<seuilb)
		
		sat[i] = seuilb;
	
	else if (sat[i]>seuilh)
		
		sat[i] = seuilh;
	}

  return 0;
}

	
int partie3 (void)
{
	unsigned char dist[10]={25,10,140,75,56,89,220,5,207,184},output_dist[10];
	short int i;
	
	for (i=0; i<9 ; i++)
	{
		output_dist[i+1] = fabs(dist[i] - dist[i+1]);
	}

   return 0;
}


 
 
int partie4 (void)
{
	short int N=5, i;
	unsigned char a[N], b[N];
	
	
	for (i=0 ; i<N ; i++)
	{
		
		b[i] = a[N-1-i] ;
	
	}

	return 0;
}


 
int partie5 (void)
{
	unsigned char N=6, mirroir[N];
	short int i;
	
	for (i=0; i<(N/2); i++)
	{
		mirroir[i] = rand() % 200;
		mirroir[N-i-1] = mirroir[i] ;
	}
	
	return 0;
}
