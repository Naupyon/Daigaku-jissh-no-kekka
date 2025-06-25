#include <stdio.h>
int main(){
    float a, b, i, j, x, y; float Total;
    scanf ("%f %f %f %f %f %f", &a ,&b, &i, &j, &x, &y);
    Total = (((a-b)*i)/j)-(x+y);
    printf("%.3f\n\n", Total);
    return 0;
}