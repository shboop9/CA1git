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
            printf("Your Chose AIML!\n");
            break;

        case 3:
            //the use chooses ECE
            printf("Your Chose ECE!\n");
            printf("Your are an electronics engineer");
            break;

        case 4:
            printf("Your Chose CIVIL!");
            break;

        default:
            printf("Invalid Input!");
    }
}
