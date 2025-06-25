#include <iostream>
#include <conio.h>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

Node* head, * tail;

void initialize()
{
	head = tail = NULL;
}

bool isEmpty()
{
    return tail == NULL;
}

void insertHead(int dataBaru)
{
	Node* baru = new Node;
	baru->data = dataBaru;
	baru->next = head;
	head = baru;

	if (tail == NULL)
	{
		tail = baru;
	}

	cout << "Data masuk ke Head" << endl;
}

void insertTail(int dataBaru)
{
    Node* baru = new Node;
    baru->data = dataBaru;
    baru->next = NULL;

    if (isEmpty())
    {
        head = tail = baru;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
    cout << "Data masuk ke Tail" << endl;
}

void display() {
    if (!isEmpty())
    {
        Node* bantu = head;
        while (bantu != NULL)
        {
            cout << bantu->data << " ";
            bantu = bantu->next;
        }
        cout << endl;
    }
    else
    {
        cout << "Data kosong" << endl;
    }
}

void deleteHead() {
    if (!isEmpty()) {
        Node* hapus = head;
        int d = hapus->data;
        head = head->next;
        delete hapus;

        if (head == NULL)
        {
            tail = NULL;
        }
        cout << d << " dihapus dari Head" << endl;
    }
    else {
        cout << "Data kosong" << endl;
    }
}

void deleteTail()
{
    if (!isEmpty())
    {
        if (head == tail)
        {
            int d = head->data;
            delete head;
            head = tail = NULL;
            cout << d << " dihapus dari Tail" << endl;
        }
        else
        {
            Node* bantu = head;
            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }
            int d = tail->data;
            delete tail;
            tail = bantu;
            tail->next = NULL;
            cout << d << " dihapus dari Tail" << endl;
        }
    }
    else
    {
        cout << "Data kosong" << endl;
    }
}

void clear()
{
    Node* bantu = head;
    while (bantu != NULL) {
        Node* hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "Semua data dihapus" << endl;
}

int main()
{
    int pilihan;
    initialize();
    do
    {
        cout << "SINGLE LINKED LIST NON-CIRCULAR" << endl;
        cout << "==============" << endl;
        cout << "1. Insert Head" << endl;
        cout << "2. Insert Tail" << endl;
        cout << "3. Delete Head" << endl;
        cout << "4. Delete Tail" << endl;
        cout << "5. Display Data" << endl;
        cout << "6. Reset Data" << endl;
        cout << "7. Quit" << endl;
        cout << "PILIHAN : "; cin >> pilihan;

        int angka;

        switch (pilihan) {
        case 1:
            cout << "Masukkan Nilai: "; cin >> angka;
            insertHead(angka);
            break;
        case 2:
            cout << "Masukkan Nilai: "; cin >> angka;
            insertTail(angka);
            break;
        case 3:
            deleteHead();
            break;
        case 4:
            deleteTail();
            break;
        case 5:
            display();
            break;
        case 6:
            clear();
            break;
        case 7:
            cout << "Terima kasih telah menggunakan program" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
            break;
        }
        if (pilihan != 7)
        {
            cout << "Tekan sembarang tombol untuk melanjutkan..." << endl;
            getch();
            system("cls");
        }
    }
    while (pilihan != 7);
    return 0;
}