#include <bits/stdc++.h>
using namespace std;
int main ()
{
	int k=12, i, j, l=0;
	double Mat[k][k], som=0;
	char op;
	
	cin>>op;
	
	for (i=0; i<k; i++)
	{
		for (j=0; j<k; j++)
		{
			cin>>Mat[i][j];
		}
	}
	
	for (i=0; i<(k/2)-1; i++)
		{
			for (j=i+1; j<(k-1)-i; j++)
			{
				som+=Mat[i][j];
				l++;
			}
		}
	
	if (op=='S')
	{
		
		cout<<fixed<<setprecision (1)<<som<<endl;
	}
	if (op=='M')
	{
		cout<<fixed<<setprecision (1)<<som/l<<endl;
	}
}
