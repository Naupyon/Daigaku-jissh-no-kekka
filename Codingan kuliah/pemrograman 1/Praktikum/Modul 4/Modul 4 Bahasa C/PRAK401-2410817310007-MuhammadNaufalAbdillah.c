#include <stdio.h>
int main(){
    int angka;char simbol;
    scanf("%d %c", &angka, &simbol);

    for(int i = 1; i <= 50; i++){
      if (i % angka == 0){
        printf("%c ", simbol);
      continue;
        }
      printf("%d ", i);
    }
      return 0;
}