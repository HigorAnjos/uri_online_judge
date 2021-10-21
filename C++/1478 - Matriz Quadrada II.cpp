#include <stdio.h>
	#include <iostream>
	using namespace std;
	int main ()
	{
		int k=12, i, j, l=0;
		
		
		cin>>k;
		
		while(k!=0)
		{
			int Mat[k][k];
			
			for(i=0; i<k; i++)
			{
				Mat[i][i]=1;
			}
			
			for(l=1; l<k; l++)
			{
				for(j=l, i=0; i<k-l; j++, i++)
				{
					Mat[i][j]=l+1;
					Mat[j][i]=l+1;
				}
			}
			
			for(i=0;i<k;i++)
{ 
	for(j=0;j<k;j++)
	{ 
		if(j==0) printf("%3d",Mat[i][j]); 
		else printf(" %3d",Mat[i][j]); 
	} 
	printf("\n"); 
} printf("\n");
			
			cin>>k;
		}
		
		
	}
