#include <iostream>
using namespace std;
int main()
{
	int N=20,i,j;
	int vet[N], aux;
	
	for (i=0; i<N; i++)
	{
		cin>>vet[i];
	}
	for(i=0, j=N-1; i<N/2; i++, j--)
	{
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
	for (i=0; i<N; i++)
	{
		cout<<"N["<<i<<"] = "<<vet[i]<<endl;
	}
	
}
