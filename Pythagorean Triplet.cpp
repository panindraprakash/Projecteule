// Pythagorean Triplet.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <math.h>

void main()
{
    int sum=1000,a,b,c;

    for (a = 1; a <= sum/3; a++)
    {
        
        for (b = a + 1; b <= sum/2; b++)
        {
             c = sum - a - b;
            if ( a*a + b*b == c*c )
               printf("\n\na=%d, b=%d, c=%d\n\n",a,b,c);
        }
    }
  
}
