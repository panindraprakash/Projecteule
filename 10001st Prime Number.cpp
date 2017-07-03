// 10001st Prime Number.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<conio.h>
void main()
{
	int lock=1,n=1,i,m,flag,a[10010],z=10001;
	while(lock <= z)
	{
		flag=0;
		n = n + 1;
		m =n / 2;
		for(i=2;i<=m;i++)
		{
			if(n % i== 0)
			{
				flag=1;
			}
			if(flag==1)
			break;
			
		}
		if(flag==0)
		{
			a[lock]=n;
		}
	}
	printf("THE %d PRIME NUMBER IS %d\n",z,a[z]);
}
	


