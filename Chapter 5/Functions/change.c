#include<stdio.h>
void change(int b){
    b = 64;
}

int main(){
    int b = 233;
    b = 67;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b after change is %d\n", b);
    
    return 0;
}