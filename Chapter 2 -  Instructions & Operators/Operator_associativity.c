#include<stdio.h>

int main(){
    int a = 4, b = 5,  c = 2 ;

    printf("The value of a + b/c is %d\n", a + b /c);

    // () has maximum precendece priority
    printf("The value of a + b/c is %d\n", (a + b) /c);
    printf("The value of a + b/c is %d\n", a * (b /c));

    // Left to right rule
    printf("The value of a + b/c is %d\n", a * b /c);
    printf("The value of a + b/c is %d\n", a / b * c);
    return 0;
}