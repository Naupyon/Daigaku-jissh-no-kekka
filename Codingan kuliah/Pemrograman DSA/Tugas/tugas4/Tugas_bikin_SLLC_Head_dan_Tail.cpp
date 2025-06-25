#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct TNode {
    string data;
    TNode *next;
};

TNode *head, *tail;

void init() {
    head = NULL;
    tail = NULL;
}

int isEmpty() {return (head == NULL);}

void tambahDepan() {
    string dataBaru;
    cout << "Masukkan data : "; cin >> dataBaru;

    TNode *baru = new TNode;
    baru->data = dataBaru;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
        tail->next = head;
    } else {
        baru->next = head;
        head = baru;
        tail->next = head;
    }

    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di bagian depan." << endl;
}

void tambahBelakang() {
    string dataBaru;
    cout << "Masukkan data : "; cin >> dataBaru;

    TNode *baru = new TNode;
    baru->data = dataBaru;
    baru->next = NULL;

    if (isEmpty()) {
        head = tail = baru;
        tail->next = head;
    } else {
        baru->next = head;
        tail->next = baru;
        tail = baru;
    }

    cout << "Data \"" << dataBaru << "\" berhasil dimasukkan di bagian belakang." << endl;
}

void hapusDepan() {
    if (!isEmpty()) {
        TNode *hapus = head;
        string data = hapus->data;

        if (head == tail) {
            init();
        } else {
            head = head->next;
            tail->next = head;
        }
        delete hapus;
        cout << "Data \"" << data << "\" yang berada di depan telah berhasil dihapus." << endl;
    } else cout << "Tidak terdapat data pada Linked List." << endl;
}

void hapusBelakang() {
    if (!isEmpty()) {
        TNode *hapus = tail;
        string data = hapus->data;

        if (head == tail) {
            init();
        } else {
            TNode *bantu = head;
            while (bantu->next != tail) {
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = head;
        }
        delete hapus;
        cout << "Data \"" << data << "\" yang berada di belakang telah berhasil dihapus." << endl;
    } else cout << "Tidak terdapat data pada Linked List." << endl;
}

void tampilkan() {
    if (!isEmpty()) {
        TNode *bantu = head;
        cout << "Data dalam Linked List: ";
        do {
            cout << bantu->data << " ";
            bantu = bantu->next;
        } while (bantu != head);
        cout << endl;
    } else cout << "Tidak terdapat data pada Linked List." << endl;
}

int main() {
    init();
    int pil;

    do {
        cout << "Single Linked List Circular (SLLC) - Head dan Tail" << endl;
        cout << "==============================" << endl;
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
            default:
            cout << "\nTERIMA KASIH" << endl;
        }

        cout << "\nPress any key to continue!" << endl;
        getch();
        system("cls");
        
    } while (pil != 6);
    return 0;
}