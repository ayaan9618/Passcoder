#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 

int main() { 

  int num_chars, i, seed_value; 


  printf("Enter the number of characters in the password: "); 
   scanf("%d", &num_chars); 
 
  printf("Enter a seed value for the random number generator: "); 

  scanf("%d", &seed_value); 

  // Seed the random number generator with user-specified value 

  srand(seed_value); 

  // Generate a random password of the specified length 

  printf("Random Password: "); 

  for (i = 0; i < num_chars; i++) 
  { 

    char c = (char)((rand() % 94) + 33); // Generates a random printable ASCII character 

    printf("%c", c); 

  } 

  printf("\n"); 

  return 0; 

}
