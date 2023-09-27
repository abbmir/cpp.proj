// Write logic to check if the bit in the given number is set (i.e. 1)

#include <stdio.h>

void Nth_bit_set (int x, int N) {
    //if ( (x >> N) & 1)
    if (x & (1 << N))
        printf(" %dth bit is [SET] in %b \n\n", N, x);
    else
        printf(" %dth bit is [NOT SET] in %b \n\n", N, x);
        
}

// The main() function
int main() {

  Nth_bit_set(9, 3);;
  Nth_bit_set(10,2);
  Nth_bit_set(2, 1);
  Nth_bit_set(0, 0);
  return(0);
}