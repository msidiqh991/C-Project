#include <iostream>
using namespace std;

class fibonacci{
	public :
		void inStart();
		int fibo();
		
	private :
		int n;
		int f1 = 0;
		int f2 = 1;
		int tampung;
		
};
void fibonacci::inStart(){
	cout << "Tentukan nilai n : ";
	cin >> n;
	cout << endl;
}
int fibonacci::fibo(){
	cout << "Program operasi bilangan fibonacci \n";
	cout << "Deret Fibonacci : ";
	for(int i=0; i<=n; i++) {
		if(i==1) {
			cout << f1 << " ";
			continue;
		}
		if(i==2) {
			cout << f2 << " ";
			continue;
		}
		tampung = f1 + f2;
		f1 = f2;
		f2 = tampung;
		cout << tampung << " ";
	}
}
int main(){
	fibonacci fi;
	fi.inStart();
	fi.fibo();
}
