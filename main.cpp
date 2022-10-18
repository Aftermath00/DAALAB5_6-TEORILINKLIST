#include<iostream>
using namespace std;

struct buku{
    string nama,judul;
    int TahunTerbit;
    buku *next;
};

buku *head, *tails, *cur, *newNode, *del, *before;

void singlelinklist(string judul, string nama, int TahunTerbit){
    head = new buku();
    head ->judul = judul;
    head ->nama = nama;
    head->TahunTerbit= TahunTerbit;
    head->next = NULL;
    tails=head;
}
void addfirst(string judul, string nama, int TahunTerbit){
    newNode = new buku();
    newNode ->judul = judul;
    newNode ->nama = nama;
    newNode->TahunTerbit= TahunTerbit;
    newNode->next = head;
    head = newNode;
}


void addmid(string judul, string nama, int TahunTerbit, int posisi){
    newNode = new buku();
    newNode ->judul = judul;
    newNode ->nama = nama;
    newNode->TahunTerbit= TahunTerbit;

    cur = head;
    int nomor = 1;
    while(nomor<posisi-1){
        cur= cur->next;
        nomor++;
    }
    newNode->next = cur->next;
    cur->next = newNode;
}

void addlast(string judul, string nama, int TahunTerbit){
    newNode = new buku();
    newNode ->judul = judul;
    newNode ->nama = nama;
    newNode->TahunTerbit= TahunTerbit;
    newNode->next = NULL;
    tails->next = newNode;
    tails = newNode;
}

void printlinklist(){
    cur = head;
     while( cur != NULL ){
    cout << "Judul Buku : " << cur->judul << endl;
    cout << "Pengarang Buku : " << cur->nama << endl;
    cout << "Tahun Terbit Buku : " << cur->TahunTerbit << endl;

    cur = cur->next;
  }
}

int main(){
    singlelinklist("HARRY POTTER", "JK ROLING", 2000);
    addlast("HARRY POTTER", "JK ROLING", 2000);
    addlast("HARRY POTTER", "JK ROLING", 2000);


    
    printlinklist();

}
