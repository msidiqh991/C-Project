#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char nik[55],berlaku[22];
	char nama[45],ttg[54];
	char jk[33],gol[33];
	char alamat[70];
	char agama[33],status[33];
	char pekerjaan[33];
	char kewarga[33];
	char masa[33];
	
	cout << "\tMasukkan Data \n" <<endl;
	cout<<"NIK\t\t: "; 
	cin>>(nik);
	cout<<"Nama Lengkap\t: "; 
	cin>>(nama);
	fflush(stdin);
	cout<<"TTL\t\t: "; 
	cin>>(ttg);
	fflush(stdin);
	cout<<"Jenis Kelamin\t: "; 
	cin>>(jk);
	fflush(stdin);
	cout<<"Gol.Darah\t: ";
	cin>>(gol);
	fflush(stdin);
	cout<<"Alamat\t\t: "; 
	cin>>alamat;
	fflush(stdin);
	cout<<"Agama\t\t: "; 
	cin>>agama;
	fflush(stdin);
	cout<<"Status Kawin\t: "; 
	cin>>status;
	fflush(stdin);
	cout<<"Pekerjaan\t: "; 
	cin>>pekerjaan;
	fflush(stdin);
	cout<<"Kewarganegaraan : ";
	cin>>(kewarga);
	fflush(stdin);
	cout<<"Berlaku Hingga\t: "; 
	cin>>(masa);
	fflush(stdin);
	
	cout <<endl<<endl;
	cout<<"\t\t\tPROVINSI DKI JAKARTA\n";
	cout<<"\t\t\t   JAKARTA TIMUR \n";
	cout<<"\t\t---------------------------------\n";
	cout << "NIK \t\t: " <<nik <<endl;
	cout << "Nama \t\t: " <<nama <<endl;
	cout << "Tempat/Tgl lahir: " <<ttg <<endl;
	cout << "Jenis kelamin \t: " <<jk <<endl;
	cout << "Alamat \t\t: " <<alamat <<endl;
	cout << "Agama \t\t: " <<agama <<endl;
	cout << "Status Kawin \t: " <<status <<endl;
	cout << "Pekerjaan \t: " <<pekerjaan <<endl;
	cout << "Kewarganegaraan : " <<kewarga <<endl;
	cout << "Berlaku hingga  : " <<masa <<endl;
	return 0;

}
