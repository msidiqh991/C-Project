#include <iostream>	
#include <math.h>
#include <conio.h> 
using namespace std;
 
int menu(){
	int opr;													// Tipedata Integer pada Variable opr
	cout << " [ Program Kalkulator ]" <<endl <<endl;			// Cout untuk Menampilkan data dan <<endl untuk membuat newline(garis) baru
	cout << " Menu Operasi :\n";
    cout << " 1. Penjumlahan" << endl;
    cout << " 2. Pengurangan" << endl;
    cout << " 3. Perkalian" << endl;
    cout << " 4. Pembagian" << endl;
    cout << "\n Pilihan Anda : ";
    cin >> opr;													// Cin untuk menginput / memasukkan data
} 
 
void Jumlah(){													// Void sebuah fungsi yang tidak mengembalikkan nilai output
    float a, b;													// Tipe data float untuk angka pecahan
    float hasil;												// Untuk menampilkan data
    cout << " Penjumlahan\n\n";
    cout << " Masukkan Bilangan Pertama : ";
	cin >> a;
    cout << " Masukkan Bilangan Kedua : ";
	cin >> b;													// Cin untuk menginput / memasukkan data
    hasil = a+b;												// Mengisi Variable hasil dengan pertambahan
    cout << " Hasil " <<a <<" + " <<b <<" = " << hasil;
}
 
void Kurang(){													// Void sebuah fungsi yang tidak mengembalikkan nilai output
    float a, b;													// Tipe data float untuk angka pecahan
    float hasil;												// Untuk menampilkan data
    cout << " Pengurangan\n\n";
    cout << " Masukkan Bilangan Pertama : "; 
	cin >> a;
    cout << " Masukkan Bilangan Kedua : "; 
	cin >> b;													// Cin untuk menginput / memasukkan data
    hasil = a-b;												// Mengisi variable hasil dengan pengurangan
    cout << " Hasil " <<a <<" - " <<b <<" = " << hasil;
}
 
void Kali(){													// Void sebuah fungsi yang tidak mengembalikkan nilai output
    float a, b;
    float hasil;												// Tipe data float untuk angka pecahan
    cout << " Perkalian\n\n";									// Untuk menampilkan data
    cout << " Masukkan Bilangan Pertama : "; 
	cin >> a;
    cout << " Masukkan Bilangan Kedua : "; 
	cin >> b;													// Cin untuk menginput / memasukkan data
    hasil = a*b;												// Mengisi variable hasil dengan perkalian
   cout << " Hasil " <<a <<" * " <<b <<" = " << hasil;
}
 
void Bagi(){													// Void sebuah fungsi yang tidak mengembalikkan nilai output		
    float a, b;													// Tipe data float untuk angka pecahan
    float hasil;
    cout << " Pembagian\n\n";									// Untuk menampilkan data
    cout << " Masukkan Bilangan Pertama : "; 
	cin >> a;
    cout << " Masukkan Bilangan Kedua : "; 
	cin >> b;													// Cin untuk menginput / memasukkan data
    hasil = a/b;												// Mengisi variable hasil dengan pembagian
    cout << " Hasil " <<a <<" /s " <<b <<" = " << hasil;
}

void pilihan(){													// Void sebuah fungsi yang tidak mengembalikkan nilai output
	int pilih;													// Tipe data int pada variable pilih
	if(pilih == 1) {											// Program perulangan if else-if
		Jumlah();
	} else if(pilih == 2) {
		Kurang();
	} else if(pilih == 3) {
		Kali();
	} else if(pilih == 4) {
		Bagi();
	} else {
		system("cls");											// Membersihkan layar pada program yang dijalankan
		cout << "Input yang kamu masukkan salah";
	}
}

void complete(){
	cout << "\n\n Terimakasih...";
	getch();													// menahan sebuah program yang berjalan
}
 
int main(){
	
	menu();
	pilihan();
	complete();
	
}
