// Sum Of Square Difference.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	int i,asum=0,bsum=0;
	for(i=0;i<=100;i++)
	{
		asum=asum+sqrt(i);
		bsum=bsum+i;
	}
	printf("\n\nTHE SUM OF THE SQUARE OF THE FIRST 100 NACTURAL NUMBER IS %d\n\n",asum);
	printf("\n\nTHE SQUARE OF THE SUM OF THE FIRST 100 NACTURAL NUMBER IS %d\n\n",bsum);
	printf("\n\DIFFERENCE BETWEEN THE SUM OF THE SQUARE OF THE FIRST 100 NACTURAL NUMBER AND THE SQUARE OF THE SUM OF FIRST 100 NACTURAL NUMBER  IS %d\n\n",sqrt(bsum)-asum);

}



