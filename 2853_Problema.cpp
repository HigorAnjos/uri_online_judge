#include <iostream>

using namespace std;
bool posicao_valida(int Linha, int Coluna, int i, int j)
{
	if (i >= 0 && i < Linha && j >= 0 && j < Coluna)
	{
		return true;
	}
	return false;
	
}
bool tem_hegiteg(char **matriz, int N, int M)
{
	int i, j;
	
	for (i=0; i<N; i++)
	{
		for(j=0; j<M; j++)
		{
			if(matriz[i][j] == '#')
			{
				return true;
			}
		}
	}
	return false;
}
void indo_na_direcao (char **matriz, int N, int M, int i, int j, int dias, int cont_dias = 0, int chave_i=0, int chave_j=0)
{
	
	if(dias == cont_dias)
	{
		return;
		
	}
	if(posicao_valida(N, M, (i+chave_i), (j+chave_j)))
	{
		if(matriz[i+chave_i][j+chave_j] == '#')
		{
			 matriz[i+chave_i][j+chave_j] = '+';
			 return;
		}
		if(matriz[i+chave_i][j+chave_j] == '+')
		{
			indo_na_direcao (matriz,N, M, (i+chave_i), (j+chave_j), dias, cont_dias+1, chave_i, chave_j);
		}
	}
}
void lanca_virus (char **matriz, int N, int M, int i, int j, int dias, int cont_dias = 0)
{
	
	//acima 
	indo_na_direcao (matriz, N, M, i, j, dias, cont_dias, -1, 0);
	
	//direita
	indo_na_direcao (matriz ,N, M, i, j, dias, cont_dias, 0, 1);
	
	//abaixo
	indo_na_direcao (matriz ,N, M, i, j, dias, cont_dias, 1, 0);
	
	//esquerda
	indo_na_direcao (matriz ,N, M, i, j, dias, cont_dias, 0, -1);
	
	
}
bool Matriz_sao_diferentes (char **matriz_a, char **matriz_b, int N, int M)
{
	// 1- sim
	// 0- nao
	int i, j;
	for (i=0; i < N; i++)
	{
		for (j=0; j<M; j++)
		{
			if (matriz_a[i][j] != matriz_b[i][j])
			{
				return true;
			}
		}
	}
	return false;
}
void Matriz_copy(char **destino, char **matriz, int L, int C)
{
	int i, j;
	for (i=0; i < L; i++)
	{
		for(j=0; j < C; j++)
		{
			destino[i][j] = matriz[i][j];
		}
	}
}
int aumentado_area_infectada (char **matriz, int N, int M)
{	
	int i, j, dias;
	
	char * matriz_anterior[N];
	for (i=0; i < N; i++)
	{
		matriz_anterior[i] = new char [M];
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			matriz_anterior[i][j] = '0';
			
		}
	}

	
	for(dias=1; Matriz_sao_diferentes(matriz, matriz_anterior, N, M); dias++)
	{
		
		Matriz_copy(matriz_anterior, matriz, N, M);
		
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (matriz[i][j] == '@')
				{
					//cout<<"D: " << dias;
					lanca_virus(matriz, N, M, i, j, dias);
				}
			}
			
		}
		
		
		
	}
	cout<<"Matriz Final\n";
		
		for(i=0; i<N; i++)
		{
			for (j=0; j<M; j++)
			{
				cout<<matriz[i][j]<<" ";
			}
			cout<<"\n";
		}
			
		
	if(tem_hegiteg(matriz, N, M))
	{
		return -1;
	}
	
	
	return dias-2;
	
}


int main()
{
	int N, M, i=0, j=0;
	
	cin>>N>>M;
	
	
if(N>0 && M>0)
{
		char * Matx[N] ; 

		for (i = 0; i < N; i++)
		{
			Matx[i] =  new char [M];
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				cin>>Matx[i][j];
				
			}
		}
		cout<< aumentado_area_infectada(Matx, N, M) <<"\n";
	
}	

}
