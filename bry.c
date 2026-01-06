#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Car
{
  char brand[50];
  int year;
};

/*This code file is to explorre memory allocation in C programming language*/
// malloc() and calloc() allocates memory and return a pointer to it's address reepsectively
// realloc() ensurrres memory is reallocated
/*
The realloc() function tries to resize the memory at ptr1 and return the same memory address. If it cannot resize the memory at the current address then it will allocate memory at a different address and return the new address instead.

free()
When you no longer need a block of memory you should deallocate it. Deallocation is also referred to as "freeing" the memory.

Dynamic memory stays reserved until it is deallocated or until the program ends.

Once the memory is deallocated it can be used by other programs or it may even be allocated to another part of your program.
*/
int main()
{
  int *ptr1, *ptr2;

  ptr1 = malloc(sizeof(*ptr1));
  ptr2 = calloc(1, sizeof(*ptr2));

  int *ptr1, *ptr2, size;

  // Allocate memory for four integers
  size = 4 * sizeof(*ptr1);
  ptr1 = malloc(size);

  printf("%d bytes allocated at address %p \n", size, ptr1);

  // Resize the memory to hold six integers
  size = 6 * sizeof(*ptr1);
  ptr2 = realloc(ptr1, size);

  printf("%d bytes reallocated at address %p \n", size, ptr2);

  //Allocate memory for one Car struct
  struct Car *ptr = (struct Car*) malloc(sizeof(struct Car));

  // Check if allocation was successful
  if (ptr == NULL)
  {
    printf("Memory allocation failed.\n");
    return 1; // Exit the program with an error code
  }

  // Set values
  strcpy(ptr->brand, "Honda");
  ptr->year = 2022;

  // Print values
  printf("Brand: %s\n", ptr->brand);
  printf("Year: %d\n", ptr->year);

  // Free memory
  free(ptr);

  return 0;
}
