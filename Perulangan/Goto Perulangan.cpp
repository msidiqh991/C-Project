#include <iostream>
#include <string>
using namespace std;

int main() {
  int nilai = 0;
  int opr;
  
  ulang : 
  		cout<<"Masukkan nilai : ";
  		cin>>opr;
  		nilai = nilai + opr;
  		cout << "Nilai saat ini : " <<nilai <<endl;
  		goto ulang;
}
