#include<stdio.h>

void func();                                                          //Function Prototype

int main(){
    
    printf("Function Start\n");
    func();                                                          //Function Call
    printf("Function End\n");
    
    return 0;
}

void func(){
    printf("Hi I'm function!\n");                                   // Function defination
}