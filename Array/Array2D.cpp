#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	
	int x[3][5] = {{1,2,3,4,5}, {5,10,34,35,36}, {7,14,21,28,35}};
	cout <<x[1][2];
	
//	#1
//	int contoh [3][4];
//	contoh[0][0] = 100;
//	contoh[1][2] = 400;
//	contoh[2][3] = 800;
//	
//	cout <<contoh[0][0] <<" dan " <<contoh[1][2]; 
//	cout<<endl;
	
//	#2
//	int A[3][4]={{5,10,15,20}};
//	for (int i=0; i<3; i++){
//			cout<<A[i]<<" ";
//	
//		}	cout << endl;
	
////	#3
//	int A[2][3];
//	
//	for (int b=0;b<1;b++){
//		for (int k=0;k<4;k++){
//			  cout<<"Nilai "<<b<<", "<<k<<" = ";
//			  cin>>A[b][k];
//		}
//		cout << endl;
//	}
//    
////    #5
//	int data[3] [2]= {{5, 6}, {1, 2}, {0, 0}};
//    int i, j;
//
//    cout<<"Data larik 2D "<<endl;cout<<endl;
//    cout<<"  A  B "<<endl;
//        for (i=0; i<=2; i++){
//            for (j=0; j<=1; j++)
//            cout<<setw(3)<<data[i][j];cout<<endl;
//    }
    
////    #6
//	int data_lulus[2][2];
//    int i, j, total;
//
//    //Inisialisasi data
//    data_lulus[0][0]=10;
//    data_lulus[0][1]=20;
//    data_lulus[1][0]=15;
//    data_lulus[1][1]=25;
//    
//    //Menampilkan data kelulusan
//    cout<<"Tampil Data Lulus "<<endl<<endl;
//        for (i=0; i<=; i++){
//            cout<<"Th ke- "<<i+1;
//            for (j=0; j<=1; j++){
//                cout<<setw(5)<<data_lulus[i][j];
//                total=total+data_lulus[i][j];
//            }
//            cout<<endl;
//    }cout<<endl;
//    cout<<"Jumlah yang lulus    = "<<total<<endl;
//    cout<<"Rata-rata yang lulus = "<<total/(i*j)<<endl;
//    
////    #7
//	int data_mhs[3][5];
//      int tahun,jurusan;
//
//       data_mhs[0][0]=150; //jurusan TI 2015
//       data_mhs[0][1]=200; //jurusan TI 2016
//       data_mhs[0][2]=180; //jurusan TI 2017
//       data_mhs[0][3]=210; //jurusan TI 2018
//       data_mhs[0][4]=190; //jurusan TI 2019
////
// cout<<"Data mahasiswa baru"<<endl;
// while(1){
// cout<<"Pilihan jurusan :\n"
//        <<"0. Ya / 1. Tidak"
//        <<"Pilih : ";
//		cin>>jurusan;
//        if(jurusan<1 && jurusan>=0)
//               break;
// }
//
//while(1){
//       cout<<"Pilihan tahun 2015-2019 : ";cin>>tahun;
//        tahun -= 2015; //konversi ke 0,1,2, 3 atau 4
//        if(tahun<5 && tahun>=0)
//               break;
// }
//       cout<<"Jumlah mahasiswa baru : "
//              <<data_mhs[jurusan][tahun]<<endl;
////              
////  #8
//	int input[2][3];
//// 
//  input[0][0] = 15;
//  input[0][1] = 23;
//  input[0][2] = 40;
//  input[1][0] = 29;
//  input[1][1] = 26;
//  input[1][2] = 67;
// 
//  cout << "Data array 3 kolom" << endl;
//  cout << arr[0][0] <<" "<< arr[0][1] << " " << arr[0][2] <<endl;
//  cout << arr[1][0] <<" "<< arr[1][1] << " " <<arr[1][2] <<endl;
// 
//  return 0;
//  
////	#9
//	cout << "##  Program C++ Input Matriks 2 Dimensi ##" << endl;
//  cout << "==========================================" << endl;
//  cout << endl;
// 
//  int matriks[100][100];
//  int jum_baris, jum_kolom, i, j;
// 
//  cout << "Input jumlah baris matriks: ";
//  cin >> jum_baris;
// 
//  cout << "Input jumlah kolom matriks: ";
//  cin >> jum_kolom;
//  cout << endl;
// 
//  // proses input array
//  for(i = 0; i < jum_baris ; i++){
//    for(j = 0; j < jum_kolom; j++){
//      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
//      cin >> matriks[i][j];
//    }
//    cout << endl;
//  }
// 
//  cout << "Hasil matriks: " << endl;
// 
  // menampilkan array
//  for(i = 0; i < jum_baris ; i++){
//    for(j = 0; j < jum_kolom; j++){
//      cout << setw(3) << matriks[i][j] << " ";
//    }
//    cout << endl;
//  }

}
