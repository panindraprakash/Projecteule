// Multiples of 3 and 5 below 1000.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<conio.h>
void main()
{
  int a[1000],i,c=0,sum=0;
  for(i=3;i<=1000;i++)
  {
    if((i%3==0) || (i%5==0))
    {
      a[c]=i;
      sum=sum+i;
      c=c+1;
    }
	
  }
  printf("Multiples of 3 and 5 below 100 are :\n");
  for(i=0;i<c;i++)
  {
    if(i%10==0)
    {
      printf("\n");
    }
    printf("%d\t",a[i]);
  }
  printf("\nThe multiple sum of 3 and 5 are %d\n",sum);
} 
  
  
     
   