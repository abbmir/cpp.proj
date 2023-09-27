// Write logic to check if any 8-bit number is Odd or Even

#include <stdio.h>

void odd_even (int N) {
    if (N & 1)
        printf(" %d is [ODD]\n\n", N);
    else
        printf(" %d is [EVEN]\n\n", N);
        
}

// The main() function
int main() {

  odd_even(9);;
  odd_even(10);
  odd_even(2);
  odd_even(0);
  return(0);
}