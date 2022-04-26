#include <iostream>
using namespace std;
class hitung {
	public:
		void input();
		int faktorial(int n);
		int proses();
		
	private:
		int n;
};

void hitung::input() {
	cin>>n;
	cout<<endl;
}

int hitung::proses(){
	if(n<0)
	cout << "bukan bilangan bulat" <<endl;
	else 
	cout << "Faktorial dari !" << n <<" = " << faktorial(n);
	return 0;
}

int hitung::faktorial(int){
	int i;
	int hasil=1; 
	for(i=n; i>=1; --i){
		hasil = hasil * i;
	}
}

int main(){
	cout<<"Program Faktorial dengan Fungsi Iteratif" <<endl;
	cout<<"Tentukan nilai n : "; 
	hitung faktor;
	faktor.input(); 
	faktor.proses(); 
	return 0;
}
