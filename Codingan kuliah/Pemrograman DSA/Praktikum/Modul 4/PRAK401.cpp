#include<conio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct TNode{
    string data;
    TNode *next;
    TNode *prev;
};

TNode *head, *tail;

int pil, menu;
char pilihan[1];
string dataBaru;

void initH();
void initHT();
int isEmptyH();
int isEmptyHT();

void tambahDepanH();
void tambahDepanHT();
void tambahBelakangH();
void tambahBelakangHT();
void hapusDepanH();
void hapusDepanHT();
void hapusBelakangH();
void hapusBelakangHT();
void tampilkanH();
void tampilkanHT();
void bersihkanH();
void bersihkanHT();

int main(){
    menu: 
    cout << "Double Linked List Non Circular (DLLNC)" << endl;
    cout << "=======================================" << endl;
    cout << "Silahkan pilih program DLLNC yang ingin dijalankan" << endl;
    cout << "1. DLLNC dengan Head" << endl;
    cout << "2. DLLNC dengan Head dan Tail" << endl;
    cout << "3. Quit" << endl;
    cout << "=======================================" << endl;
    cout << "Pilihan : ";
    cin >> menu;
    system("cls");
    
    if (menu == 1){
        do{
            cout << "Double Linked List Non Cilular (DLLNC) (Head)" << endl;
            cout << "=============================================" << endl;
            cout << "1. Tambah Depan" << endl;
            cout << "2. Tambah Belakang" << endl;
            cout << "3. Tampilkan" << endl;
            cout << "4. Hapus Depan" << endl;
            cout << "5. Hapus Belakang" << endl;
            cout << "6. Reset" << endl;
            cout << "7. Kembali ke Menu" << endl;
            cout << "Pilihan : ";
            cin >> pilihan;
            pil=atoi(pilihan);

            switch(pil){
                case 1:
                    tambahDepanH();
                    break;   
                case 2:
                    tambahBelakangH();
                    break;    
                case 3:
                    tampilkanH();
                    break;
                case 4:
                    hapusDepanH();
                    break;      
                case 5:
                    hapusBelakangH();
                    break;
                case 6:
                    bersihkanH();
                    break;
                default:
                    system("cls");
                    goto menu;
            }
            cout << "\npress any key to continue" << endl;
            getch();
            system("cls");
        }while(pil < 7);
    }else if(menu == 2){
        do{
            cout << "Double Linked List Non Cirlular (DLLNC) (Head dan Tail)" << endl;
            cout << "=============================================" << endl;
            cout << "1. Tambah Depan" << endl;
            cout << "2. Tambah Belakang" << endl;
            cout << "3. Tampilkan" << endl;
            cout << "4. Hapus Depan" << endl;
            cout << "5. Hapus Belakang" << endl;
            cout << "6. Reset" << endl;
            cout << "7. Kembali ke Menu" << endl;
            cout << "Pilihan : ";
            cin >> pilihan;
            pil=atoi(pilihan);

            switch(pil){
                case 1:
                    tambahDepanHT();
                    break;
                case 2:
                    tambahBelakangHT();
                    break;
                case 3:
                    tampilkanHT();
                    break;
                case 4:
                    hapusDepanHT();
                    break;
                case 5:
                    hapusBelakangHT();
                    break;
                case 6:
                    bersihkanHT();
                    break;
                default:
                    system("cls");
                    goto menu;
        }
        cout << "\npress any key to continue" << endl;
        getch();
        system("cls");
        } while (pil < 7);
    } else {
    cout << "\nTERIMA KASIH" << endl;
    cout << "Program Was made by Muhammmad Naufal Abdillah (2410817310007)." << endl;
    }
}

void initH(){
    head = NULL;
}

void initHT(){
    head = NULL;
    tail = NULL;
}

int isEmptyH(){
    if (head == NULL) return true;
    else return false;
}

int isEmptyHT(){
    if (tail == NULL) return true;
    else return false;
}

void tambahDepanH(){
    cout << "Masukan Data : ";
    cin >> dataBaru;
    TNode *baru;
    baru = new TNode;
    baru ->data = dataBaru;
    baru ->next = NULL;
    baru->prev = NULL;

    if(isEmptyH() == true){
        head = baru;
        head-> next = NULL;
        head-> prev = NULL;
    } else {
        baru -> next = head;
        head -> prev = baru;
        head = baru;
    }
    cout << "Data \"" << dataBaru << "\" Berhasil dimasukan dibagian depan.";
}

void tambahDepanHT(){
    cout << "Masukan Data : ";
    cin >> dataBaru;
    TNode *baru;
    baru = new TNode;
    baru -> data = dataBaru;
    baru -> next = NULL;
    baru-> prev = NULL;

    if(isEmptyHT() == true){
        head = baru;
        tail = baru;
    } else {
        baru -> next = head;
        head -> prev = baru;
        head = baru;
    }
    cout << "Data \"" << dataBaru << "\" Berhasil dimasukan dibagian depan.";
}

void tambahBelakangH(){
    cout << "Masukan Data : ";
    cin >> dataBaru;
    TNode *baru, *bantu;
    baru = new TNode;
    baru -> data = dataBaru;
    baru -> next = NULL;
    baru -> prev = NULL;

    if(isEmptyH() == true) {
        head = baru;
    }else{
        bantu = head;
        while( bantu -> next != NULL){
            bantu = bantu -> next;
        }
        bantu -> next = baru;
        baru -> prev = bantu;
    }
    cout << "Data \"" << dataBaru << "\" berhasil di masukan di bagian belakang.";
}

void tambahBelakangHT(){
    cout << "Masukan Data : ";
    cin >> dataBaru;
    TNode *baru;
    baru = new TNode;
    baru -> data = dataBaru;
    baru -> next = NULL;
    baru -> prev = NULL;

    if(isEmptyHT() == true){
        head = baru;
        tail = baru;
    } else {
        tail -> next = baru;
        baru -> prev = tail;
        tail = baru;
    }
    cout << "Data \"" << dataBaru << "\" berhasil di masukan di bagian belakang.";
}

void tampilkanH(){
    TNode *bantu;
    bantu = head;
    
    if(isEmptyH() == false){
        while(bantu != NULL){
            cout << bantu -> data << ' ';
            bantu = bantu -> next;
        }
        cout << endl;
    } else {
        cout << "tidak terdapat data pada Linked List.";
    }
}

void tampilkanHT(){
    TNode *bantu;
    bantu = head;

    if(isEmptyHT() == false){
        while (bantu != tail -> next){
            cout << bantu -> data << ' ';
            bantu = bantu -> next;
        }
        cout << endl;
    }else{
        cout << "Tidak terdapat data pada Linked list.";
    }
}

void hapusDepanH(){
    TNode *hapus;
    string data;

    if(isEmptyH() == false){
        hapus = head;
        data = hapus -> data;
        if(head -> next != NULL){
            head = head -> next;
            head -> prev = NULL;
        } else{
            initH();
        }
        delete hapus;
        cout << "Data \"" << data << "\" yang berada di depan telah berhasil di hapus.";
    } else {
        cout << "Tidak terdapat data pada Linked List.";
    }
}

void hapusDepanHT(){
    TNode *hapus;
    string data;

    if(isEmptyHT() == false){
        hapus = head;
        data = hapus -> data;
        if(head -> next != NULL){
            head = head ->next;
            head ->prev = NULL;
        } else {
            initHT();
        }
        delete hapus;
        cout << "Data \"" << data << "\" yang berada di depan telah berhasil di hapus.";
    } else {
        cout  << "Tidak terdapat data pada Linked List.";
    }
}

void hapusBelakangH(){
    TNode *hapus;
    string data;

    if (isEmptyH() == false){
        hapus = head;
        while(hapus -> next != NULL){
            hapus = hapus -> next;
        }
        data = hapus->data;
        if(head->next != NULL){
            hapus->prev->next = NULL;
        } else {
            initH();
        }
        delete hapus;
        cout << "Data \"" << data << "\" yang berada di belakang telah berhasil di hapus.";
    } else {
        cout << "Tidak terdapat data pada Linked List.";
    }
}

void hapusBelakangHT(){
    TNode *hapus;
    string data;
    
    if(isEmptyHT() == false){
        hapus = tail;
        data = hapus -> data;
        if (head -> next != NULL){
            tail = tail -> prev;
            tail -> next = NULL;
        } else {
            initHT();
        }
        delete hapus;
        cout << "Data \"" << data << "\" yang berada di belakang telah berhasil di hapus.";
    }else{
        cout << "Tidak terdapat data pada Linked List";
    }
}

void bersihkanH(){
    TNode *bantu, *hapus;
    bantu = head;
    while(bantu != NULL){
        hapus = bantu;
        bantu = bantu -> next;
        delete hapus;
    }
    initH();
    cout << "Seluruh data pada Linked List telah dibersihkan";
}

void bersihkanHT(){
    TNode *bantu, *hapus;
    bantu = head;
    while(bantu != NULL){
        hapus = bantu;
        bantu = bantu -> next;
        delete hapus;
    }
    initHT();
    cout << "Seluruh data pada Linked List telah dibersihkan";
}