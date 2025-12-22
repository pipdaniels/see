#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (){
  char text[] = "The string type in C is not one it is a character array";
  char greetings[] = "Hello World!";
  char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};

  printf("%s\n", greetings);
  printf("%c\n", greetings[7]);

  greetings[0] = 'Y';
  printf("%s\n", greetings);
  printf("%s\n", greetings2);
  printf("%zu\n", strlen(greetings));   // This prints out the string length
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


  //reading user input using scanf()

  // int userNum;
  // printf("Enter a positive number value here\n");

  // scanf("%d", &userNum);

  // printf("The entered value is: %d\n", userNum);

  int age;
  float height;

  printf("Enter your age and height here: \n");
  scanf("%d %f", &age, &height);

  printf("Hello, the age enterred is %p\n", &age);
  printf("Hello, the height enterred is %f\n", height);



  return 0;
}


