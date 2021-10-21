#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0;
    float som=0, Nota=0;
    while(i<2)
    {
        cin>>Nota;
       if (0<=Nota && Nota<=10)
       {
           i++;
           som+=Nota;
           
       }
       else{
           cout<<"nota invalida"<<endl;
       }
    }
    cout<<"media = "<<fixed << setprecision(2) <<som/2<<endl;
}



