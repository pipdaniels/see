#include <stdio.h>
#include <string.h>

/*
This file is to explore the possibilities around the file handling, from creation, opening, closing,editing, and deleting
*/

struct myStructure
{                    // Structure declaration
  char myLetter;     // Member (int variable)
  int myNum;         // Member (char variable)
  char myString[30]; // Member (string variable)
}; // End the strructurre with a semi colon

struct Owner
{
  char firstName[9];
  char lastName[9];
};

struct Car
{
  char name[20];
  char model[20];
  int year;
  struct Owner owner; // Nested structure
};

union myData
{
  int myNum;
  char myLetter;
  char myString[30];
};

typedef float Temperature;

enum Level
{
  HIGH,   // This is 0 by defaul
  MEDIUM, // Tgis is 1
  LOW,    // This is 2, that is the value that will be printed out when the enum is called
};

enum Status
{
  ACTIVE = 10,
  PENDING,  // Now 11
  PAUSED,   // Now 12
  COMPLETED // Now 13
};

int main()
{

  enum Level myVar = MEDIUM;
  enum Status myStat = ACTIVE;

  printf("The enum Value %d\n", myVar);
  printf("The enum Value %d\n", myStat);

  Temperature today = 43.3;
  Temperature tomorrow = 19.4;

  printf("The temp today is %f\n", today);
  printf("The temp tomorrow is %f\n", tomorrow);
  // Create a structiure variable and assign valuie to it
  struct myStructure s1 = {'D', 45, "Smethunng here"};
  struct myStructure s2 = {'F', 67, "Garybascb"};

  struct Owner person = {"Seun", "Adeniyi"};

  // Modify value the memmbers of Structure s1
  s1.myLetter = 'G';
  s1.myNum = 4;
  strcpy(s1.myString, "Something nnew\n");

  // Print values of the structs members
  printf("%c\n", s1.myLetter);
  printf("%d\n", s1.myNum);
  printf("%s\n", s1.myString);
  printf("%c\n", s2.myLetter);
  printf("%d\n", s2.myNum);
  printf("%s\n", s2.myString);

  // Add data to the Car structure
  struct Car c1 = {"Ford", "Accura", 1997, person};
  struct Car c2 = {"Topyota", "Corolla", 2007, person};
  struct Car c3 = {"Porsche", "Cayenne", 1987, person};
  struct Car c4 = {"BMW", "X3", 2003, person};

  // Print out the car data
  printf("Car 1 has Name %s, Model %s and made in the year %d and owned by %s %s\n", c1.name, c1.model, c1.year, c1.owner.firstName, c1.owner.lastName);
  printf("Car 2 has Name %s, Model %s and made in the year %d and owned by %s %s\n", c2.name, c2.model, c2.year, c2.owner.firstName, c2.owner.lastName);
  printf("Car 3 has Name %s, Model %s and made in the year %d and owned by %s %s\n", c3.name, c3.model, c3.year, c3.owner.firstName, c3.owner.lastName);
  printf("Car 4 has Name %s, Model %s and made in the year %d and owned by %s %s\n", c4.name, c4.model, c4.year, c4.owner.firstName, c4.owner.lastName);

  return 0;
}
