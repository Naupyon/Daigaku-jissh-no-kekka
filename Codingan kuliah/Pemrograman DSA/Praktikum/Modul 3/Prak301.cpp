#include <conio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct TNode {
    string data;
    TNode *next;
};

TNode *kepala, *ekor;

int pil;
char pilihan[2];
string dataBaru, data;

void init();
int isEmpty();

void tambahDepan();
void tambahBelakang();
void hapusDepan();
void hapusBelakang();
void menampilkan();
void reset();
void cariData();
void hapusData();
void sisipkanSebelum();
void sisipkanSesudah();

int main()
{
    do{
        cout << "Single Lingked List Circular (SLLC)" << endl;
        cout << "===================================" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Hapus Depan" << endl;
        cout << "4. Hapus Belakang" << endl;
        cout << "5. Tampilan Data" << endl;
        cout << "6. Hapus Semua Elemen" << endl;
        cout << "7. Cari Data" << endl;
        cout << "8. Hapus Setiap data Tertentu" << endl;
        cout << "9. Sisipkan Node/Data Baru Sebelum Data tertentu" << endl;
        cout << "10. Sisipkan Node/Data Baru Setelah Data Tertentu" << endl;
        cout << "11. Quit" << endl;
        cout << "Pilhan : ";
        cin >> pilihan;
        pil=atoi(pilihan);
        
        switch(pil){
            case 1:
                tambahDepan();
                break;
            case 2:
                tambahBelakang();
                break; 
            case 3:
                hapusDepan();
                cout << "Data \""<<data<<"\" yang berada di depan telah berhasil di hapus." << endl;
                break;
            case 4:
                hapusBelakang();
                cout << "Data \""<< data<<"\" yang berada di belakang telah berhasil di hapus." << endl;
                break;
            case 5:
                menampilkan();
                break;
            case 6:
                reset();
                break;
            case 7:
                cariData();
                break;
            case 8:
                hapusData();
                break;
            case 9:
                sisipkanSebelum();
                break;
            case 10:
                sisipkanSesudah();
                break;
            default:
                cout << "\nTERIMA KASIH" << endl;
                cout << "Program was made by Muhammad Naufal Abdillah (2410817310007)" << endl;
        }
        cout << "\nPress any key to continue!" << endl;
        getch();
        system("cls");

    } while (pil<11);

}

    void init(){
        kepala = NULL;
        ekor = NULL;
    }

   int isEmpty (){
        if (kepala == NULL) return 1;
        else return 0;
   }

   void tambahDepan(){
        cout << "Masukan data : ";
        TNode *baru;
        baru = new TNode;
        cin >> dataBaru;
        baru ->data = dataBaru;
        baru ->next = baru;
    
        if (isEmpty() == 1){
            kepala = baru;
            ekor = baru;
        } else {
            baru -> next = kepala;
            kepala = baru;
            ekor -> next = kepala;
        }
        cout << "Data \""<< dataBaru <<"\" berhasil dimasukan di bagian depan" << endl;
   }

   void tambahBelakang(){
        cout << "Masukan data : ";
        TNode *baru;
        baru = new TNode;
        cin >> dataBaru;
        baru -> data = dataBaru;
        baru -> next = baru;

        if(isEmpty() == 1){
            kepala = baru;
            ekor = baru;
        } else {
            ekor -> next = baru;
            ekor = baru;
            ekor -> next = kepala;
        }
        cout << "Data \""<< dataBaru <<"\" berhasil dimasukan di bagian belakang" << endl;
    }

    void hapusDepan(){
        if (isEmpty() == 0){
            TNode *hapus;
            hapus = kepala;
            data = hapus ->data;

            if (kepala != ekor){
                kepala = kepala ->next;
                ekor ->next = kepala;
            } else {
                init();
            }
            
            delete hapus;
        } else cout << "Tidak terdapat data pada Linked List" << endl;
    }

    void hapusBelakang(){
        if (isEmpty() == 0){
            TNode *hapus,*newEkor;
            hapus = ekor;
            data = hapus -> data;

            if (kepala != ekor){
                newEkor = kepala;
                while(newEkor->next != ekor) {
                    newEkor = newEkor ->next;
                }
                ekor = newEkor;
                ekor -> next = kepala;
            } else {
                init();
            }

            delete hapus;
        } else cout << "Tidak terdapat data pada Linked List" << endl;
    }

    void menampilkan(){
        if (isEmpty() == 0){
            TNode *bantu;
            bantu = kepala;
            
            do{
                cout << bantu ->data<<' ';
                bantu = bantu ->next;
            } while (bantu != kepala);
            cout << endl;
        } else cout << "Tidak terdapat data pada Linked List" << endl;
    }

    void reset(){
        if(isEmpty() == 0){
            TNode *bantu, *hapus;
            bantu = kepala;

            do {
                hapus = bantu;
                bantu = bantu -> next;
                delete hapus;
            } while (bantu != kepala);

            init();
            cout << "Seluruh elemen pada Linked List telah dibersihkan." << endl;
        } else cout << "Tidak terdapat data pda Linked List" << endl;
    }

    void cariData(){
        if (isEmpty() == 0){
            string cari;
            cout << "Masukan data yang ingin di cari : ";
            cin >> cari;

            TNode *bantu, *hapus, *newEkor, *bantuTampilkan;
            bool apaDitemukan = false;

            bantu = kepala;

            do {
                if (cari == bantu -> data){
                    cout << "Setiap data yang berada di dalam tanda kurung ([...])"
                    << "merupakan data yang anda cari" << endl;
                    cout << "Linked List : ";
                    bantuTampilkan = kepala;

                    do {
                        if (cari == bantuTampilkan->data)
                        cout << "["<<bantuTampilkan->data<<"]";
                        else 
                            cout << bantuTampilkan->data<<' ';
                        bantuTampilkan = bantuTampilkan -> next;
                    }while(bantuTampilkan != kepala);

                     apaDitemukan = true;
                    cout << endl;
                    break;
                }
                bantu = bantu -> next;
            } while(bantu != kepala);
            
            if (apaDitemukan == false)
                cout << "Data \""<< cari << "\"tidak di temukan pada linked list" << endl;
        }  else cout << "Tidak terdapatt data pada Linked List." << endl;
    }

    void hapusData(){
        if (isEmpty() == 0){
            string cari;
            cout << "Masukan data yang ingin di hapus : ";
            cin >> cari;

            TNode *bantu, *sebelum, *hapus[255], *bantu2;
            int hitung = 0;
            bool apaDitemukan = false;

            bantu = kepala;

            do{
                bantu2 = bantu;
                if(cari == bantu ->data){
                    hapus[hitung++] = bantu;
                    apaDitemukan = true;
                    if(bantu != kepala && bantu != ekor){
                        sebelum->next = bantu ->next;
                        bantu2 = sebelum;
                    }
                }
                sebelum = bantu2;
                bantu = bantu ->next;
            } while(bantu != kepala);

            if(apaDitemukan == true){
                for (int i= 0; i < hitung; i++) {
                    if (hapus[i] == kepala) {
                        hapusDepan();
                    } else if (hapus[i] == ekor){
                        hapusBelakang();
                    } else {
                        delete hapus[i];
                    }
                }
                cout << "Setiap data \""<<cari<<"\" yang terdapat pada Linked List telah dihapus";
            } else cout << "Data \""<<cari<<"\" tidak ditemukan pada Linked List." << endl;

        }else cout << "Tidak Terdapat data pada Linked List." << endl;
    }

    void sisipkanSebelum(){
        if(isEmpty() == 0){
            TNode *bantu, *sebelum;
            string nextData;
            bool apaAda;

            bantu = kepala;
            sebelum = ekor;

            cout << "Sisipkan data baru sebelum data : ";
            cin >> nextData;

            do {
                if(nextData == bantu -> data){
                    apaAda = true;
                    break;
                } else {
                    sebelum = bantu;
                    bantu = bantu -> next;
                }
            } while (bantu != kepala);

            if (apaAda == true) {
                cout << "Masukkan data yang ingin ditambahkan : ";
                cin >> dataBaru;

                TNode *baru;
                baru = new TNode;

                baru -> data = dataBaru;
                baru -> next = bantu;

                sebelum -> next = baru;

                if (bantu == kepala){
                    kepala = baru;
                }

                cout << "Data \""<<dataBaru<<"\" berhasil disisipkan sebelum data \""<<nextData<<"\"." << endl;
            } else {
                cout << "Tidak terdapat \""<<nextData<<"\" pada Linked List." << endl;
            }
        } else cout << "Tidak terdapat data oada Linked List." << endl;
    }

    void sisipkanSesudah(){
        if (isEmpty() == 0){
            TNode *bantu;
            string prevData;
            bool apaAda;
            
            bantu = kepala;

            cout << "Sisipkan data baru setelah data : ";
            cin >> prevData;

            do {
                if(prevData == bantu -> data){
                    apaAda = true;
                    break;
                } else {
                    bantu = bantu -> next;
                }
            } while ( bantu != kepala);

            if (apaAda == true){
                cout << "Masukan data yang ingin ditambahkan : ";
                cin >> dataBaru;

                TNode *baru;
                baru = new TNode;

                baru -> data = dataBaru;
                baru -> next = bantu -> next;
                bantu -> next = baru;

                if (bantu == ekor){
                    ekor = baru;
                }

                cout  << "Data \""<<dataBaru<<"\" berhasil disisipkan sebekum data \""<<prevData<<"\"." << endl;
            } else {
                cout << "Tidak terdapat \""<<prevData<<"\" pada Linked List." << endl;
            }
        } else cout << "Tidak terdapat data oada Linked List." << endl;
    }