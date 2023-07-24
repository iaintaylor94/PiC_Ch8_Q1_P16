#include <stdio.h>

// Declare Function
unsigned long int factorial (unsigned int);

int main(void) {

  // Print the first 10 factorial numbers
  for ( int i = 0; i < 11; i++) {
    printf ("%2u! = %lu\n", i, factorial (i));
  }
  
  return 0;
}

// Define Function
unsigned long int factorial (unsigned int n) {
  unsigned long int result;

  if (n == 0)
     result = 1;
  else
    result = n * factorial (n - 1);

  return result;
}