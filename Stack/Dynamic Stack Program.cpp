#include <iostream>
#include <conio.h>
#define MAX 10
using namespace std;

class stack {
	public :
		void push();
		void pop();
		void print();
		int clearr();
		void menu();
	
	private :
		int top, stack[MAX];		
};

void stack::push(){
    if(top == MAX-1){
        cout << ">> Stack full!" << endl;
    }else{
        top++;
        cout << ">> Masukan Data : ";
        cin >> stack[top];
        cout << "pada index ke-" << top << " : " <<endl;
        cout << "Data [" << stack[top] << "] Telah Ditambah ! " << endl;
    }
}

void stack::pop(){
    if(top == -1){
        cout << "--> Stack Kosong !" << endl;
    } else {
        cout << "\nData [" << stack[top] << "] pada index ke " << top << " dalam Stack Diambil !" << endl;
        stack[top--];
    }
}

int stack::clearr(){
    return top = -1;
}

void stack::print(){
    if (top == -1) {
 		cout << " Stack : ";
        cout << "\n===========================" << endl;
        cout << "\t Data Kosong! ";
		cout << "\n===========================" << endl;
    } else {
        cout << "\tStack : ";
        cout << "\n===========================" << endl;
 		for (int i = top; i >= 0; i--){
  			cout << "\t [ " << stack[i] << " ] \t" << endl;
 		}
 		cout << "===========================" << endl;
    }
}

void stack::menu(){
	int choose;
	top = -1;
    do {
        print();
       	cout << "[1] PUSH" <<endl;
       	cout << "[2] POP" <<endl;
       	cout << "[3] CLEAR" <<endl;
       	cout <<endl << ">> Pilihanmu : ";
       	cin >> choose;
        switch (choose){
            case 1:
                push();getch();
                break;
            case 2:
                pop();getch();
                break;
            case 3:
                clearr();
                cout << "\nClear Succes" << endl;
                getch();
                break;
            case 4:
                cout << "Terima Kasih telah menggunakan program ini :)" << endl;
                getch();
                break;
            default:
                cout << "Pilihan tidak ada\nMasukan pilihan sesuai dengan daftar" << endl;
                getch();
                break;
        }
        system("cls");
    } while(choose !=4);
}

int main() {
	stack s;
	s.menu();
}
