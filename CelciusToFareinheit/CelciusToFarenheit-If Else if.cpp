#include<iostream>
using namespace std;
 main()
{
   float c,f,r,k;
   int input;
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
    	
   cout<<"Program Konversi Suhu :\n-----------------------\n";
   cout<<"[1] Konversi Celcius\n";
   cout<<"[2] Konversi Reamur\n";
   cout<<"[3] Konversi Fahrenheit\n";
   cout<<"[4] Konversi Kelvin\n\n";
   cout<<"Masukkan Pilihan anda : ";
   cin>>input;
   cout<<endl;

   if (input==1)
   {
        cout<<"Masukan Nilai Suhu Celcius = ";
		cin>>c;
        cout<<fah <<"\tFahrenheit\n";
        cout<<rea <<"\tReamur\n";
        cout<<kel <<"\tKelvin\n";
        
   } else if(input==2){
      	cout<<"Masukan Nilai Suhu Reamur = ";
		cin>>r;
        cout<<ciu <<"\tCelcius\n";
        cout<<heit <<"\tFahrenheit\n";
        cout<<vin <<"\tKelvin\n";
    } else if(input==3) {
    	cout<<"Masukan Nilai Suhu Fahrenheit = ";
		cin>>f;
        cout<<ac<<"\tCelcius\n";
        cout<<bk<<"\tKelvin\n";
        cout<<cr<<"\tReamur\n";
	} else if(input==4) {
		cout<<" Masukan Nilai Kelvin = ";
		cin>>k;
        cout<<cc<<"\tCelcius\n";
        cout<<ff<<"\tFahrenheit\n";
        cout<<rr<<"\tReamur\n";
	} else {
    	cout<<"Invalid ... Ada yang salah!";
    }
}

