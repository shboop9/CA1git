#include <stdio.h>

int main(){
    int action;
    printf("Enter the course you would like to see 1,2,3,4: ");
    scanf("%d", &action);

    switch(action){
        case 1:
            printf("You Chose CSE!\n");
            break;
        case 2:
            //the user chooses AIML
            printf("Your Chose AIML!\n");
            printf("Your are an AI engineer!");
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
