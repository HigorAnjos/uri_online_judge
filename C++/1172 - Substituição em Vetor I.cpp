#include <iostream>
using namespace std;
int main ()
{
	int i=0;
	float vet[10];
	
	for (i=0; i<10; i++)
	{	
		cin>>vet[i];
	}
	for (i=0; i<10; i++)
	{
		if(vet[i]<1)
		{
			vet[i]=1;
		}
	}
	
	for (i=0; i<10; i++)
	{	
		cout<<"X["<<i<<"] = "<<vet[i]<<endl;
	}
}
