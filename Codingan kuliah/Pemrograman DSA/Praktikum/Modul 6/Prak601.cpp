#include <iostream>
#include <conio.h>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

void sequentialSearch (const vector<int> &nums, int target){
    vector<int>indices;
    for (auto i = 0; i < nums.size(); i++){
        if (nums[i] == target) indices.push_back(i);
    }
    if (indices.empty()) cout << "\nangka " << target << " tidak ditemukan pada array" << endl;
    else cout << "angka " << target << " terdapat pada array sebanyak " << indices.size() << " kali" << endl;
        cout << "angka " << target << " terletak pada indeks : ";
            for (auto i = 0 ; i < indices.size(); i++){
                cout << indices[i];
                if(i != indices.size() - 1) cout << ",";
            }
        cout << "." << endl;
        cout << "\nTekan tombol mana saja untuk melanjutkan...." << endl;
        getch();
        system ("cls");
}

void binarySearch (const vector<int> &nums, int target){
    int high = nums.size() -1;
    int low = 0;
    int index = -1;

    while (low <= high){
        int mid = low + (high - low)/2;

        if (nums[mid] == target){
            index = mid;
            break;
        }
        if (nums[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    
    if (index == -1) cout << "angka " << target << " tidak ditemukan pada array" << endl;
    else cout << "angka " << target << " terdapat pada indeks ke " << index << endl;
    cout << "\nTekan tombol mana saja untuk melanjutkan...." << endl;
    getch();
    system ("cls");
}

void clearScreen(){
    system("cls");
}

void explain(){
cout << "\nJelaskan Perbedaan Sequential Searching/Linear Search dengan Binary Search." << endl;
cout << "===================================================================================================================================" << endl;
cout << "\nSEQUENTIAL SEARCH/LINEAR SEARCH :" << endl;
cout << "Sequential Seaching adalah metode yang memeriksa elemen satu persatu dari awal hingga akhir." << endl;
cout << "kelebihan dari sequential seaching yaitu : mudah di implementasikan dan tidak memerlukan data untuk di urutkan lebih dulu." << endl;
cout << "kekurangan dari sequential seaching yaitu : kurang efisiensi untuk daftar yang besar karena harus memeriksa semua elemen." << endl;
cout << "-------------------------------------------------- " << endl;
cout << "Kompleksitas Waktu : " << endl;
cout << "1. Best Scenario: O(1), elemen yang di cari berada pada daftar awal." << endl;
cout << "2. Normal Scenario: O(n), rata-rata diperlukan setengah elemen untuk di periksa." << endl;
cout << "3. Worst Scenario: O(n), elemen yang di cari berada di paling belakang atau tidak ada sama sekali." << endl;
cout << "kompleksitas ruang: O(1), karena penggunaan memori konstan." << endl;
cout << "Sequential Seaching tidak memiliki syarat khusus." << endl;
cout << "-------------------------------------------------- " << endl;
cout << "Sequential Seaching dapat diterapkan pada: " << endl;
cout << "1. Data yang Tidak Terurut" << endl;
cout << "2. Data berukuran kecil" << endl;
cout << "3. Pencarian Node Pada Linked List" << endl;
cout << "===================================================================================================================================" << endl;
cout << endl;

cout << "===================================================================================================================================" << endl;
cout << "\nBINARY SEARCH: " << endl;
cout << "Membagi array menjadi dua bagian melalui indeks tengah mid." << endl;
cout << "Bandingkan elemen tengah dengan elemen target." << endl;
cout << "Jika elemen tengah sama dengan elemen target, elemen pada array sudah ditemukan." << endl;
cout << "Jika elemen tengah kurang dari elemen target, cari di bagian kanan array." << endl;
cout << "Jika elemen tengah lebih dari elemen target, cari di bagian kiri array." << endl;
cout << "Ulangi kedua tahap di atas sehingga elemen target ditemukan." << endl;
cout << "kelebihan dari Binary seaching yaitu : sangat efisien untuk daftar yang besar " << endl;
cout << "karena secara signifikan mengurangi jumlah perbandingan yang perlu dilakukan." << endl;
cout << "kekurangan dari Binary seaching yaitu : Membutuhkan data untuk diurutkan terlebih dahulu." << endl;
cout << "Jika data sering berubah, biaya untuk terus mengurutkan bisa signifikan." << endl;
cout << "-------------------------------------------------- " << endl;
cout << "Kompleksitas Waktu : " << endl;
cout << "1. Best Scenario: O(1), elemen yang di cari adalah elemen tengah." << endl;
cout << "2. Normal Scenario: O(log n), disebabkan pembagian interval waktu pencarian." << endl;
cout << "3. Worst Scenario: O(log n), dikarenakan setiap dari langkah membagi setiap raung pencaharian jadi dua." << endl;
cout << "-------------------------------------------------- " << endl;
cout << "kompleksitas ruang: " << endl;
cout << "- O(1), karena penggunaan memori konstan." << endl;
cout << "- O(log n) , karena membutuhkan ruang pada stack panghilan." << endl;
cout << "Binary Search memiliki syarat yang mana data array harus terurut terlebih dulu." << endl;
cout << "-------------------------------------------------- " << endl;
cout << "Binary Search dapat diterapkan pada: " << endl;
cout << "1. Machine Learning" << endl;
cout << "2. Computer Graphics (algoritma untuk ray tracing atau texture mapping)" << endl;
cout << "3. Pencarian data pada dataset besar" << endl;
cout << "===================================================================================================================================" << endl;
cout << "\nTekan tombol mana saja untuk melanjutkan...." << endl;
getch();
clearScreen();
}

int main (){
    int opt, target;
    do{
        cout << "===Pilih Menu===" << endl;
        cout << "1. Sequential Searching" << endl;
        cout << "2. Binary Searching" << endl;
        cout << "3. Jelaskan perbedaan sequential Searching dan Binary Searching" << endl;
        cout << "4. Exit" << endl;
        cout << "=================" << endl;
        cout << "Masukan Pilih : "; cin >> opt;
        clearScreen();


        switch(opt){
            case 1:{
                vector<int> nums (100);
                mt19937_64 rng(random_device{}());
                uniform_int_distribution<int> dist(1, 50);

                for (auto &val: nums){
                    val = (dist(rng)); 
                }
                cout << "generating 100 numbers.." << endl;
                    for (auto i = 0; i < nums.size(); i++){
                        cout << nums[i] << "["<< i << "]" << " ";
                    }
                cout << "\n";
                cout << "Masukan Angka yang ingin dicari : "; cin >> target;

                sequentialSearch(nums, target);
                break;
            }

            case 2:{
                int size;
                cout << "Masukkan Ukuran dari Vector : ";
                cin >> size;
                if (size < 1){
                    cout << "Error : Mohon masukan Bilangan di atas Angka 0" << endl;
                    break;
                }
                vector<int> nums(size);
                mt19937_64 rng(random_device{}());
                uniform_int_distribution<int> dist(1, 100);

                for (auto &val: nums){
                    val = (dist(rng));
                }
                sort(nums.begin(), nums.end());

                cout << "Generating " << size << " numbers" << endl;
                    for (auto i = 0; i < nums.size(); i++){
                        cout << nums[i] << "["<< i << "]" << " ";
                    }
                cout << "\n";
                cout << "Masukan Angka yang ingin dicari : "; cin >> target;

                binarySearch(nums, target);
                break;
                
            }

            case 3:
                explain();
                break;

            case 4:
                cout << "\nTERIMAKASIH" << endl;
                cout << " This Programme was made by Muhammad Naufal Abdillah (2410817310007)" << endl;
                break;

            default:
                cout << "\nTekan tombol mana saja untuk melanjutkan...." << endl;
                getch();
                clearScreen();
        }
    }
    while (opt != 4 );
    return 0;
}