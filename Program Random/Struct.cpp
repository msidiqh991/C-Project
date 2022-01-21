#include <iostream>
#include <string.h>
using namespace std;

struct data{
	string nama;
	int nim;
	string jurusan;
};

struct perjenjangan {
	string univ;
	string nama;
};

struct favourite {
	string makanan;
	string hobi;
	string tempat;
};

struct math {
	string name;
	int a,b;
};

struct pilihanganda {
	int x;
};

struct nilaiakhir {
	string nama;
	int nim;
	int uts, uas;
};

struct struktur{
	string kode;
	string nama;
	string beli;
	string jual;
	int stock;
};

int main() {
	struktur stc;
	stc.kode = "123";
	stc.nama = "Buku tulis";
	stc.beli = "1500";
	stc.jual = "2500";
	stc.stock = 12;
	
	cout << "Kode : " <<stc.kode <<endl;
	cout << "Nama : " <<stc.nama <<endl;
	cout << "Harga beli : " <<stc.beli <<endl;
	cout << "Harga jual : " <<stc.jual <<endl;
	cout << "Stock tersedia : " <<stc.stock;
}
	
//	#1
//	data data;
//	data.nama = "Sidiq";
//	data.nim = 2100018399;
//	data.jurusan = "TIF";
//	cout << "Biodata \n";
//	cout <<"Nama : " <<data.nama<<endl;
//	cout <<"Nim : " <<data.nim<<endl;
//	cout <<"Jurusan : " <<data.jurusan;
//	return 0;
//	
////	#2
//	perjenjangan jjg;
//	jjg.nama = "Sidiq";
//	jjg.univ = "Universitas Ahmad Dahlan";
//	cout << "Halo, " <<jjg.nama<<endl;
//	cout << "Selamat kamu telah terdaftar di \n"
//		 << jjg.univ <<" pada tahun 2021";
//		 
////	#3
//	favourite fav;
//	cout << "Silahkan masukkan hal yang disukai \n";
//	cout << "Makanan : ";
//	cin >> fav.makanan;
//	cout << "Hobi : ";
//	cin >> fav.hobi;
//	cout << "Tempat : ";
//	cin >> fav.tempat;
//	cout <<endl << "Data menunjukkan : \n";
//	cout << "Makanan Favoritmu : " <<fav.makanan <<endl;
//	cout << "Hobimu : " <<fav.hobi <<endl;
//	cout << "Tempat Favoritmu : " <<fav.tempat;
////	
////	#4
//	// Pertambahan 
//	int all;
//	math sum;
//	cout <<"Project Pertambahan bilangan \n";
//	cout <<"Masukkan angka ke-1 : ";
//	cin >> sum.a;
//	cout << "Masukkan angka ke-2 : ";
//	cin >> sum.b;
//	all = sum.a + sum.b;
//	cout << "Penjumlahan " << sum.a <<" + " 
//		 <<sum.b <<" = " <<all;
//	
////	#5
//	// Pengurangan 
//	int rumus;
//	math min;
//	cout <<"Project Pengurangan 2 bilangan \n";
//	cout <<"Masukkan angka ke-1 : ";
//	cin >> min.a;
//	cout << "Masukkan angka ke-2 : ";
//	cin >> min.b;
//	rumus = min.a - min.b;
//	cout << "Pengurangan " << min.a <<" - " 
//		 <<min.b <<" = " <<rumus;
//	
////	#6
//	// PG
//	pilihanganda pg;
//	cout << "Program Pemilihan Struct \n";
//	cout << "1. Youtube | 2. Instagram \n";
//	cout << "3. Twitter | 4. LinkedIn \n";
//	cout << "Pilihanmu : ";
//	cin >> pg.x;
//	
//	if(pg.x == 1) {
//		cout << "Program pilihanmu adalah Youtube";
//	} else if(pg.x == 2) {
//		cout << "Program pilihanmu adalah Instagram";
//	} else if(pg.x == 3) {
//		cout << "Program pilihanmu adalah Twitter";
//	} else if(pg.x == 4) {
//		cout << "Program pilihanmu adalah LinkedIn";
//	} else {
//		cout << "Data yang anda inginkan tidak tersedia";
//	}
	
//	#7
	// Nilai Akhir
//	nilaiakhir na;
//	int total;
//	cout <<"Masukkan nama : ";
//	cin >> na.nama;
//	cout << "Masukkan NIM : ";
//	cin >> na.nim;
//	cout << "Nilai UTS : ";
//	cin >> na.uts;
//	cout << "Nilai UAS : ";
//	cin >> na.uas;
//	cout <<endl;
//	cout << "Nama : " << na.nama 
//		<< ", \nNIM : " << na.nim;
//	total = (na.uts + na.uas) * 0.5;
//	cout <<"\nJadi, nilai akhirmu adalah " <<total; 