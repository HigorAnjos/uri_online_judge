#include <iostream>
// calculo A ler pagina 118 exemplos 4, 2, 3
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
void lanca_virus (char **matriz, int N, int M, int i, int j, int dias, int cont_dias = 0)
{
	
	if(cont_dias == dias)
	{
		return;
	}
	if (posicao_valida(N,M, i-1, j))
	{
		if(matriz[i-1][j] == '#')
		{
			matriz[i-1][j] = '+';
			//lanca_virus(matriz, N, M, i-1, j, dias, cont_dias+1);
		}
		if(matriz[i-1][j] == '+')
		{
			lanca_virus(matriz, N, M, i-1, j, dias, cont_dias+1);
		}
		
	}
	if (posicao_valida(N,M, i, j+1))
	{
		if(matriz[i][j+1] == '#')
		{
			matriz[i][j+1] = '+';
			//lanca_virus(matriz, N, M, i, j+1, dias, cont_dias+1);
		}
		if(matriz[i][j+1] == '+')
		{
			lanca_virus(matriz, N, M, i, j+1, dias, cont_dias+1);
		}
		
	}
	if (posicao_valida(N,M, i+1, j))
	{
		if(matriz[i+1][j] == '#')
		{
			matriz[i+1][j] = '+';
			//lanca_virus(matriz, N, M, i+1, j, dias, cont_dias+1);
		}
		if(matriz[i+1][j] == '+')
		{
			lanca_virus(matriz, N, M, i+1, j, dias, cont_dias+1);
		}
		
	}
	if (posicao_valida(N,M, i, j-1))
	{
		if(matriz[i][j-1] == '#')
		{
			matriz[i][j-1] = '+';
			//lanca_virus(matriz, N, M, i, j-1, dias, cont_dias+1);
		}
		if(matriz[i][j-1] == '+')
		{
			lanca_virus(matriz, N, M, i, j-1, dias, cont_dias+1);
		}
		
	}
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
		cout<<"Dia "<<dias;
		
		cout<<"Matriz \n";
		
		for(i=0; i<N; i++)
		{
			for (j=0; j<M; j++)
			{
				cout<<matriz[i][j]<<" ";
			}
			cout<<"\n";
		}
		
		
		Matriz_copy(matriz_anterior, matriz, N, M);
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
			{
				if (matriz[i][j] == '@')
				{
					cout<<"D: " << dias;
					lanca_virus(matriz, N, M, i, j, dias);
				}
			}
			
		}
		
		
	}
		
	if(tem_hegiteg(matriz, N, M))
	{
		return -1;
	}
	
	// desalocar o espaco dinamico
	return dias-1;
	
}


int main()
{
	int N, M, i=0, j=0;
	
	cin>>N>>M;
	

	
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
	
	

	
	
	cout<< aumentado_area_infectada(Matx, N, M);
	
	// desalocar o espaco dinamico
}
