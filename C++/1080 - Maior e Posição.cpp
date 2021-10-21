#include <iostream>
using namespace std;
int main()
{

	int i, pos, N1=0,N=0;
	for(i=1; i<=100; i++)
	{
		std::cin>>N;
		
		if(N>N1)
		{
			N1=N;
			pos = i;
		}
	};
	std::cout<<N1<<endl;
	std::cout<<pos<<endl;
		
		
}
