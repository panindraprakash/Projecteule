// Sum Primes Below Two Million.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<conio.h>
void main()
{
	int lock=1,n=1,m,i,flag,z=2000000,pani,sum=0;
	while(lock <= z)
	{
		flag=0;
		n = n + 1;
		m =n / 2;
		for(i=2;i<=m;i++)
		{
			if(n % i == 0)
			{
				flag=1;
				goto u;
			}
			
			
		}
		if(flag==0)
		{
			if(n>z)
			{
				goto p;
			}
			else
				{
					sum=sum+n;
					lock=lock+1;
			}
			
		}
		
		u:;
		
	}

	p:printf("\nTHE SUM OF %d PRIME NUMBER IS %d\n\n",z,sum);
	
}
