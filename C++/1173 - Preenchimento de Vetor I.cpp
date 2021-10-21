#include <iostream>
using namespace std;
int main ()
{
	int V[10],i=0, N;
	
	cin>>N;
	V[i]=N;

	if (N<50)
	{
		cout<<"N["<<i<<"]"<<" = "<<V[i]<<endl;
		i++;	
		while (i<10)
		{
			
			V[i]=2*V[i-1];
			cout<<"N["<<i<<"]"<<" = "<<V[i]<<endl;	
			i++;	
		}
	}
		
}
