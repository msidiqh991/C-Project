#include <iostream>
 
using namespace std;
 
int main()
{
   int j=1, m, d;
	
   do {
	 m= j * 60;
       	 d=m*60;
	 cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
	 j +=1;	
   } while (j <=3);
}
