#include <bits/stdc++.h>
using namespace std;
int main ()
{
		int Nc, i=0;
		int k=12;
		float som=0;
		float X[k][k];
		char O;
		
		
		cin>>Nc;
		cin>>O;
		
		for ( i=0; i<k; i++)
		{
			for (int j=0; j<k; j++)
			{
				cin>>X[i][j];
			}
		}
		
		if (O=='M')
		{
			for( i=0; i<k; i++)
			{
				som+=X[i][Nc];
			}
			som=som/i;
			cout<< fixed << setprecision(1)<<(float)som<<endl;
		}
		if(O=='S')
		{ 
			for( i=0; i<k; i++)
			{
				som+=X[i][Nc];
			}
			cout<< fixed << setprecision(1)<<(float)som<<endl;
			
		}
		
	
}
