#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct TNode {
    string data;
    TNode *next;
};

TNode *head;

void init() {head = NULL;}
int isEmpty() {return (head == NULL);}

void tambahDepan() {
    string dataBaru;
    cout << "Masukkan data: ";
    cin >> dataBaru;

    TNode *baru = new TNode;
    baru->data = dataBaru;

    if (isEmpty()) {
        baru->next = baru; 
        head = baru;
    } else {
        TNode *last = head;
        while (last->next != head) {
            last = last->next;
        }
        baru->next = head;
        last->next = baru;
        head = baru;
    }

    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di bagian depan." << endl;
}

void tambahBelakang() {
    string dataBaru;
    cout << "Masukkan data: ";
    cin >> dataBaru;

    TNode *baru = new TNode;
    baru->data = dataBaru;

    if (isEmpty()) {
        baru->next = baru;
        head = baru;
    } else {
        TNode *last = head;
        while (last->next != head) {
            last = last->next;
        }
        last->next = baru;
        baru->next = head;
    }

    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di bagian belakang." << endl;
}

void hapusDepan() {
    if (!isEmpty()) {
        string data;
        if (head->next == head) {
            data = head->data;
            delete head;
            head = NULL;
        } else {
            TNode *last = head;
            while (last->next != head) {
                last = last->next;
            }

            TNode *hapus = head;
            data = hapus->data;
            head = head->next;
            last->next = head;
            delete hapus;
        }
        cout << "Data \"" << data << "\" di depan berhasil dihapus." << endl;
    } else {
        cout << "Tidak terdapat data pada Linked List." << endl;
    }
}

void hapusBelakang(){
    if (!isEmpty()){
        string data;
        if (head->next == head) {
            data = head->data;
            delete head;
            head = NULL;
        } else {
            TNode *prev = NULL;
            TNode *curr = head;
            while (curr->next != head) {
                prev = curr;
                curr = curr->next;
            }
            data = curr->data;
            prev->next = head;
            delete curr;
        }
        cout << "Data \"" << data << "\" di belakang berhasil dihapus." << endl;
    } else {
        cout << "Tidak terdapat data pada Linked List." << endl;
    }
}

void tampilkan(){
    if (!isEmpty()){
        TNode *bantu = head;
        cout << "Data dalam Linked List: ";
        do {
            cout << bantu->data << " ";
            bantu = bantu->next;
        } while (bantu != head);
        cout << endl;
    } else cout << "Tidak terdapat data pada Linked List." << endl;
}

int main(){
    init();
    int pil;

    do {
        cout << "Single Linked List Circular (SLLC) - Hanya HEAD" << endl;
        cout << "=====================================" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Hapus Depan" << endl;
        cout << "4. Hapus Belakang" << endl;
        cout << "5. Tampilkan Data" << endl;
        cout << "6. Quit" << endl;
        cout << "Pilihan: ";
        cin >> pil;

        switch (pil) {
            case 1: tambahDepan(); break;
            case 2: tambahBelakang(); break;
            case 3: hapusDepan(); break;
            case 4: hapusBelakang(); break;
            case 5: tampilkan(); break;
            default: cout << "\nTERIMA KASIH" << endl;
        }

        cout << "\nPress any key to continue!" << endl;
        getch();
        system("cls");
    } while (pil != 6);
    return 0;
}