// Smallest Multiple.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
	int i, j, p, lock = 0, key = 0, z = 20;
	
	for(i=1;lock==0;i++)
	{
		p=0;
		for(j=1; j<=z; j++)
		{
			if(i%j==0)
			{
				if(j == z)
				{
					key=i;
					lock=1;
				}
			}
			else
			{
				p=1;
			}
		
		if(p==1)
			break;
		}
		
	}
	printf("\n\nTHE SMALLEST POSITIVE NUMBER THAT IS EVENLY DIVISIBLE BY ALL OF THE NUMBER FROM 1 TO %d IS %d\n\n",z,key);
}

	


