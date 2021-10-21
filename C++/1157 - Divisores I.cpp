#include <iostream>
using namespace std;
int main()
{

	int N;
	std::cin>>N;
	
	
	for (int i=1; N>=i; i++)
	{
		if((N%i==0))
		{
			cout<<i<<endl;
		}
	}
		
}
