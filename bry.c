#include <stdio.h>

/*
This file is to explore the possibilities around the file handling, from creation, opening, closing,editing, and deleting
*/








int main(){

  FILE *fptr;
  // This fopen() function takes in the filename and n=mode which could be r for read, w for write and a for apend

  // This creates a file if the file does not exist
  // fptr = fopen("filename.txt", "w");

  // This appends to a file
  // fptr = fopen("filename.txt", "a");

  // This reads a file
  fptr = fopen("filename.txt", "r");


  // create a string variable to store up to 100 character
  char text[100];

  // This reads the content of the file
  fgets(text, 100, fptr);


  // Print out the content that has been read and stored in the variable | This only rreads the first line of the file to read all lines in the file, use while loop
  printf("%s\n", text);

  while (fgets(text, 100, fptr)){
    printf("%s\n", fptr);
  }
  // This writes content in to the open file
  // fprintf(fptr, "\n This is th efirst file to be writtent, \nSigned by Seun Adeniyi");


  // This closes the file after writing
  fclose(fptr);

  return 0;
}
