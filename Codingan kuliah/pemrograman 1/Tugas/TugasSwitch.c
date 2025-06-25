#include <stdio.h>

int main(){
    printf("Masukan Nilaimu");
    int Nilai;
    char Grade;
    scanf("%d", &Nilai);
    switch (Nilai / 10) {
        case 10:
        case 9:
        case 8:
            Grade = 'A';
            break;
        case 7:
            Grade = 'B';
            break;
        case 6:
            Grade = 'C';
            break;
        case 5:
            Grade = 'D';
            break;
        default:
            Grade = 'E';
            break;
    }
    printf("Grade:%c\nNilai:%d", Grade,Nilai);
    return 0;
}