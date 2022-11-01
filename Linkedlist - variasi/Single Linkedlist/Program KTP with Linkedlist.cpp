#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct sample{
 char nik[18], nama[80], goldar[3];
 int tgl, bulan, tahun;
 char pekerjaan[35], alamat[45];
 
 struct sample *next;
} *baru, *awal=NULL, *akhir=NULL, *hapus, *bantu;

class myKTP{
	public:
		void opsi();
		void pilih();
		void newdata();
		void tambah_belakang();
		void hapus_belakang();	
		void tampil();
		
	private:
		int x;
		sample mhs;	
};

void myKTP::opsi(){
	do {
  	system("cls");
  	cout << "MENU - LINKEDLIST" << endl;
  	cout << "[1] Tambah Belakang" <<endl;
  	cout << "[2] Hapus Belakang" <<endl;
  	cout << "[3] Tampil" <<endl;
  	cout << "[4] Exit" <<endl<<endl;
  	cout << "Pilihan anda: ";
 	cin >> x;
 	pilih();
 	} while (x!=4);
 		exit(1);
}

void myKTP::pilih(){
 	if(x == 1){
  		tambah_belakang();
 	} else if(x == 2){
  		hapus_belakang();
 	} else if(x == 3){
  		tampil();
 	}
}

void myKTP::newdata(){
 	baru = new sample;
 	cout << "Input NIK : ";
 	cin >> baru->nik;
 	cout << "Input Nama : ";
 	cin >>baru->nama;
	cout << "Input Tanggal lahir, Bulan, Tahun : " <<endl;
	cin >> baru->tgl;
	cin >> baru->bulan;
	cin >> baru->tahun;
	cout << "Input Golongan darah : ";
 	cin >>baru->goldar;
 	cout << "Input Pekerjaan : ";
 	cin >>baru->pekerjaan;
 	cout << "Input Alamat : ";
 	cin >>baru->alamat;
	baru->next=NULL;
}

void myKTP::tambah_belakang(){
 	newdata();
 	if(awal==NULL){
  		awal=baru;
 	} else { 
  		akhir->next=baru;
 	}
 	akhir=baru;
 	akhir->next=NULL;
 	cout << "\nData telah ditambahkan ...";
 	getch();
}

void myKTP::hapus_belakang(){
  	if(awal!=NULL){
  		if(awal==NULL){
  			free(awal);
  			awal = NULL;
  			cout << "Data tidak ada ...";	
	} else {
		bantu = awal;
  		while(bantu->next != akhir){
   			bantu = bantu->next;
		}
			free(akhir);
			akhir = bantu;
			akhir -> next = NULL;
 		}	
	}
 	cout << "\nData berhasil dihapus ...";
 	getch();
}

void myKTP::tampil(){
 if(awal==NULL){
  	cout << "Kosong";
 } else{
  	bantu=awal;
	while(bantu!=NULL){
		cout << "--------------------------------------- \n";
   		cout << "NIK \t\t: " << bantu->nik <<endl;
   		cout << "Nama \t\t: " << bantu->nama <<endl;
   		cout << "TTL \t\t: " << bantu->tgl <<", " << bantu->bulan
   			 << ", " << bantu->tahun <<endl;
   		cout << "Golongan darah \t: " << bantu->goldar <<endl;
   		cout << "Pekerjaan \t: " << bantu->pekerjaan <<endl;
   		cout << "Alamat \t\t: " << bantu->alamat <<endl;
		cout << "--------------------------------------- \n";
   		bantu = bantu->next;
  		}
	}
 	getch();
}

int main(){
	myKTP na;
	na.opsi();
}
