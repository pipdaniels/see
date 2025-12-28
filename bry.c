#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void myFunction(char name[]){
  printf("Hello %s\n", name);
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

// void sum() {
//   int x = 5;
//   int y = 10;
//   int sum = x + y;
//   printf("The sum of x + y is: %d\n", sum);
// }

int sum(int x, int y){
  int sum = x + y;
  return sum;
}


void theFunction(int numbers[5]){
  for (int i = 0; i < 5; i++){
    printf("%d\n", numbers[i]);
  }
}

int main (){
  myFunction("Kola!");
  myFunction("Sola");
  myFunction("Fola");
  sum(4, 8);
  Sum(4,5);

  int number[5] = {45, 56, 67, 78, 89};
  theFunction(number);

  int array[6];

  array[0] = sum(4, 5);
  array[1] = sum(32,42);
  array[2] = sum(42, 53);
  array[3] = sum(32,48);
  array[4] = sum(43, 54);
  array[5] = sum(35,44);

  for (int i = 0; i < 6; i++){
    printf("The result of %d is %d \n", i + 1, array[i]);
  }


  return 0;
}



