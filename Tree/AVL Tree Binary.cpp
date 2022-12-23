#include<iostream>
#include<cstdio>
#include<sstream>
#include<algorithm>
#define pow2(n) (1 << (n))
using namespace std;

struct pohon_node{
 	int data;
 	struct pohon_node *left;
	struct pohon_node *right;
}

*root;

class Pohon_Setimbang{
public:
    int height(pohon_node *);
    int diff(pohon_node *);
    pohon_node *r_rotasi(pohon_node *);
    pohon_node *l_rotasi(pohon_node *);
    pohon_node *lr_rotasi(pohon_node *);
    pohon_node *rl_rotasi(pohon_node *);
    pohon_node* balance(pohon_node *);
    pohon_node* insert(pohon_node *, int );
    void cetak(pohon_node *, int);

    xTree(){
     	root = NULL;
 	}
};

int Pohon_Setimbang::height(pohon_node *temp){
    int h = 0;
    if (temp != NULL){
     	int l_height = height (temp->left);
     	int r_height = height (temp->right);
     	int max_height = max (l_height, r_height);
     	h = max_height + 1;
    }
return h;
}

int Pohon_Setimbang::diff(pohon_node *temp){
 	int l_height = height (temp->left);
 	int r_height = height (temp->right);
 	int b_factor= l_height - r_height; 
 	return b_factor;
}

pohon_node *Pohon_Setimbang::r_rotasi(pohon_node *parent){
 	pohon_node *temp;
 	temp = parent->right;
 	parent->right = temp->left;
 	temp->left = parent;
 	return temp;
}

pohon_node *Pohon_Setimbang::l_rotasi(pohon_node *parent){
 	pohon_node *temp;
 	temp = parent->left;
 	parent->left = temp->right;
 	temp->right = parent;
 	return temp;
}

pohon_node *Pohon_Setimbang::lr_rotasi(pohon_node *parent){
 	pohon_node *temp;
 	temp = parent->left;
 	parent->left = r_rotasi (temp);
 	return l_rotasi (parent);
}

pohon_node *Pohon_Setimbang::rl_rotasi(pohon_node *parent){
 	pohon_node *temp;
 	temp = parent->right;
 	parent->right = l_rotasi (temp);
	 return r_rotasi (parent);
}

pohon_node *Pohon_Setimbang::balance(pohon_node *temp){
    int bal_factor = diff (temp);
    if (bal_factor > 1){
    	if (diff (temp->left) > 0)
         	temp = l_rotasi (temp);
        else
     		temp = lr_rotasi (temp);
    }else if (bal_factor < -1){
        if (diff (temp->right) > 0)
         	temp = rl_rotasi (temp);
        else 
         	temp = r_rotasi (temp);
    }
return temp;
}

pohon_node *Pohon_Setimbang::insert(pohon_node *root, int value){
    if (root == NULL){
     	root = new pohon_node;
     	root->data = value;
     	root->left = NULL;
     	root->right = NULL;
     	return root;
    }else if (value < root->data){
     	root->left = insert(root->left, value);
     	root = balance (root);
    }else if (value >= root->data){
     	root->right = insert(root->right, value);
     	root = balance (root);
    }
return root;
}

void Pohon_Setimbang::cetak(pohon_node *putar, int level){
    int i;
    if (putar!=NULL){
     	cetak(putar->right, level + 1);
     	cout<<"\n";
    if (putar == root)
     	cout<<"Root -> ";
    for (i = 0; i < level && putar != root; i++)
     	cout<<" ";
 		cout<<putar->data;
 		cetak(putar->left, level + 1);
    }
}

int main(){
    int y, pil;
    Pohon_Setimbang x;
    while (1){
     	system("cls");
     	cout<<"\tPohon Setimbang\n";
        cout<<"1. Insert\n";
        cout<<"2. Pohon Setimbang\n";
        cout<<"3. Keluar\n";
        cout<<"Masukkan pilihan ";
        cin>>pil;
        switch(pil){
            case 1:
                cout<<"Masukan data    : ";
                cin>>y;
                root = x.insert(root, y);
                system("pause");
                break;
            case 2:
                if (root == NULL){
                    cout<<"Pohon Masih Kosong"<<endl;
                    continue;
                }
                cout<<"Pohon Setimbang :"<<endl;
                x.cetak(root, 1);
                cout<<endl;
                system("pause");
                break;
            case 3:
                exit(1);
                break;
            default:
                cout<<"Data Yang Anda Masukan Salah"<<endl;
        }
    }
return 0;
}
