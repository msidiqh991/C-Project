#include <iostream>
#include <string.h>
using namespace std;

struct menghitung{
	char nim[8];
	float ipk;
};

int main() {
	menghitung mt[3];
	for(int i=0; i<3; i++){
		cout << "Nim : "; 
		cin >> mt[i].nim;
		cout << "IPK : ";
		cin >> mt[i].ipk;
		cout <<endl;
	} 
	for(int d=0; d<3; d++){
		cout <<"Data ke-"<< d+1 <<" dengan Nim : " <<mt[d].nim <<endl;
		cout <<"Memiliki IPK : " <<mt[d].ipk <<endl;
	}
}
