#include <stdio.h>
int main()
    {
    int nilai;
    char grade;
    printf("masukan nilai");
    scanf("%d", &nilai);
    if (nilai>=80) {grade = 'A';}
    else if (nilai>=70) { grade = 'B';}
    else if (nilai>=60) { grade = 'C';} 
    else if (nilai>=50) { grade = 'D'; }
    else {grade = 'E';}
    printf("Grade: %c\n", grade);
    return 0;
    }