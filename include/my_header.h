//  Copyright (c) 2018 Antoine Tran Tan
//

#ifndef MY_HEADER_H
#define MY_HEADER_H

long long int Somme_1(void);
long long int Somme_2(void);
short int Somme_3(void);


long long int Somme_1 (void)
{
  	short int n=2;
  	long long int S1=3;

	
	while (n<30)
	{
		S1 = S1 + 3 * n ;
		n = n + 1;
	}
    return S1;

}



long long int Somme_2 (void)
{
   short int n=2;
   long long int S2=3;
   
   do
   {
	   S2 = S2 + 3 * n	;
		n = n + 1;
   }		
   while (S2<9876)  ;
   return S2;
}			



short int Somme_3 (void)
{
  int num;
  short int S3=0,n=1;
  
   while (n<12)
   {
	   num = rand()%11;
	   S3 = S3 + num;
	   n = n+1;
	  

	}
	 return S3 ;

}

#endif
