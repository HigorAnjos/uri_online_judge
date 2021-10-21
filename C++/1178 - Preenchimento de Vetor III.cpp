#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N=100, i=0;
	double vet[N], x;
	
		cin>>x;
	vet[i]=x;
	for (i=1; i<N; i++)
	{
		vet[i]=vet[i-1]/2;
	}
	
	for (i=0 ; i<N; i++)
	{
			cout<<"N["<<i<<"] = "<<fixed << setprecision (4) <<vet[i]<<endl;
		
	}
	
}
