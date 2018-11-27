//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"


int main(void)
{
	short scoremax=0, k, a;
	
	
	
	for (k=0; k<100 ; k++)
	{
		a = score();
		
		if (a>scoremax)
			scoremax = a;
		else if (a==6)
			k = 100;
			
	}

    return 0;
	
}
