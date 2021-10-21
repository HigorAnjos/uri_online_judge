	#include <bits/stdc++.h>
	using namespace std;
	
	float media(float A,float B)
	{
		return (B*100)/A;
	}
	
	int main ()
	{
			int i, j, l, k;
			float SMat[2][3]{0},Mat[2][3];
			cin>>i;
			string nome;
			
			
			for (j=0;j<i; j++)
			{
				cin>>nome;
				
				
				for(k=0; k<2; k++)
				{
					for(l=0; l<3; l++)
					{
						cin>>Mat[k][l];
						SMat[k][l]+=Mat[k][l];
					}
				}
						
				
			}
			
			
			cout<<"Pontos de Saque: "<<fixed << setprecision(2)<< media(SMat[0][0], SMat[1][0]) <<" %."<<endl; 
			cout<<"Pontos de Bloqueio: "<<fixed << setprecision(2)<< media(SMat[0][1], SMat[1][1]) <<" %."<<endl;
			cout<<"Pontos de Ataque: "<< fixed << setprecision(2)<< media(SMat[0][2], SMat[1][2]) <<" %."<<endl;
			
			
	}
