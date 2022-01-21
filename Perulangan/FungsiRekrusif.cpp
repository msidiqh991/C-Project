#include <iostream>
using namespace std;
//
//void rekursi(int a, int b){
// if (b!=0){
//  a=a+1;
//  b=b-1;
// rekursi(a, b);
// }
// else{
//  cout << "Hasil : " << a;
// }
//}
//
//int main(){
// int a;
// cout << "Masukkan Nilai a: ";
// cin >> a;
// int b;
// cout << "Masukkan Nilai b: ";
// cin >> b;
// cout << "Input Nilainya : " << a << " dan " << b <<endl;
// rekursi(a,b);
//}


int fakt(int a);
int main()

{int z,x;

cout << "Masukkan angka = "; cin >> z;

cout << "Deretnya     = ";

for (x=z+1; x>1; x--) {
	cout << x-1 << " + ";
}

cout << "\nHasil        = " << fakt(z)<< endl;

}

int fakt(int a)

{

if (a<=1)

 a=1;

    else

     a=a-(fakt(a-1));

return (a);

}




//int ganjilGenapRekursif(char kode,int awal,int akhir){
//
//        if (awal>akhir){
//            return 0;
//        }else{    
//            if (kode=='-'){
//                if (awal%2==0){
//                awal+=1;
//                } 
//            }else{
//                if (awal%2==1){
//                awal+=1;
//                }
//            }
//            cout<<awal;
//            if (awal<akhir){
//                cout<<" + ";
//            }else{
//                cout<<" = ";
//            }
//            return awal + ganjilGenapRekursif(kode,awal+2,akhir);
//        }    
//    
//}
//int main(){
//    int awal,akhir;
//    char kode;
//    cout<<"Input bilangan awal : ";
//    cin>>awal;
//    cout<<"Input bilangan akhir : ";
//    cin>>akhir;
//    cout<<"[-] Deret Ganjil\n"
//        <<"[+] Deret Genap\n"
//        <<"Pilihan [- / +] : ";
//        cin>>kode;
//    switch (kode)
//    {
//    case '-':
//        cout<<"Deret Ganjil : "<<endl;
//        cout<<ganjilGenapRekursif(kode,awal,akhir);
//        break;
//    case '+':
//        cout<<"Deret Genap : "<<endl;
//        cout<<ganjilGenapRekursif(kode,awal,akhir);
//        break;
//    default:
//        break;
//    }
//}


//long int pangkatrekursif(int x, int y);
//
//int main(){
//	
//	int x,y;
//	
//	cout<<"FUNGSI REKURSIF UNTUK MENGHITUNG PANGKAT"<<endl;
//	cout<<endl;
//	cout<<"Masukan Nilai X = ";
//	cin>>x;
//	
//	cout<<"Masukan Nilai Y = ";
//	cin>>y;
//	cout<<endl;
//	
//	cout<<x<<" Dipangkatkan "<<y<<" = "<<pangkatrekursif(x,y)<<endl;
//}
//
//
//long int pangkatrekursif(int x, int y){
//	 if (y==0)
//		 return 1 ;
//		 else 
//                 return x * pangkatrekursif(x,y-1);
//             }
