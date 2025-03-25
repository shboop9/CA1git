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
            printf("Your Chose ECE!\n");
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
