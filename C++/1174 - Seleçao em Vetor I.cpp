#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N=100, i;
	float vet[N];
	
	
	
	for (i=0; i<N; i++)
	{
		cin>>vet[i];
	}
	
	for (i=0 ; i<N; i++)
	{
		if (vet[i]<=10)
		{
			cout<<"A["<<i<<"] = "<<fixed << setprecision (1) <<vet[i]<<endl;
		}
	}
	
}
