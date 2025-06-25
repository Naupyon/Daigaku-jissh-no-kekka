#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct TNode{
    string data;
    TNode *next;
};

TNode *head, *tail;
string newData;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty(){
    return head == NULL && tail == NULL;
}

void tambahDepanH(){
    cout << "Masukan Data : "; cin >> newData;

    TNode *baru = new TNode;
    baru ->data = newData;
    baru ->next = head;
    head = baru;

    cout << "Data Masuk di Depan\n";
}

void tambahDepanHT(){
    cout << "Masukkan Data : "; cin >> newData;

    TNode *baru = new TNode;
    baru ->data = newData;
    baru ->next = head;
    head = baru;

    if (tail == NULL) tail = baru;
    cout << "Data Masuk di Depan\n";
}

void tambahBelakangH(){
    cout << " Masukan Data : "; cin >> newData;

    TNode *baru = new TNode;
    baru ->data = newData;
    baru ->next = NULL;

    if (isEmpty()) head = baru;
    else{
        TNode*bantu = head;
        while (bantu->next != NULL){
            bantu = bantu ->next;
        }
        bantu ->next = baru;
    }
    cout << "Data Masuk di Belakang\n";
}

void tambahBelakangHT(){
    cout << "Masukan Data : "; cin >> newData;

    TNode *baru = new TNode;
    baru ->data = newData;
    baru ->next = NULL;

    if (isEmpty()) head = tail = baru;
    else{
        tail ->next = baru;
        tail = baru;
    }
    cout << "Data Masuk di Belakang\n";
}

void tampilkanH(){ 
    if (!isEmpty()){
        TNode *bantu = head;
        while (bantu != NULL){
            cout << bantu ->data << " ";
            bantu = bantu ->next;
        }
        cout << "\n";
    }
    else cout << "Data Kosong\n";
}

void tampilkanHT(){
    TNode *bantu;
    bantu = head;
    if (!isEmpty()){
        while (bantu != tail ->next){
            cout << bantu ->data << ' ';
            bantu = bantu ->next;
        }
        cout << endl;
    }
    else cout << "Data Kosong\n";
}

void hapusDepanH(){
    if (!isEmpty()){
        TNode *hapus = head;
        string data = hapus ->data;
        head= head ->next;
        delete hapus;
        cout << data << " Terhapus dari Depan\n";
    } 
    else cout << "Data Kosong\n";
}

void hapusDepanHT(){
    if (!isEmpty()){
        TNode *hapus = head;
        string data = hapus ->data;
        head = head ->next;
        delete hapus;

        if (head == NULL) tail = NULL;
        cout << data << " Terhapus dari Depan\n";
    }
    else cout << "Data Kosong\n";
}

void hapusBelakangH(){
    if (!isEmpty()){
        if (head ->next == NULL){
            string data = head ->data;
            delete head;
            head = NULL;
            cout << " Terhapus dari belakang\n";
        } else {
            TNode *bantu = head;
            while (bantu ->next->next != NULL) bantu = bantu ->next;

            string data = bantu ->next->data;
            delete bantu ->next;
            bantu ->next = NULL;
            cout << data << " Terhapus dari Belakang\n";
        }
    } else cout << "Data Ksong";
}

void hapusBelakangHT(){
    if (!isEmpty()) {
        if (head == tail) {
            string data = head->data;
            delete head;
            head = tail = NULL;
            cout << data << " terhapus dari belakang\n";
        } else {
            TNode *bantu = head;
            while (bantu->next != tail) bantu = bantu->next;
            string data = tail->data;
            delete tail;
            tail = bantu;
            tail->next = NULL;
            cout << data << " terhapus dari belakang\n";
        }
    } else cout << "Data kosong\n";
}

void clearH(){
    TNode *bantu = head;
    while (bantu != NULL){
        TNode *hapus = bantu;
        bantu = bantu ->next;
        delete hapus;
    }
    init();
    cout << "LInked LIst Dikosongkan\n";
}

void clearHT() {
    TNode *bantu = head;
    while (bantu != NULL) {
        TNode *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    init();
    cout << "Linked List dikosongkan\n";
}

int main(){
    int menu, pil;
    menu:
    cout << "Single Linked List non Circular (SLLNC)" << endl;
    cout << "=======================================" << endl;
    cout << "Silahkan pilih program SLLNC yang ingin dijalankan!" << endl;
    cout << "1. SLLNC dengan Head" << endl;
    cout << "2. SLLNC dengan Head dan Tail" << endl;
    cout << "3. Quit" << endl;
    cout << "Pilihan: "; cin >> menu;
    system("cls");
    if(menu==1){
        do{
            cout << "Single Linked List non Circular (SLLNC) (Head)" << endl;
            cout << "==============================================" << endl;
            cout << "Silahkan pilih program SLLNC yang ingin dijalankan!" << endl;
            cout << "1. Tambah Depan" << endl;
            cout << "2. Tambah Belakang" << endl;
            cout << "3. Tampilkan Data" << endl;
            cout << "4. Hapus Depan" << endl;
            cout << "5. Hapus Belakang" << endl;
            cout << "6. Reset" << endl;
            cout << "7. Kembali ke Menu" << endl;
            cout << "Pilihan: "; cin >> pil;

            switch(pil){
                case 1: tambahDepanH(); break;
                case 2: tambahBelakangH(); break;
                case 3: tampilkanH(); break;
                case 4: hapusDepanH(); break;
                case 5: hapusBelakangH(); break;
                case 6: clearH(); break;
                default: system("cls"); goto menu;
            }

            cout << "\npress any key to continue" << endl;
            getch();
            system("cls");

        } while (pil < 7);
    } 
    else if(menu==2){
        do{
            cout << "Single Linked List non Circular (SLLNC) (Head dan Tail)" << endl;
            cout << "==============================================" << endl;
            cout << "Silahkan pilih program SLLNC yang ingin dijalankan!" << endl;
            cout << "1. Tambah Depan" << endl;
            cout << "2. Tambah Belakang" << endl;
            cout << "3. Tampilkan Data" << endl;
            cout << "4. Hapus Depan" << endl;
            cout << "5. Hapus Belakang" << endl;
            cout << "6. Reset" << endl;
            cout << "7. Kembali ke Menu" << endl;
            cout << "Pilihan: "; cin >> pil;

            switch(pil){
                case 1: tambahDepanHT(); break;
                case 2: tambahBelakangHT(); break;
                case 3: tampilkanHT(); break;
                case 4: hapusDepanHT(); break;
                case 5: hapusBelakangHT(); break;
                case 6: clearHT(); break;
                default: system("cls"); goto menu;
            }

            cout << "\npress any key to continue" << endl;
            getch();
            system("cls");

        } while (pil < 7);
    }
    else{
        cout << "\nTERIMA KASIH" << endl;
        cout << "Program was made by Muhammad Naufal Abdillah (241081731007)" << endl;
    }
}