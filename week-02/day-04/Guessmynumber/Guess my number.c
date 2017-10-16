/*
Write a program where the program chooses a number between 1 and 100.
The player is then asked to enter a guess. If the player guesses wrong,
then the program gives feedback and ask to enter an other guess until the guess is correct.

Make the range customizable (ask for it before starting the guessing).
You can add lives. (optional)*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int guessthis;
int your_geuess;
int minimum_number;
int max_number;
int lives = 10;

int main()
{
    char difficulty = "";

    while (difficulty != '1' && difficulty != '2' && difficulty != '3') {
        printf("Hello! Please choose difficulty.\n");
        printf("1 = Easy (20 lives).\n");
        printf("2 = Medium (10 lives).\n");
        printf("3 = Hard (5 lives).\n");
        difficulty = getc(stdin);
        system("cls");
    }

    switch (difficulty) {
    case '1' :
        lives = 20;
        break;
    case '2' :
        lives = 10;
        break;
    case '3' :
        lives = 5;
        break;
    }

    printf("Enter the range minimum.");
    scanf("%d", &minimum_number);
    printf("Enter the range maximum.");
    scanf("%d", &max_number);
    system("cls");
    srand(time(NULL));
    guessthis = rand() % (max_number+1-minimum_number )+minimum_number;
              //rand() % (max_number + 1 - minimum_number) + minimum_number
    //printf("The random number is: %d\n", guessthis);
    //printf("range min: %d\n", minimum_number);
    //printf("range max: %d\n", max_number);

    while (guessthis != your_geuess) {
        guessing();
        if (lives == 0) {
            system("cls");
            printf("\n\n\nGame Over! Thank you for playing!\n\n\n");
            exit(0);
        }
    }
    return;
}

int guessing()
{
    printf("Try to guess my number! ;)\n");
    scanf("%d", &your_geuess);
    system("cls");

    if (your_geuess > guessthis) {
        printf("Wrong! :D My number is lower\n");
        --lives;
        printf("lives = %d\n", lives);
    } else if (your_geuess < guessthis) {
        printf("Wrong! :D My number is higher\n");
        --lives;
        printf("lives = %d\n", lives);
    } else {
        printf("\n\n\nOh my gosh I can't believe it. You Won!!!\n\n\n");
        exit(0);
    }

    if (your_geuess < minimum_number || your_geuess > max_number) {
        printf("Anyway, your guess is out of range... \n");
        printf("range is between %d and %d\n", minimum_number, max_number);
    }
    }
