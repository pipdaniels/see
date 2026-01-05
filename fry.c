#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// void myFunction();
// void myOtherFunction();

// int main(){

//   myFunction();
//   printf("This is the square root of 16: %.1f\n", sqrt(16));
//   printf("%f\n", ceil(4.6));
//   printf("%f\n", floor(4.6));
//   printf("%f\n", pow(4, 6));
//   printf("%f\n", floor(4.6));
//   printf("%f\n", floor(4.6));
//   return 0;
// }

// // Use of regular function versus inline function
// // The advantage is that inline function is executed where it is called and not jumped to, this give some efficiency in speed of execution

// // Regular function
// int square(int x){
//   return x * x;
// }

// // Inline function
// inline int square(int x){
//   return x * x;
// }

// void myFunction(){
//   printf("Print somehting out\n");
//   myOtherFunction();
// }

// void myOtherFunction(){
//   printf("This is the otherr function\n");
// }

int sum(int k);
int factorial(int y);
void goodMorninng()
{
  printf("Hello, Good morning!\n");
}
void goodEvening()
{
  printf("Hello, Good Evening!\n");
}

void greet(void (*func)())
{
  func();
}

int main()
{
  int result = sum(10);
  printf("%d\n", result);

  printf("The factorial of 5 is: %d\n", factorial(5));

  int (*ptr)(int, int) = sum;
  int result = ptr(4, 5);
  printf("The days of sum is the\n", result);

  greet(goodEvening);
  greet(goodMorninng);

  FILE *fptr;
  // This fopen() function takes in the filename and n=mode which could be r for read, w for write and a for apend

  // This creates a file if the file does not exist
  // fptr = fopen("filename.txt", "w");

  // This appends to a file
  // fptr = fopen("filename.txt", "a");

  // This reads a file
  fptr = fopen("filename.txt", "r");

  if (fptr == NULL)
  {
    printf("The file you try to open does not exist!");
  }

  // create a string variable to store up to 100 character
  char text[100];

  // This reads the content of the file
  fgets(text, 100, fptr);

  // Print out the content that has been read and stored in the variable | This only rreads the first line of the file to read all lines in the file, use while loop
  printf("%s\n", text);

  if (fptr != NULL)
  {
    while (fgets(text, 100, fptr))
    {
      printf("%s\n", fptr);
    }
  }
  else
  {
    printf("Not able to open the file!");
  }
  // This writes content in to the open file
  // fprintf(fptr, "\n This is th efirst file to be writtent, \nSigned by Seun Adeniyi");

  // This closes the file after writing
  fclose(fptr);

  return 0;
}

int sum(int k)
{
  if (k > 0)
  {
    return k + sum(k - 1);
  }
  else
  {
    return 0;
  }
}

int factorial(int y)
{
  if (y > 0)
  {
    return y * factorial(y - 1);
  }
  else
  {
    return 1;
  }
}
