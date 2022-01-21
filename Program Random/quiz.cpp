#include <iostream>																
#include <string.h>
#include <conio.h>
#include <iomanip>
using namespace std;

struct barang {
	char kode[12];
	string namabarang;
	int unit;
	long harga;
	char tanggal[10];
};	

struct datatransaksi{
	int nota,trx;
	barang *brg;
};	
	datatransaksi dt;

long jumlah(int a) {
	long jml;
	jml = dt.brg[a].harga * dt.brg[a].unit;
	return jml;
}

long total() {
	long ttl;
	ttl=0;
	for(int i=0; i<dt.trx; i++){
		ttl = ttl + jumlah(i);
	}
	return ttl;
}

datatransaksi dataproduk() {
	char kode[12];
	string nama;
	long hargabeli,hargajual,diskon,stok;
}

int main() {
	struct datatransaksi dt;
	cout <<"\t===== Program Data Barang =====\n\n";
	cout <<"No. Nota : ";
	cin >> dt.nota;
	cout <<"Jumlah Transaksi : ";
	cin >> dt.trx;
	dt.brg = new barang[dt.trx];
	for(int i=0; i<dt.trx; i++){
		cout <<endl <<"Transaksi ke-"<<i+1<<endl;
		cout <<"Tanggal : ";
		cin >> dt.brg[i].tanggal;
		cout <<"Kode Barang : ";
		cin >> dt.brg[i].kode;
		cout <<"Nama Barang : ";
		cin >> dt.brg[i].namabarang;
		cout <<"Harga Satuan : ";
		cin >> dt.brg[i].harga;
		cout <<"Jumlah Unit : ";
		cin >> dt.brg[i].unit;
	}
	
	system("cls");
	cout <<"\t\t\t==== Informasi Barang ====\n\n";
	cout <<"Tanggal\t   Kode Barang\t Nama Barang\t Harga Satuan\t Jumlah Unit\n";
	cout <<"=======\t   ===========\t ===========\t ============\t ===========\n";
	for(int i=0; i<dt.trx; i++){
		cout <<dt.brg[i].tanggal <<" \t " <<dt.brg[i].kode <<"\t\t "
		<<dt.brg[i].namabarang <<"\t\t Rp. " <<dt.brg[i].harga <<"\t  "
		<<dt.brg[i].unit <<endl;
	}
	cout <<"===================================================================\n";
	cout <<"\t\t\t\t\tTotal Harga : Rp. " <<total() <<endl;
	
}												
