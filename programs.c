#include <stdio.h>

int main(){
    int action;
    printf("Enter the course you would like to see 1,2,3,4: ");
    scanf("%d", &action);

    switch(action){
        case 1:
            //the user chooses CSE
            printf("You Chose CSE!\n");
            printf("Your are a computer engineer!");
            break;

        case 2:
            //the user chooses AIML
            printf("Your Chose AIML!\n");
            printf("Your are an AI engineer!");
            break;

        case 3:
            //the use chooses ECE
            printf("Your Chose ECE!\n");
            printf("Your are an electronics engineer");
            break;

        case 4:
            //the user chooses CIVIL
            printf("Your Chose CIVIL!\n");
            printf("Your are a civil engineer");
            break;

        default:
            printf("Invalid Input!");
    }
}
