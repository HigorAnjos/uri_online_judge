#include <iostream>
using namespace std;
int main ()
{
	int N=15, v=5, Num=0, i=0, j=0, k=0, l=0;
	int vetA[v], vetB[v], vetN[N];
	
	
	for (i=0; i<N; i++)
	{
		cin>>Num;
		
        if( Num%2==0)
		{
			vetA[j]=Num;
			j++;
		}
		
		if(Num%2!=0)
		{
			vetB[k]=Num;
			k++;
		}
		if (j==v)
		{
			for(l=0; l<v; l++)
			{
				cout<<"par["<<l<<"] = "<<vetA[l]<<endl;
			}
			j=0;
		}
		
		if (k==v)
		{
			for(l=0; l<v; l++)
			{
				cout<<"impar["<<l<<"] = "<<vetB[l]<<endl;
			}
			k=0;
		}
		
	}
	
	for(l=0; l<k; l++)
	{
		cout<<"impar["<<l<<"] = "<<vetB[l]<<endl;
		
	}
	
	for(l=0; l<j; l++)
	{
		cout<<"par["<<l<<"] = "<<vetA[l]<<endl;
		
	}
	
	
	
}
