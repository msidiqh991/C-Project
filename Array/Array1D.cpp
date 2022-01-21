#include <iostream>
//#include <cstdlib>
//#include <iomanip>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
	
int klpk1,klpk2,klpk3,total=0;
	
	cout<<"PROGRAM MENCARI NAMA YANG SAMA DI 2 BUAH ARRAY"<<endl<<endl;
	
	cout<<"masukan banyak nama kelompok 1 : "; cin>>klpk1;
	cout<<"masukan banyak nama kelompok 2 : "; cin>>klpk2;
	
	klpk3 = (klpk1 > klpk2) ? klpk1 : klpk2;
	cout<<klpk3;
	cout<<endl;
	
	string kelompok1[klpk1], kelompok2[klpk2], kelompok3[klpk3];
	
	cout<<"Masukan nama - nama kelompok 1"<<endl;
	for(int i=0;i<klpk1;i++){
		cout<<"nama ke-"<<i+1<<" : "; cin>>kelompok1[i];
	}
	
	cout<<endl;
	
	cout<<"Masukan nama - nama kelompok 2"<<endl;
	for(int i=0;i<klpk2;i++){
		cout<<"nama ke-"<<i+1<<" : "; cin>>kelompok2[i];
	}
	
	for(int i=0;i<klpk1;i++){
		for(int j=0;j<klpk2;j++){
			if(kelompok1[i] == kelompok2[j]){
				kelompok3[total] = kelompok1[i];
				total += 1;
			}
		}
	}
	
	cout<<"data yang sama yaitu : ";
	for(int i=0;i<total;i++){
		cout<<kelompok3[i]<<" ";
	}
}
////#0		
//int a[3] = {100, 200, 300};
//int b[]	 = {500, 700, 900};
//
//cout << "Nilai a ke-1 elemen array " <<a[0] <<endl;
//cout << "Nilai a ke-1 elemen array " <<a[1] <<endl;
//cout << "Nilai a ke-3 elemen array " <<a[2] <<endl <<endl;
//cout << "Nilai b ke-1 elemen array " <<b[0] <<endl;
//cout << "Nilai b ke-1 elemen array " <<b[1] <<endl;
//cout << "Nilai b ke-3 elemen array " <<b[2] <<endl <<endl;
//
//////#1
//int i;
//int data[6] = {10,20,30,40,50,60};
//for(i=0; i<6; i++){
//	cout << "Nilai Elemen ke " << i+1 << " adalah " <<data[i] <<endl;
//}
//
////#2
//int x;
//char object[6] = {'F','T','I','U','A','D'};
//for(x=0; x<6; x++){
//	cout << "Output Char ke-" << x+1 << " adalah " <<object[x] <<endl;
//}
//
////#3
//string identitas[4] = {"Nama ", "saya ", "Muhammad Sidiq ", "!"};
//		cout << identitas[0];
//		cout << identitas[1];
//		cout << identitas[2];
//		cout << identitas[3] <<endl;
	
////#4	
//int umur[] = {0, 18, 19, 20, 21, 22};
//int n, hasil=0;
//
//for ( n=0 ; n<5 ; ++n ) {
//	cout << "Angka ke-" << n+1 << " adalah " <<umur[n+1] <<endl;
//	hasil+= umur[n];
//	}
//	cout << "Total Penjumlahannya = " <<hasil;
//	
////#6
//int a[5], total;
//int jumlah[5];
//cout << "Masukkan nilai pada array : " <<endl;
//
//for(int i=0; i<5; i++) {
//	cout << "Nilai indeks [" << i << "] = ";
//	cin >> a[i];
//	}
//	cout <<endl;
//	for(int i=0; i<5; i++) {
//		cout << "Nilai indeks ["<< i <<"] adalah " <<a[i] <<endl;
//		total += a[i];
//	}
//	cout << "Jumlah nilai elemen pada array a adalah a : " <<total;
//	return 0;

//#7
//	int x[5];
//	cout<<"Masukkan nilai 1 : ";
//	cin >> x[0];
//	cout<<"Masukkan nilai 2 : ";
//	cin >> x[1];
//	cout<<"Masukkan nilai 3 : ";
//	cin >> x[2];
//	cout<<"Masukkan nilai 4 : ";
//	cin >> x[3];
//	cout<<"Masukkan nilai 5 : ";
//	cin >> x[4];
//	
//	cout << "Pengurangan dari seluruh angka X adalah" <<endl;
//	cout << "Jawaban = " <<x[0] - x[1] - x[2] - x[3] - x[4];
//	return 0 ;

//#8
//int x[5] = {10, 100, 200, 300, 400};
//int y[5] = {90, 900, 800, 700, 600};
//int jumlah;
//for(int i=0; i<4; i++){
//	cout << "Nilai x : " << x[i+1] <<"\t dan\t Nilai y :" << y[i+1] <<endl;
//}
//	return 0;
//
////#9
//int num[30];
//	int akhir, loop;
//	
//	cout << "Program penjumlahkan isi array" <<endl;
//	
//	cout << "Tentukan jumlah perulangan : ";
//	cin >> loop;
//	
//	for(int i=1; i<=loop; i++){
//		cout << "Masukkan angka ke-" << i << " : ";
//		cin >> num[i];
//	}
//	
//	for(int i=1; i<=loop; i++){
//		akhir += num[i];
//	}
//	cout <<endl <<endl << "Jumlah angka adalah : " <<akhir;
//
////#10
//int i;
//char nama[5]={'A','d','@','m'};
//char nama2[5]="Ad@m";
//cout<<"Array per Karakter= ";
//for(i=0;i<=4;i++)
//{
//cout<<nama[i];
//}
//cout<<endl;
//cout<<"Array string ="<<nama2<<endl<<endl;
//return 0;

//#11
//float nilai[10];
//int x,y;
//cout<<"Mau berapa data [1..10] : ";
//cin>>y;
//for(x=0;x<y;x++)
//{
//cout<<"Nilai ke-"<<x+1<<" : ";
//cin>>nilai[x];
//}
//cout<<endl;
//cout<<setiosflags(ios::fixed);
//for(x=0;x<y;x++)
//{
//cout<<"Nilai ke-"<<setprecision(2)<<x+1<<" :"<<nilai[x]<<endl;
//}
//cout<<endl;
//return 0;

//#12
//int i, data[4] = {70,80,82,60};
//for (i=0; i<4; i++){
//	cout << "Array ke-" << i << " : " <<data[i+1];
//	cout << endl; 
//}


//#13
//int Nilai[10];
//    int i, Jumlah=0;
//    float Rata_Rata;
//    // Membaca dan menghitung jumlah
//    for (i=0;i<5;i++)
//    {
//      cout<<"Masukkan elemen ke-"<<i<<" = ";
//      cin>>Nilai[i];
//      Jumlah+=Nilai[i];
//  }
//    //Mencetak Elemen Array
//    cout<<"\n\nDeretan Bilangan = ";
//    for (i=0;i<5;i++)
//    {
//      cout<<Nilai[i]<<" ";
//  }

//#14
//char umur[3], nama[35], asal[20];
//printf("Program pengisian data \n");
//printf ("Masukkan Nama anda : "); 
//scanf("%s", nama);
//printf ("Masukkan umur : "); 
//scanf("%s", umur);
//printf ("Darimana Asalmu : "); 
//scanf("%s", asal);
//
//printf("\nHalo, %s ", nama);
//printf ("kamu berusia %s Tahun, dan ", umur);
//printf ("kamu berasal dari %s ", asal);

//#15
// char huruf[6]={'c','o','n','t','o','h'};
// string huruf2[2]{"Tutor-All Programming","Tutorial Bahasa Pemrograman"};
// cout<<"Menampilkan String"<<endl;
// for(int i = 0; i<=2; i++){
//  cout<<"["<<i<<"] :"<<huruf2[i];
//  cout<<endl; 
//}

//#16
// int A[10]= {5, 12, 24, 53, 51, 26, 17, 62, 36, 68};
//    int tertinggi, terendah;
//
//    //Menampilkan elemen data
//    for (int i=0; i<10; i++){
//        cout<<"Data bari ke-"<<i<<" = "<<A[i];cout<<endl;
//    }
//
//    tertinggi = A[0];
//    terendah = A[0];
//
//    //Melakukan seleksi tertinggi dan terendah
//    for (int j=0; j<10; j++){
//        if (A[j] > tertinggi){
//            tertinggi=A[j];
//        }if (A[j]<terendah){
//            terendah=A[j];
//        }
//    }
//    //Menampilkan nilai tertinggi dan terendah
//    cout<<"Nilai tertinggi adalah : "<<tertinggi<<endl;
//    cout<<"Nilai terendah adalah  : "<<terendah<<endl;
    
//#17
// int A[10]= {5, 12, 24, 53, 51, 26, 17, 62, 36, 68};
//    int cari;
//
//    //Menampilkan elemen data
//    for (int i=0; i<10; i++){
//        cout<<"Data bari ke-"<<i<<" = "<<A[i];cout<<endl;
//    }
//
//    //Memasukkan data yang akan dicari
//    cout<<"Masukkan data yang dicari : ";
//	cin>>cari;
//
// for (int j=0; j<1; j++){
// 	if(A[j] == cari) {
// 		cout<<"Nilai yang dicari berada pada indeks ke-"<<j<<endl;
//	 } else {
//	 	cout <<"Data tidak ditemukan" <<endl;
//	 }
// }
    
//#18
//string nama;
//int nim[9];
// cout << "Masukkan nim : ";
// cin >> nim[9];
// cout << "Masukkan nama : ";
// cin >>nama;
// for(int i = 0; i<1; i++){
//  	cout << "Nama : " <<nama <<endl;
//	cout << "NIM : " <<nim[9] <<endl;
//	cout << "Univ. Ahmad Dahlan";	
// } 
 
//#19
//string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};
//
//    //  mengambil banyaknya isi array
//    int length = sizeof(contact) / sizeof(*contact);
//
//    printf("Banyaknya isi array nilai: %d\n", length);
