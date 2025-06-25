#include <stdio.h>
#include <string.h>

int main(){
char kode[100],pesan[100];
int bintang=0,pagar=0;

fgets(kode, sizeof(kode), stdin);
fgets(pesan, sizeof(pesan), stdin);

kode[strcspn(kode, "\n")]= '\0';
pesan[strcspn(pesan, "\n")]= '\0';

if(strlen(kode) != strlen(pesan)){
    printf("Panjang Kalimat berbeda, pesan palsu");
    return 0; }

int panjang=strlen(kode);
for(int i=0; i<panjang; i++){
    if(kode[i]==' ' && pesan[i]==' '){
        continue;
    }

    if(kode[i]==pesan[i]){
        printf("*");
        bintang++;}
        
    else{ printf("#");
    pagar++;}
}

printf("\n *=%d",bintang);
printf("\n #=%d \n",pagar);

if(bintang>=pagar){
    printf("Pesan Asli \n");}
else{printf("Pesan Palsu \n");}

return 0;
}