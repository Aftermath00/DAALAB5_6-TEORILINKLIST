#include<iostream>
using namespace std;

struct buku{
    string nama,judul;
    int TahunTerbit;

    buku *next;
};

int main(){
    buku *node1, *node2,*cur;


    //deklarasi
    node1 = new buku();
    node2 = new buku();


    node1->judul = "HARRY POTTER";
    node1->nama = "JK ROLLING";
    node1->TahunTerbit = 1999;
    node1->next = node2;

    node2->judul = "HARRY Pittir";
    node2->nama = "JK ROLLING";
    node2->TahunTerbit = 1999;
    node2->next = NULL;

    cur = node1;
    
     while( cur != NULL ){
    cout << "Judul Buku : " << cur->judul << endl;
    cout << "Pengarang Buku : " << cur->nama << endl;
    cout << "Tahun Terbit Buku : " << cur->TahunTerbit << endl;

    cur = cur->next;
  }









}