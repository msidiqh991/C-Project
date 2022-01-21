#include <iostream>
using namespace std;
int main() {
	cout<<"\tProgram Konversi Suhu" <<endl;
	cout<<"\t---------------------" <<endl;
	float c, k, f, r;
	cout<<"Masukan Suhu (Celsius) : ";
	cin>>c;
	k = c + 273.15;
	f =(c * 1.8) + 32;
	r = c * 0.8;
	cout<<endl;
	cout<<"Hasil Konversi Suhu dari Celsius ke :"<<endl;
	cout<<"Kelvin \t\t: "<<k <<endl;
	cout<<"Fahrenheit \t: "<<f <<endl;
	cout<<"Reamur \t: "<<r <<endl;
	return 0;
}

