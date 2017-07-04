// 10001st Prime Number.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<conio.h>
void main()
{
	int lock=1,n=1,m,i,flag,a[10010],z=10001,pani;
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
			if(n==-858993460)
			{
				goto p;
			}
			else
			{

				a[lock]=n;
				lock=lock+1;
			}
		}
		
		u:;
		p:;
	}
	
	printf("\nTHE %d PRIME NUMBER IS %d\n",z,a[z]);
}
	


