#include <stdio.h>
int main(){
    int Matrik_A[100][100], Matrik_B[100][100], Matrik_AXB[100][100];
    int i, j, a, n, jumlah =0;
    scanf("%d", &n);
    printf("Matrik A\n");

    for(i =0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &Matrik_A[i][j]);}
    }
    printf("Matrik B\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &Matrik_B[i][j]);}
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            for(a = 0; a < n ; a++){
                jumlah = jumlah + Matrik_A[i][a] * Matrik_B[a][j];
            }
            Matrik_AXB[i][j] = jumlah;
            jumlah = 0;
        }
    }

    printf("Matrik AXB\n");
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d  ", Matrik_AXB[i][j]);}
        printf("\n");}
}