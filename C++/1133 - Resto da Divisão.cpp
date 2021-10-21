#include <iostream>
using namespace std;
int main ()
{
	int N1, N2,i=0;
	
	cin>>N2;
	cin>>N1;
	
	if (N1>N2)
	{
		i=N2;
		i++;
		while(i<N1)
		{
			
			if(i%5==2||i%5==3)
			{
				cout<<i<<endl;
			}
			i++;
		}
	}else{
			i=N1;
			i++;
			while(i<N2)
			{
			
				if(i%5==2||i%5==3)
				{
					cout<<i<<endl;
				}
				i++;
			}
			
		  }
	
		
}
