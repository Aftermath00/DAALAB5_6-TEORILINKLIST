#include<iostream>
#include<string>
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
    system("CLS");
    cur = head;
     while( cur != NULL ){
    cout << "Judul Buku : " << cur->judul << endl;
    cout << "Pengarang Buku : " << cur->nama << endl;
    cout << "Tahun Terbit Buku : " << cur->TahunTerbit << endl;
    cur = cur->next;
    cout << endl;
  }
}

int main(){
    int n, tahun,pos;
    string judul, nama;

    // singlelinklist("TENGGELAMNYA KAPAL VAN DER WIJCK", "BUYA HAMKA", 1970);
    
    // addlast("RANAU 3 WARNA", "-----", 2000);
   
    // addfirst("HARRY POTTER", "JK ROWLING", 2000);

    // addmid("NEGERI PARA BEDEBAH", "----", 2020, 3);
    bool check = true;
    while (check == true){
    cout << "+---------------+" << endl;
    cout << "| 1. Add First  |" << endl;
    cout << "| 2. Add Last   |" << endl;
    cout << "| 3. Add mid    |" << endl;
    cout << "| 4. Quit       |" << endl;
    cout << "+---------------+" << endl;
    cout << "| Pilih : "; cin >> n;
        if (n==1){
            system("CLS");
            cout << "Input Judul Buku : "; 
            cin.ignore();getline(cin, judul);
            cout << "Tahun Terbit     : "; 
            cin >> tahun;
            cout << "Nama Penulis     : ";
            cin.ignore();getline(cin, nama);
            
            addfirst(judul, nama, tahun);
            
            printlinklist();
            cout << endl;
            check = true;
        }
        if (n==2){
            system("CLS");
            cout << "Input Judul Buku : "; 
            cin.ignore();getline(cin, judul);
            cout << "Tahun Terbit     : "; 
            cin >> tahun;
            cout << "Nama Penulis     : ";
            cin.ignore();getline(cin, nama);
            
            addlast(judul, nama, tahun);
            
            printlinklist();
            cout << endl;
            check = true;
        }
        if (n==3){
            system("CLS");
            cout << "Input posisi     :"; 
            cin >> pos;
            cout << "Input Judul Buku : "; 
            cin.ignore();getline(cin, judul);
            cout << "Tahun Terbit     : "; 
            cin >> tahun;
            cout << "Nama Penulis     : ";
            cin.ignore();getline(cin, nama);
            
            addmid(judul, nama, tahun, pos);
            
            printlinklist();
            cout << endl;
            check = true;
        }
        if (n==4) {
            break;
        }
    }
    // printlinklist();
}