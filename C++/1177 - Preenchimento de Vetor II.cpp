#include <iostream>
using namespace std;
int main()
{
	int N=1000,X, i, j;
	int vet[N];
	
	cin>>X;
	
	for (i=0 , j=0; i<N; i++,j++)
	{
		if (j==X)
		{
			j=0;
		}
		vet[i]=j;
	}
	for (i=0; i<N; i++)
	{
		cout<<"N["<<i<<"] = "<<vet[i]<<endl;
	}
	
}
