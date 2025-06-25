#include <iostream>
#include <conio.h>
#include <stdlib.h>

#define MAX 20

using namespace std;

struct Queue{
    int Depan, Belakang, Ukuran;
    int Q[MAX];
};

Queue Antrean;

int IsEmpty(){
    if (Antrean.Depan == Antrean.Belakang){
        return 1;
    }else{
        return 0;
    }
}

int IsFull(){
    if ((Antrean.Depan + 1) % Antrean.Ukuran == Antrean.Depan){
        return 1;
    }else{
        return 0;
    }
}

void INSERT (int x){
    if (IsFull() == 1){
        cout << "Queue penuh" << endl;
    }else{
        Antrean.Q[Antrean.Belakang] = x;
        cout << "Data: " << Antrean.Q[Antrean.Belakang] << " Masuk Ke dalam Queue " << endl;
        Antrean.Belakang = (Antrean.Belakang + 1) % Antrean.Ukuran;
    }
}
void DELETE(){
    if(IsEmpty() == 1){
        cout << "Queue kosong" << endl;
    }else{
        cout << "Data yang dihapus " << Antrean.Q[Antrean.Depan] << endl;
        Antrean.Depan = (Antrean.Depan + 1) % Antrean.Ukuran;
    }
}

void CETAKLAYAR(){
    if(IsEmpty() == 1){
        cout << "Queue kosong" << endl;
    }else{
        int i = Antrean.Depan;
        cout << "isi Queue: " << endl;
        while(i != Antrean.Belakang){
            cout << "Queue ke " << i << " = " << Antrean.Q[i] << endl;
            i = (i + 1) % Antrean.Ukuran;
        }
    }
}

void RESET(){
    Antrean.Depan = 0;
    Antrean.Belakang = 0;
    Antrean.Ukuran = MAX;
    cout << "Queue telah di reset" << endl;
}

void INIT(){
    Antrean.Depan = 0;
    Antrean.Belakang = 0;
    Antrean.Ukuran = MAX;
}

int Pil;
char PILIHAN[2];

int main(){
INIT();
do{
    cout << "\nQUEUE" << endl;
    cout << "===============" << endl;
    cout << "1. INSERT" << endl;
    cout << "2. DELETE" << endl;
    cout << "3. CETAK QUEUE" << endl;
    cout << "4. RESET QUEUE" << endl;
    cout << "5. QUIT" << endl;
    cout << "PILIHAN: "; cin >> PILIHAN;
    Pil = atoi(PILIHAN);
    switch(Pil)
    {
        case 1:
            int x;
            cout << "Masukan Nilai: "; cin >> x;
            INSERT(x);
            break;

        case 2:
            DELETE();
            break;

        case 3:
            CETAKLAYAR();
            break;

        case 4:
            RESET();
            break;

        default:
            cout << "TERIMA KASIH" << endl;
            break;
    }
    cout << "Tekan tombol apa saja untuk melanjukan";
    getch();
    system("cls");
}
    while (Pil < 5);
    return 0;
}