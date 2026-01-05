#include <stdio.h>
#include <stdbool.h>

void myFunction(char name[])
{
  printf("Hello %s\n", name);
}

// int x, y;

void Sum(int x, int y)
{
  if (x <= 0 || y <= 0)
  {
    printf("The number entered must be a positive interger\n");
  }
  else
  {
    int ans = x + y;
    printf("The answer is %d\n", ans);
  }
}

// void sum() {
//   int x = 5;
//   int y = 10;
//   int sum = x + y;
//   printf("The sum of x + y is: %d\n", sum);
// }

int sum(int x, int y)
{
  return x + y;
}

void theFunction(int numbers[5])
{
  for (int i = 0; i < 5; i++)
  {
    printf("%d\n", numbers[i]);
  }
}

int main()
{
  bool isLoggedIn = true;
  bool isAdmin = false;
  int clearanceLevel = 3;

  if (isLoggedIn && (isAdmin || clearanceLevel <= 2))
  {
    printf("Access Granted\n");
  }
  else
  {
    printf("Acess Denied\n");
  }

  // Setting door code that will checked to match the input and decide if the acess will be granted
  int doorCode = 4563;
  if (doorCode == 4561)
  {
    printf("Door is open!\n");
  }
  else
  {
    printf("Uh oh! Wrong code, Acess denied\n");
  }

  int myNum = 5;

  if (myNum > 0)
  {
    printf("This is a positive number \n");
  }
  else if (myNum < 0)
  {
    printf("This is a negative value\n");
  }
  else
  {
    printf("This is zero\n");
  }

  if (myNum % 2 == 0)
  {
    printf("The number is an even number\n");
  }
  else
  {
    printf("The number is an odd nummber\n");
  }

  int temprature = -12;
  if (temprature < 0)
  {
    printf("Uh oh, the weeather is freezing!\n");
  }
  else if (temprature <= 20 && temprature > 0)
  {
    printf("The weather is cool\n");
  }
  else
  {
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
  switch (dayOfTheWeek)
  {
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
  while (boy < 5)
  {
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
  do
  {
    printf("%d\n", i);
    i++;
  } while (i < 4);

  /* int number;
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

  for Loop is used when you the number of time you want to repeat a code block based on the condition

  the syntax l=ook slike
  for (condition; condition; condition){
    // block of code to be executed
  }

  */

  int j;
  for (j = 0; j <= 10; j++)
  {
    printf("%d\n", j);
  }

  // This for loop calculates the sum of the numbers from 1 to 5
  int sum = 0;
  int k;
  for (k = 0; k <= 5; k++)
  {
    printf("Sum is %d\n", k);
    sum = sum + k;
  }

  for (i = 5; i > 0; i--)
  {
    printf("This is the outer i: %d\n", i);

    for (j = 0; j < 10; ++j)
    {
      printf("Inner J : %d\n", j);
    }
  }

  int table2 = 2;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table2, i, table2 * i);
  }

  int table3 = 3;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table3, i, table3 * i);
  }

  int table4 = 4;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table4, i, table4 * i);
  }
  int table5 = 5;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table5, i, table5 * i);
  }
  int table6 = 6;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table6, i, table6 * i);
  }
  int table7 = 7;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table7, i, table7 * i);
  }
  int table8 = 8;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table8, i, table8 * i);
  }
  int table9 = 9;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table9, i, table9 * i);
  }
  int table10 = 10;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table10, i, table10 * i);
  }
  int table11 = 11;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {
    printf("%d x %d = %d\n", table11, i, table11 * i);
  }
  int table12 = 12;
  // Printing the multiplication table for number 2
  for (i = 0; i <= 12; i++)
  {

    if (i == 2)
    {
      continue;
    }

    if (i == 6)
    {
      break;
    }
    printf("%d x %d = %d\n", table12, i, table12 * i);
  }

  int myNumbers[] = {3, -3, 4, 4, 5, 0, 7};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

  for (i = 0; i < length; i++)
  {
    if (myNumbers[i] < 0)
    {
      continue; // Skip  negative numbers
    }

    if (myNumbers[i] == 0)
    {
      break; // Stop loop when zero is found
    }
    printf("My Number %d\n", myNumbers[i]);
  }

  // Array is a list of same data type assigned to one variable
  int array[] = {2, 3, 4, 5, 6, 7, 7, 8, 9};
  printf("%d\n", array[1]);
  array[1] = 9;
  printf("%d\n", array[1]);
  // Settins an array with size before value is assigned
  int barray[4];
  barray[0] = 3;
  barray[1] = 4.0;
  barray[2] = 3.0;
  barray[3] = 3.0;

  // printf("%d\n", barray[]);

  printf("This is the size of myNumbers array %zu\n", sizeof(myNumbers));
  printf("This is the size of array %zu\n", sizeof(array));
  int lengthes = sizeof(array) / sizeof(array[0]);
  printf("This is the lengtth size of the array %d\n", lengthes);

  for (i = 0; i < lengthes; i++)
  {
    printf("%d\n", array[i]);
  }

  int matrix[2][3] = {{2, 3, 4}, {5, 6, 3}};
  matrix[0][2] = 6;
  printf("%d\n", matrix[0][2]);

  int i, j;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      printf("%d\n", matrix[i][j]);
    }
  }

  int score[4][2] = {{4, 5}, {3, 4}, {5, 4}, {5, 6}};
  int cube[3][4][5];

  char text[] = "The string type in C is not one it is a character array";
  char greetings[] = "Hello World!";
  char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

  printf("%s\n", greetings);
  printf("%c\n", greetings[7]);

  greetings[0] = 'Y';
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  printf("%zu\n", strlen(greetings)); // This prints out the string length
  printf("%zu\n", sizeof(greetings)); // This prints out the size in bytes

  // // Concatenates text with greetings, and the concatenation is stored in the first variable mentioned
  // strcat(text, greetings);
  printf("%s\n", text);

  char str1[20] = "Hello World";
  char str2[20];
  char str3[] = "Hi";

  // // copy str1 to str2
  strcpy(str2, str1);

  // // prints print str2
  printf("%s\n", str2);

  // // COmpare str1 and str3
  printf("%zu\n", strcmp(str1, str3));

  // reading user input using scanf()

  // int userNum;
  // printf("Enter a positive number value here\n");

  // scanf("%d", &userNum);

  // printf("The entered value is: %d\n", userNum);

  int age;
  float height;

  printf("Enter your age and height here: \n");
  scanf("%d %f", age, &height);

  printf("Hello, the age enterred is %p\n", &age);
  printf("Hello, the height enterred is %f\n", height);

  int *ptr = &age;
  // Referrenecing
  printf("%d\n", ptr);

  // Derefrencing
  printf("%d\n", &age);
  printf("%d\n", *ptr);

  myFunction("Kola!");
  myFunction("Sola");
  myFunction("Fola");
  // sum(4, 8);
  Sum(4, 5);

  int number[5] = {45, 56, 67, 78, 89};
  theFunction(number);

  int array[6];

  // array[0] = sum(4, 5);
  // array[1] = sum(32,42);
  // array[2] = sum(42, 53);
  // array[3] = sum(32,48);
  // array[4] = sum(43, 54);
  // array[5] = sum(35,44);

  for (int i = 0; i < 6; i++)
  {
    printf("The result of %d is %d \n", i + 1, array[i]);
  }

  return 0;
}
