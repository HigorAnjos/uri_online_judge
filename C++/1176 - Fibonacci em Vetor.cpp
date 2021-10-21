#include <iostream>
using namespace std;
int main ()
{
	long long  i=0,a=0, l,b=1, c=0, N=0, termos;
	
	cin>>N;
	
	long long V[N];
	
	for (i=0; i<N; i++)
	{ 
		cin>>V[i]; 
	}
	
	
	for (i=0; i<N; i++)
	{
		
		if (V[i]==0)
		{
				cout<<"Fib("<<0<<") = "<< 0 <<endl;
		}else{
					
					if (V[i]==1)
					{	
						cout<<"Fib("<<1<<") = "<< 1 <<endl;
					
					}else{
				 
								  
						for (l=1; l<V[i]; l++)
						{
										c=a+b;
										a=b;
										b=c;
						}
								
						a=0;
						b=1;
						cout<<"Fib("<<V[i]<<") = "<< c <<endl;
					}
	}		
	
}
	
}
