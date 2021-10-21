#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int N, soma=0, i=0;
	float Media=0;
	cin>>N;
	
	while( N>=0 )
	{
		soma+=N;
		i++;
		cin>>N;
			
	}
	
	Media=(float)soma/i;
	cout<< fixed << setprecision(2) <<Media<<endl;
	
	
	
}
