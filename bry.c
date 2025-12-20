#include <stdio.h>
#include <stdbool.h>

int main (){
  bool isLoggedIn = true;
  bool isAdmin = false;
  int clearanceLevel = 3;

  if ( isLoggedIn && (isAdmin || clearanceLevel <= 2)){
    printf("Access Granted\n");

  } else {
    printf("Acess Denied\n");
  }


  // Setting door code that will checked to match the input and decide if the acess will be granted
  int doorCode = 4563;
  if ( doorCode == 4561 ){
    printf("Door is open!\n");
  } else {
    printf("Uh oh! Wrong code, Acess denied\n");
  }

  int myNum = 5;

  if (myNum > 0){
    printf("This is a positive number \n");
  } else if (myNum < 0){
    printf("This is a negative value\n");
  } else {
    printf("This is zero\n");
  }


  if (myNum % 2 == 0){
    printf("The number is an even number\n");
  } else {
    printf("The number is an odd nummber\n");
  }

  int temprature = -12;
  if (temprature < 0){
    printf("Uh oh, the weeather is freezing!\n");
  } else if (temprature <= 20 && temprature > 0) {
    printf("The weather is cool\n");
  } else {
    printf("The weather is hot!\n");
  }

/*
The switch command in C works by executing the block of code at once, compares the case to the expression, and execute the one that matches

  switch (condition){
    case x:
      block of code to execute
      break;
    case y:
      block of code to execute
      break;
    case z;
      block of code to execute
      break;
    default:
      block of code to execute
  }

The default statement is optonal

*/
  int dayOfTheWeek = 5;
  switch (dayOfTheWeek){
    case 1:
      printf("The day is Monday\n");
      break;
    case 2:
      printf("The day is Tuesday\n");
      break;
    case 3:
      printf("The day is Wednesday\n");
      break;
    case 4:
      printf("The day is Thursday\n");
      break;
    case 5:
      printf("The day is Friday\n");
      break;
    case 6:
      printf("The day is Saturday\n");
      break;
    case 7:
      printf("The day is Sunday\n");
      break;
    default:
      printf("The day of the week only ranges from 1 to 7, Kindly a number in the range of 1 to 7\n");
  }

/*
While loop is used to check and execute a command as long as the condition remains true

while (condition){
  execute this code;
}

*/
  int boy = 3;
  while (boy < 5){
    // boy++;
    printf("%d\n", boy);
    boy++;
  }
/*
The do while loop is a varriant of the while loop that works by doing something as long as the condition is true

do {
  // Code block to be executed
} while (Condition);
*/
  int i = 0;
  do {
    printf("%d\n", i);
    i++;
  } while (i < 4);

  int number;
  do {
    printf("Enter a positive number:");
    scanf("%d", &number);
  } while (number > 0);

  while (i <= 12){
    printf("%d\n", i);
    i += 2;
  }

  int dice = 1;
  while (dice <= 6){
    if (dice < 6){
      printf("%d\n", dice);
      printf("Yatzy!\n");
    } else {
      printf("UH Oh, try again!");
    }
    dice = dice + 1;
  }

  return 0;
}


