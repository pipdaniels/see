#include <stdio.h>
#include <stdbool.h>

int main (){
  bool isLoggedIn = true;
  bool isAdmin = false;
  int clearanceLevel = 2;

  if ( isLoggedIn && (isAdmin || clearanceLevel <= 2)){
    printf("Access Granted\n");

  } else {
    printf("Acess Denied\n");
  }

  return 0;
}


