#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct TNode{
    int data;
    TNode *next;
};

TNode *head, *tail;

int isKosong() {
    if (head == NULL) {
        cout << "Linked list kosong.\n";
        return 1;
    } else {
        return 0;
    }
}

void insertDepan(int newData){
    TNode *baru = new TNode;
    baru-> data = newData;
    baru-> next = head;
    head = baru;

    if(tail == NULL){
        tail = baru;
}
    cout << "Data Masuk di depan\n";
}

void insertBelakang(int newData){
    TNode *baru = new TNode;
    baru-> data = newData;
    baru-> next = NULL;

if (isKosong()){
    head = tail = baru;
} else{
    tail-> next = baru;
    tail = baru;
}
    cout << "Data masuk di belakang\n ";
}

void tampil(){
    TNode *bantu = head;
    if(!isKosong()){
        cout << "isi data dala list :" << endl;
        while (bantu !=NULL){
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << " \n";
    }else{
        cout << "Data kosong\n ";
    }
}

void hapusDepan(){
    if(!isKosong()){
        TNode *hapus = head;
        int d = hapus->data;
        head = head->next;
        delete hapus;
        if(head == NULL) {
            tail = NULL;
        }
        cout << d << "Terhapus dari depan\n";
    }else{
        cout << "Data kosong\n";
    }
}

void hapusBelakang(){
    if(!isKosong){
        if(head == tail){
            int d = head->data;
            delete head;
            head = tail = NULL;
            cout << d << "Terhapus dari belakang\n ";
        }else{
            TNode *bantu = head;
            while (bantu-> next!= tail){
                bantu = bantu-> next;
            }
            int d = tail->data;
            delete tail;
            tail = bantu;
            tail-> next = NULL;
            cout << d << "Terhapus dari belakang\n ";
        }
    }else{
        cout << "Data kosong ";
    }
}

void Bersih(){
    TNode *bantu = head;
    while (bantu != NULL){
        TNode *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "Queue Dikosongkan\n ";
}

void init(){
    head = NULL;
    tail = NULL;
}

int main(){
    int ch;
    init();
    do {
        cout << "\nQUEUE\n";
        cout << "=================\n";
        cout << "1. INSERT DEPAN\n";
        cout << "2. INSERT BELAKANG\n";
        cout << "3. DELETE DEPAN\n";
        cout << "4. DELETE BELAKANG\n";
        cout << "5. CETAK LINKED LIST\n";
        cout << "6. RESET LINKED LIST\n";
        cout << "7. QUIT\n";
        cout << "PILIHAN : "; cin >> ch;
        int x;
        switch (ch){
            case 1:
                cout << "Masukan Nilai "; cin >> x;
                insertDepan(x);
                break;
            
            case 2:
                cout << "Masukan nilai "; cin >> x;
                insertBelakang(x);
                break;

            case 3: 
                hapusDepan();
                break;
            
            case 4:
                hapusBelakang();
                break;

            case 5:
                tampil();
                break;

            case 6:
                Bersih();
                break;
            
            case 7:
                cout << "TERIMA KASIH\n";
                break;

            default:
                cout << "Pilihan tidak valid\n";
                break;
        }
        if (ch != 7){
            cout << "Tekan tombol apa saja untuk melanjuatkan....";
            getch();
            system("cls");
        }
    } while (ch != 7);
    return 0;
}