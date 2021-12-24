#include<stdio.h>

int main(){
    int button;
    printf("Enter the button (1-3): ");
    scanf("%d", &button);
    switch (button)
    {
    case 1: 
        printf("Turn on the lights\n");
        break;
    case 2: 
        printf("Turn on the fan\n");
        break;
    case 3: 
        printf("Turn on the ac\n");
        break;
    
    default:
    printf("wrong input");
    }

    return 0;
}