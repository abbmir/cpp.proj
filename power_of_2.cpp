// Write logic to test if the number is power of 2

#include <stdio.h>

void power_of_2 (int x) {
    //int countones=0;
    //int temp = x;
    //if (temp&1)
    //    printf(" %d x is not power of 2 \n\n", x);
    //else
    //    temp = temp >> 1;
    //    while (temp) {
    //        if (temp&1) 
    //            countones +=1;
    //        temp = temp >> 1;
    //    }
    //if (countones == 1)
    //    printf(" %d xx is power of 2 \n\n", x);
    //else
    //    printf(" %d xx is not power of 2 \n\n", x);

    if (x & x-1)
        printf(" %d is not a power of 2 \n\n", x);
    else
        printf(" %d is a power of 2 \n\n", x);
}

// The main() function
int main() {

  power_of_2(8);
  power_of_2(18);
  power_of_2(15);
  power_of_2(3);
  power_of_2(0);
  return(0);
}