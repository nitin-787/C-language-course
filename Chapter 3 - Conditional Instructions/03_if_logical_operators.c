#include<stdio.h>

int main(){
    int age;
    int money;

    printf("Enter your age: ");
    scanf("%d", &age);

    

    if (age >= 18 && age <= 80)
    {
        printf("Yes, you can drive");
    } else if (age >= 16) {
        printf("do you have learning license?");
    }
    else if (age <= 15) {

        printf("do you have sufficient money? ");
        scanf("%d", &money);

        if (money == 500)
        {
            printf("Thik hai 500 de do!");
        } else {
            printf("give me you parent's phone number or challen");
    }
        
    }
     else {
        printf("no, you cannot drive");
    }
    

    return 0;
}