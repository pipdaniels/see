#include <stdio.h>
#include <stdbool.h>


int main(){
    int x = 5;
    int y = 2;
    float answer = (float) x / y;
    printf("The answer is : %.1f\n", answer);       // This outputs the number as int without the remainder in decimal
    printf("The value of division inside the print statement is: %d\n", x/y);

    // Set the maximum possible scorre inthe game
    int maxScore = 500;

    // Set the players score
    int playerScore = 423;

    // calculate the score of the player in percentage and return the actual float value
    float score = (float) playerScore / maxScore * 100.0;
    printf("Congratulations Player 001, your score is %.2f\n", score);


    // Use constants for value that won;'t be changed. This is only readable, not writable and cannot be assigned a value after herre
    const int daysOfTheWeek = 7;
    const char firstDayOfTheWeek[] = "MONDAY";
    const int monthsInYear = 12;

    // It is good practice among C programmers to give constants names in Capital
    const char LANGUAGE[] = "ENG";

    ++x;
    printf("Value of X after increment %d\n", x);

    --y;
    printf("The value of Y after decrement %d\n", y);

    int peopleInRoom = 0;

    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    peopleInRoom += 5;

    printf("%d", peopleInRoom);

    printf("Greater than or less than < > %d\n", monthsInYear > daysOfTheWeek);
    printf("Not equal equal to %d\n", x != y);
    printf("Not Greater  or less than to %d\n", x < y);
    printf("Not equal to or grreater than %d\n", x >= y);
    printf("Not equal or less than to %d\n", x <= y);
    printf("Equal equal to %d\n", x == y);


    int isAdmin = 0;
    int isLoggedIn = 1;
    printf("Regular user %d\n", isLoggedIn && !isAdmin);
    printf("Has acess %d\n", isLoggedIn || isAdmin);
    printf("Is not logged in %d\n", !isLoggedIn || !isAdmin);

    bool isProgrammingFun = true;
    bool working = false;
    bool learning = true;

    printf("The wokring state: %d\n", working);
    printf("The state of learning is: %d\n", learning);
    printf("The state of isProgrammmingFun is: %d\n", isProgrammingFun);

    const int votingAge = 18;
    int voterAge = 32;
    printf("The voter is elligible to vote %d\n", voterAge >= votingAge);

    if (voterAge >= votingAge) {
        printf("Congratulations!, the Voter is elligible to Cast votes!\n");
    } else {
        printf("Uh Oh, Voter is not elligible to cast a vote at this time!\n");
    }

    if (x > y){
        printf("X is greater than Y\n");
    }
    else {
        printf("X is not greater than Y\n");
    }

    return 0;
}
