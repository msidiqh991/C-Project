#include <iostream>
//#include <stdlib.h>
using namespace std;
int main()
{
    start:
    int c,f,k,r;
						//Konversi Ke Celcius
    int rea,fah,kel;
    	fah = 9*c/5+32;
    	rea = 4*c/5;
    	kel = c+273;
  						//Konversi Ke Reamur
    int ciu,vin,heit;
    	ciu = 5*r/4;
    	vin = r*4/5+273;
    	heit = r*9/4+32;
        
    				  	//Konversi Ke Fahreinheit
    int ac,bk,cr;
    	ac = (f-32)/1.8;
    	bk = (f+460)/1.4;
    	cr = (4-32)/2.25;

						//Konversi Ke Kelvin
    int cc,rr,ff;
    	cc=k-273;
    	ff=k*1.8-460;
    	rr=(k-273)*0.8;
    	
    int choose;
   	cout<<"Program Prototype Konversi Suhu : \n---------------------------------\n";
    cout<<"1. Konversi Suhu Celcius"<<endl;
    cout<<"2. Konversi Suhu Reamur"<<endl;
    cout<<"3. Konversi Suhu Fahrenheit"<<endl;
    cout<<"4. Konversi Suhu Kelvin"<<endl;
    cout<<"\nMasukan Pilihan kamu : ";
	cin >> choose;
    switch(choose) {
        case 1:
            cout<<"Masukan Nilai Celcius = ";
			cin>>c;
            cout<<fah<<"\tFahrenheit\n";
            cout<<rea<<"\tReamur\n";
            cout<<kel<<"\tKelvin\n";
            break;
        case 2: 
			cout<<"Masukan Nilai Reamur = ";
			cin>>r;
            cout<<ciu<<"\tCelcius\n";
            cout<<heit<<"\tFahrenheit\n";
            cout<<vin<<"\tKelvin\n";
            break;
        case 3:
            cout<<"Masukan Nilai Fahrenheit = ";
			cin>>f;
            cout<<ac<<"\tCelcius\n";
        	cout<<bk<<"\tKelvin\n";
            cout<<cr<<"\tReamur\n";
            break;
        case 4:
            cout<<" Masukan Nilai Kelvin = ";
			cin>>k;
            cout<<cc<<"\tCelcius\n";
            cout<<ff<<"\tFahrenheit\n";
            cout<<rr<<"\tReamur\n";
            break;
    default:
    cout<<" Anda Salah memasukan Pilihan, coba lagi\n";
    break;
    }
return 0;                      
}
