#include <iostream>
#include <fstream>
using namespace std;

struct asset {
	int answer, no;
	int harga[20], qty[15];
	string brg[25];
	float satuan[10], total;
};	asset as;

void opsi1(){
	cout <<"\nJumlah barang yang dibeli : ";
	cin >> as.no;
	for(int i=0; i<as.no; i++){
	cout <<"\nNo. barang ke-"<<i+1;
	cout <<"\nInput nama barang : ";
	cin >> as.brg[i];
	cout <<"Kuantitas jml barang : ";
	cin >> as.qty[i];
	cout <<"Harga satuan : ";
	cin >> as.harga[i];
	as.satuan[i] = as.harga[i] * as.qty[i];
	cout <<"Jumlah harga : Rp." <<as.satuan[i];
	as.total = as.total + as.satuan[i];
	cout <<endl<<endl;
	}
}

void total() {
	cout <<"\nMenghitung Total Keseluruhan barang \n";
	cout <<"Total keseluruhan harga : Rp." <<as.total;
	cout <<endl<<endl;
}

void opening() {
	cout <<"------------------------" <<endl;
	cout <<"1. Membeli barang" <<endl;
	cout <<"2. Hitung total & Keluar" <<endl;
	cout <<"------------------------" <<endl;
	cout <<"\tPilihanmu : ";
	cin >> as.answer;
} 

int main(){
	ofstream pFile;
	pFile.open("myfile.txt", ios::app);
	const int MAX = 120;
	char OTP[MAX+1];
	cout <<"Program kasir sederhana" <<endl; 
	awal : while(true){
		opening();
		if(as.answer == 1){
			opsi1();
		} else if(as.answer == 2) {
			total();
		if(!pFile.fail()) {
			pFile <<"--------------------" <<endl;
			pFile <<"Struk Pembelanjaan" <<endl;
			pFile <<"--------------------" <<endl;
			for(int i=0; i<as.no; i++){
				pFile <<"No. barang ke-"<<i+1;
				pFile <<"\nNama barang \t: " <<as.brg[i] <<endl;
				pFile <<"Jumlah barang \t: " <<as.qty[i] <<endl;
				pFile <<"Harga satuan  \t: " <<as.harga[i] <<endl;
				pFile <<"Jumlah harga  \t: Rp." <<as.satuan[i];
				pFile <<endl<<endl;
			}
				pFile <<"-----------------------------------\n";
				pFile <<"\tTotal harga   : Rp." <<as.total <<endl;
				pFile.close();
				return 0;
		} else {
			cout <<"File Tidak ditemukan";
		}
	}
		goto awal;
		pFile.close();
	}
}
