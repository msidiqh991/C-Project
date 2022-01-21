#include <iostream>
#define MAX 5

using namespace std;

main(){
 int nilai[3], *penunjuk;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 800;

    penunjuk = &nilai[0];
    cout<<"Nilai "<<*penunjuk <<" ada di alamat memori "<<penunjuk;
    cout<<"\nNilai "<<*(penunjuk+1)<<" ada di alamat memori "<<penunjuk+1;
    cout<<"\nNilai "<<*(penunjuk+2)<<" ada di alamat memori "<<penunjuk+2<<endl;
}
