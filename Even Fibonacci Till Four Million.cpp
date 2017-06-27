// Even Fibonacci Till Four Million.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,first=0,second=1,next=0,sum=0;
	while(next<=4000000)
	{   
	    next=first+second;
		first=second;
		second=next;
		if(next>4000000)
			break;
		if(next%2==0)
	      {
		     printf("%d\t",next);
			 sum=sum+next;
	      }
	}

	printf("\nTHE SUM OF THE EVEN VALUED TERMS OF FIBONACCI SEQUENCE WHOSE VALUE DO NOT EXCEED FOUR MILLION IS %d\n",sum);
}

