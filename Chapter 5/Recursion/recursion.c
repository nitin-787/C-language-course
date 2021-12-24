#include<stdio.h>
int fact(int n);

int main(){
    int a = 8;
    printf("The factorial of %d is %d", a, fact(a));

    return 0;
}

int fact(int n){
    printf("Calling factorial %d\n", n);
    if (n == 1 || n == 0){
        return 1;
    }
    // if(0){
        
    // }
    else{
        return n * fact(n-1);  // 5 * fact(5-1)
    }
}