#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct TNode {
    string data;
    TNode *next;
    TNode *prev;
};

TNode *head, *tail;
string dataBaru;

void init(){
    head = NULL;
    tail = NULL;
}

int isEmpty() {
    return head == NULL 
        && tail == NULL;
}

void tambahDepanH() {
    cout << "Masukkan Data: "; cin >> dataBaru;
    TNode *baru = new TNode{dataBaru, NULL, NULL};

    if (isEmpty()) {
        head = baru;
        head->next = head;
        head->prev = head;
    } else {
        TNode *bantu = head->prev;

        baru->next = head;
        baru->prev = bantu;
        head->prev = baru;
        bantu->next = baru;
        head = baru;
    }
    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di depan.\n";
}

void tambahDepanHT() {
    cout << "Masukkan Data: "; cin >> dataBaru;
    TNode *baru = new TNode{dataBaru, NULL, NULL};

    if (isEmpty()) {
        head = tail = baru;
        head->next = head;
        head->prev = head;
    } else {
        baru->next = head;
        baru->prev = tail;
        head->prev = baru;
        tail->next = baru;
        head = baru;
    }
    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di depan.\n";
}

void tambahBelakangH() {
    cout << "Masukkan Data: "; cin >> dataBaru;
    TNode *baru = new TNode{dataBaru, NULL, NULL};

    if (isEmpty()) {
        head = baru;
        head->next = head;
        head->prev = head;
    } else {
        TNode *bantu = head->prev;

        baru->next = head;
        baru->prev = bantu;
        bantu->next = baru;
        head->prev = baru;
    }
    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di belakang.\n";
}

void tambahBelakangHT() {
    cout << "Masukkan Data: "; cin >> dataBaru;
    TNode *baru = new TNode{dataBaru, NULL, NULL};

    if (isEmpty()) {
        head = tail = baru;
        head->next = head;
        head->prev = head;
    } else {
        baru->next = head;
        baru->prev = tail;
        tail->next = baru;
        head->prev = baru;
        tail = baru;
    }
    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di belakang.\n";
}

void tampilkanH() {
    if (isEmpty()) {
        cout << "Tidak terdapat data pada Linked List\n";
        return;
    }
    TNode *bantu = head;
    do {
        cout << bantu->data << ' ';
        bantu = bantu->next;
    } while (bantu != head);
    cout << endl;
}

void tampilkanHT() {
    if (isEmpty()) {
        cout << "Tidak terdapat data pada Linked List\n";
        return;
    }
    TNode *bantu = head;
    do {
        cout << bantu->data << ' ';
        bantu = bantu->next;
    } while (bantu != head);
    cout << endl;
}

void hapusDepanH() {
    if (isEmpty()) {
        cout << "Tidak terdapat data pada Linked List\n";
        return; 
    }

    TNode *hapus = head;
    string data = hapus->data;

    if (head->next == head) init();
    else {
        TNode *bantu = head->prev;
        head = head->next;
        head->prev = bantu;
        bantu->next = head;
    }

    delete hapus;
    cout << "Data \"" << data << "\" yang berada di depan telah dihapus.\n";
}

void hapusDepanHT() {
    if (isEmpty()) {
        cout << "Tidak terdapat data pada Linked List\n"; 
        return;
    }
    TNode *hapus = head;
    string data = hapus->data;

    if (head == tail) init();
    else {
        head = head->next;
        head->prev = tail;
        tail->next = head;
    }

    delete hapus;
    cout << "Data \"" << data << "\" yang berada di depan telah dihapus.\n";
}

void hapusBelakangH() {
    if (isEmpty()) {
        cout << "Tidak terdapat data pada Linked List\n"; 
        return;
    }    
    TNode *bantu = head->prev;
    string data = bantu->data;

    if (head->next == head) {
        init();
        delete bantu;
    } else {
        TNode *prevBantu = bantu->prev;
        prevBantu->next = head;
        head->prev = prevBantu;
        delete bantu;
    }

    cout << "Data \"" << data << "\" yang berada di belakang telah dihapus.\n";
}

void hapusBelakangHT() {
    if (isEmpty()) {
        cout << "Tidak terdapat data pada Linked List\n"; 
        return;
    }
    TNode *hapus = tail;
    string data = hapus->data;

    if (head == tail) init();
    else {
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
    }

    delete hapus;
    cout << "Data \"" << data << "\" yang berada di belakang telah dihapus.\n";
}

void clearH() {
    if (isEmpty()) {
        cout << "Linked List sudah kosong.\n";
        return; 
    }

    TNode *bantu = head;
    do {
        TNode *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    } while (bantu != head);

    init();
    cout << "Semua data telah dihapus dari Linked List.\n";
}

void clearHT() {
    if (isEmpty()) {
        cout << "Linked List sudah kosong.\n";
        return;
    }

    TNode *bantu = head;
    do {
        TNode *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    } while (bantu != head);

    init();
    cout << "Semua data telah dihapus dari Linked List.\n";
}

int main(){
    int menu, pil;
    menu:
    cout << "Double Linked List Circular (DLLC)" << endl;
    cout << "=======================================" << endl;
    cout << "Silahkan pilih program DLLNC yang ingin dijalankan!" << endl;
    cout << "1. DLLC dengan Head" << endl;
    cout << "2. DLLC dengan Head dan Tail" << endl;
    cout << "3. Quit" << endl;
    cout << "Pilihan: "; cin >> menu;
    system("cls");
    if(menu==1){
        do{
            cout << "Double Linked List Circular (DLLC) (Head)" << endl;
            cout << "==============================================" << endl;
            cout << "Silahkan pilih program DLLC yang ingin dijalankan!" << endl;
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

        } while (pil != 7);
    } 
    else if(menu==2){
        do{
            cout << "Double Linked List Circular (DLLC) (Head dan Tail)" << endl;
            cout << "==============================================" << endl;
            cout << "Silahkan pilih program DLLC yang ingin dijalankan!" << endl;
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

        } while (pil != 7);
    }
    else{
        cout << "\nTERIMA KASIH" << endl;
        cout << "Program was made by Muhammad Naufal Abdillah (2410817310007)" << endl;
    }
}