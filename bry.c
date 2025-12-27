#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void myFunction(){
  printf("I just got executed\n");
}

// int x, y;

void Sum(int x, int y){
  if (x <= 0 || y <= 0){
    printf("The number entered must be a positive interger\n");
  } else {
    int ans = x + y;
    printf("The answer is %d\n", ans);
  }
}

void sum() {
  int x = 5;
  int y = 10;
  int sum = x + y;
  printf("The sum of x + y is: %d\n", sum);
}

int main (){
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  myFunction();
  sum();
  Sum(4,5);

  return 0;
}



