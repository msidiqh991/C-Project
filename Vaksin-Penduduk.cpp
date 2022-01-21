#include<iostream>
using namespace std;

struct datapenduduk {
	int nik[12], usia[55];
	char vaksin[4];
	string nama[25];
};	datapenduduk dp;

main() {
	int x;
	cout << "Program vaksin \n";
	cout << "input banyaknya data : ";
	cin >> x;
	cout <<endl;
	for(int i=0; i<x; i++) {
		cout <<"Data penduduk ke-" << i+1 <<endl;
		cout << "NIK : ";
		cin >> dp.nik[i];
		cout << "Nama : ";
		cin >> dp.nama[i];
		cout << "Usia : ";
		cin >> dp.usia[i];
		cout << "Tahap Vaksin [1/2/Belum(-)] : ";
		cin >> dp.vaksin[i];
		cout <<endl;
	}
	cout <<"Data menampilkan \n";
	for(int i=0; i<x; i++) {
		if(dp.vaksin[i] == '1') {
			cout <<"Data ke-" << i+1 <<endl;
			cout << "NIK : " <<dp.nik[i] <<endl;
			cout << "Nama : " <<dp.nama[i] <<endl;
			cout << "Usia : " <<dp.usia[i] <<endl;
			cout << "Telah melakukan Vaksin Tahap 1" <<endl;
		} else if(dp.vaksin[i] == '2') {
			cout <<"Data ke-" << i+1 <<endl;
			cout << "NIK : " <<dp.nik[i] <<endl;
			cout << "Nama : " <<dp.nama[i] <<endl;
			cout << "Usia : " <<dp.usia[i] <<endl;
			cout << "Telah melakukan Vaksin Tahap 2 " <<endl;
		} else if(dp.vaksin[i] == '-'){
			cout <<"Data ke-" << i+1 <<endl;
			cout << "Nama : " <<dp.nama[i] <<endl;
			cout << "Belum melakukan vaksinasi, Segara melapor!" <<endl;
		}
		cout <<endl;
	}
}
