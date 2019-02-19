#include<stdio.h>
int main()
{
	
	
	int n,TriangularNumber;
	
	for(n=5;n<=50;n+=5)
	{
		
	TriangularNumber=n*(n+1)/2;	
		printf(" %2dth TriangularNumber is :%d\n",n,TriangularNumber);
	}
	return 0;
	
}