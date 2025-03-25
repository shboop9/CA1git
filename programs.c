#include <stdio.h>

int main(){
    int action;
    printf("Enter the course you would like to see 1,2,3,4: ");
    scanf("%d", &action);

    switch(action){
        case 1:
            printf("You Chose CSE!");
            break;
        case 2:
            printf("Your Chose AIML!");
            break;

        case 3:
            printf("Your Chose ECE!");
            break;

        case 4:
            printf("Your Chose CIVIL!");
            break;

        default:
            printf("Invalid Input!");
    }
}
