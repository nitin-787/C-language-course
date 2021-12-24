#include<stdio.h>

int sum(int a, int b);                // Parameter         /  Formal argument

int main(){
    // int c;
    // c = sum(20, 10);               // Argument          /  Actual argument

    printf("The value a and b is %d\n", sum(10, 10));

    return 0;
}

int sum (int a, int b){
    int result;
    result = a + b;
    return result;
}