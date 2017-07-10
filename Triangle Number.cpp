// Triangle Number.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>



void main()
{
	int i,j,n=1,lock=0,block=0,count=0,z=501;
	for(i=2;lock==0;i++)
	{
		n=n+i;
		count=0;
		block=0;
		for(j=1;block==0;j++)
		{
			if(n%j==0)
			{
				count=count+1;
			}
			if(count==z)
			{
			    lock=1;
				block=1;
				printf("\n\n %d IS THE FIRST TIRANGLE NUMBER TO HAVE OVER FIVE HUNDRED DIVISORS\n\n",n);
				/*goto p;*/
			}
			if(j>n)
			{
			    block=1;
			}
		}
	}
/*p:;*/
}


/* ANS : 76576500  */








	
