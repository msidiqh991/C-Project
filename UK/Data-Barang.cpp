#include <conio.h>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

struct barang {
   char namabrg[15], kode[12], tanggal[10];
   long hrgsatuan;
   int unit;
};	barang barang;

struct datatransaksi {
	int nota,trx;
	struct barang * d;
};
 	datatransaksi dt;
 	
datatransaksi dataproduk() {
	char kode[12], nama[25];
	long hargabeli,hargajual,stok;
}

long jumlah(int a) {
	long t;
	t = dt.d[a].hrgsatuan * dt.d[a].unit;
	return t;
}

long subjumlah() {
	long ttl;
 	ttl=0;
    for(int i=0; i<dt.trx; i++){
		ttl = ttl + jumlah(i);
	}
   return ttl;
}

long diskon(){
	long dis;
 	if (subjumlah()>100000) {
 		dis = subjumlah() * 0.20;
	} else if (subjumlah()>75000) {
		dis = subjumlah() * 0.10;
	} else {
		dis = 0;
	}
   return dis;
}

long total() {
	long ttl;
    ttl = subjumlah()-diskon();
    return ttl;
}

int main() {
	cout <<"\t===== Program Data Barang =====\n\n";
	cout <<"No. Nota : "; 
	cin >> dt.nota;
	cout <<"Jumlah transaksi : ";
	cin >> dt.trx;
	dt.d = new struct barang [dt.trx];
	for(int i=0; i<dt.trx; i++){
		cout<<endl;
		cout <<"Transaksi ke-"<<i+1<<endl;
		cout <<"Tanggal : "; 
		cin >> dt.d[i].tanggal;
		cout <<"Nama Barang : "; 
		cin >> dt.d[i].namabrg;
		cout <<"Kode Barang : "; 
		cin >> dt.d[i].kode;
		cout <<"Harga Satuan : ";
		cin >> dt.d[i].hrgsatuan;
		cout <<"Jumlah Unit : "; 
		cin >> dt.d[i].unit;
	}
	
	system ("cls");
	cout <<"\t\t\t==== Informasi Barang ====\n\n";
	cout <<"Tanggal\t   Kode Barang\t Nama Barang\t Harga Satuan\t Jumlah Unit\n";
	cout <<"=======\t   ===========\t ===========\t ============\t ===========\n";
   
 	for(int i=0; i<dt.trx; i++){
		cout <<dt.d[i].tanggal <<"\t   " <<dt.d[i].kode <<"\t\t " <<dt.d[i].namabrg <<"\t\t Rp. " <<dt.d[i].hrgsatuan <<"\t  "
		<<dt.d[i].unit <<endl;
    }
    cout <<"========================================================================"<<endl;
    char* check;
    int terbesar,terbanyak;
    terbesar = dt.d[0].hrgsatuan; 
    for(int z=0; z<dt.trx; z++){
    	if(dt.d[z].hrgsatuan > terbesar){
    		terbesar = dt.d[z].hrgsatuan;
    	}	
	}
	terbanyak = dt.d[0].unit;
	for(int y=0; y<dt.trx; y++){
		if(dt.d[y].unit < terbanyak) {
			terbanyak = dt.d[y].unit;
		}
		if(dt.d[y].unit == dt.d[y].unit)
			check = dt.d[y].kode;
	}
	cout <<"Data(Unit)  Penjualan Terbanyak  : " <<terbanyak <<", dengan kode barang : " <<check <<endl;
    cout <<"Data(Harga) Penjualan Terbesar  : " <<terbesar <<endl;
    cout <<"========================================================================"<<endl;
    cout <<"\t\t\t\t\t\t Jumlah     : Rp. "<<subjumlah()<<endl;
    cout <<"\t\t\t\t\t\t =======================\n";
    cout<<"\t\t\t\t\t\t Diskon      : Rp. "<<diskon()<<endl;
    cout<<"\t\t\t\t\t\t Total Harga : Rp. "<<total()<<endl;
}
