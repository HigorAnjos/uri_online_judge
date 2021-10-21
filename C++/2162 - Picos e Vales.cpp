#include <iostream>
using namespace std;
int main ()
{
	// ler qtd de elementos no vetor
	// verificar se o maiorpossui doi elementos menores do lado
	
	int N, i=1, bo=-1;
	
	cin>>N;
	
	int vet[N];

	for (i=0; i<N; i++)
	{
		cin>>vet[i];
	}
	
	for(i=0; i<N-1 ; i++)
	{
		if (vet[i]==vet[i+1])
		{
			cout<<0<<endl;
			return 0;
		}
		if (vet[i]>vet[i+1])
		{
			if (bo==1)
			{
				cout<<0<<endl;
				return 0;
			}
			bo=1;
			
			}else{
					if (bo==0)
					{
						cout<<0<<endl;
						return 0;
					}
					bo=0;
				  }
				
	}
	cout<<1<<endl;
	
}
