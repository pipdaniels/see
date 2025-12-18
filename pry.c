#include <stdio.h>


int main(){
    int x = 5;
    int y = 2;
    float answer = (float) x / y;
    printf("The answer is : %.1f\n", answer);       // This outputs the number as int without the remainder in decimal
    printf("The value of division inside the print statement %d", x/y);

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

    return 0;
}
