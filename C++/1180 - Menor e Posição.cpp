#include <iostream>
using namespace std;
int main ()
{
		int N, i, pos, Menor=9999;
		cin>>N;
		int vet[N];
		for(i=0; i<N; i++)
		{
			cin>>vet[i];
		}
		for(i=0; i<N; i++)
		{
			if(vet[i] < Menor)
			{
				Menor=vet[i];
				pos=i;
			}
		}
		cout<<"Menor valor: "<<Menor<<endl;
		cout<<"Posicao: "<<pos<<endl;
}
