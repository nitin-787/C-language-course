#include<stdio.h>

int main(){
    // int a, b;
    
    // printf("Enter the number: ");
    // scanf("%d", &a);

    // if (a % 2 == 0) {
    //     //body
    //     // it will only excecute when the condtion is true.
    //     printf("%d number is even", a);
    // } else {
    //     // it will only excecute when the condtion is !true.
    //     printf("%d number is odd", a);

    // }

    int money;

    printf("Enter your money: ");
    scanf("%d", &money);

    if (money == 100)
    {
        printf("Buy me coffe");
    } else if (money == 200) {
        printf("Buy me coffe & keep 100 rupee");

    } else {
        printf("else");
    }
    
    return 0;
}