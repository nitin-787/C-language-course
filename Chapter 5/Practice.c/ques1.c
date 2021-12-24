#include<stdio.h>
float average(int a, int b, int c);

int main(){
    int a, b, c;
    printf("Enter any three integer\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average of three number is %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c){
    float result;
    result = (a + b + c)/3;
    return result;
}