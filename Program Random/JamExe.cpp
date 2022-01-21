#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	cout << "\tProgram Menghitung Jam Virtual \n";
	cout << "--------------------------------------" <<endl;
	int jam,detik,menit,sisa;
	cout << "Masukkan detik yang mau dihitung : ";
	cin >> detik;
	
	cout << "Hasil Konversi waktu satuan : " <<endl;
	jam = detik / 3600;
	sisa = detik % 3600;
	menit = sisa / 60;
	detik = sisa % 60;
	
	cout <<"Jam \t: " <<jam <<endl; 
	cout <<"Menit \t: " <<menit <<endl;
	cout <<"Detik \t: " <<detik <<endl;
	return 0;
}

