#include<stdio.h>

int main(){
    
    int i = 1;

    while(i<=10){
        printf("%d\n", i);
        // i = i + 1;
        i--;
    }
    return 0;
}

// i = 1 + 1 = 2
// i = 2 + 1 = 3
// i = 3 + 1 = 4
// ....
// i = 9 + 1 = 10
// i = 10 + 1 = 11



// This is an infinite loop


// i = 1 - 1 = 0
// i = 2 - 1 = -1
// i = 3 - 1 = -2
// ....
// i = 9 - 1 = -8
// i = 10 - 1 = -11