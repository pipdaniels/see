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
