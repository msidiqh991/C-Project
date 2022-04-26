#include <iostream>
using namespace std;

long int Fak_rekursif(int n) {
long int rekursif;
	if(n <= 1) return(1);
	else {
		rekursif = n * Fak_rekursif(n-1);
		return(rekursif);
	}
}

long int Fak_iteratif(int n) {
	int hasil = 1;
	for(int x=1; x<=n; x++) {
		hasil *= x;
	}
	return hasil;
}

int main() {
	int n, pilihan;
	cout << "Masukkan nilai x : ";
	cin >> n ;
	cout << "-----------------------";
	cout << endl << "Silahkan pilih metode" <<endl;
	cout << "[1] Mode Iteratif" <<endl;
	cout << "[2] Mode Rekursif" <<endl;
	cout << "Tentukan pilian : ";
	cin >> pilihan;
	if(pilihan == 1) {
		cout << "\nMetode Iteratif" <<endl;
		cout << "Faktorial dari " << n << " = " << Fak_iteratif(n);
	} else if(pilihan == 2) {
		cout << "\nMetode Rekursif" <<endl;
		cout << "Faktorial dari " << n << " = " << Fak_rekursif(n);
	}
}
