//  to find nth max in an array

#include <stdio.h>

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

void /*int*/ Nth_max_in_array (int *x, int size, int N) {
   int tmp;
   for (int i = 0; i < size; i++) 
      if (x[i] < x[i+1]) {
        int temp = x[i];
        x[i] = x[i+1];
        x[i+1] = temp;
        i = -1;  // restart the for loop
      }
    //return x[N];
}

int /*vector<int>*/ v_Nth_max_in_array(vector<int> array, int N) {
  sort(array.begin(), array.end(), greater<int>());
  return array[N];
}

// The main() function
int main() {
   
  int A[]= {200, 100, 20, 400, 10};
  //vector<int> A = {200, 100, 20, 400, 10}; // 400, 200, 100, 20, 10

  int size = sizeof(A) / sizeof(A[0]);
  cout << "size of " << sizeof(A) / sizeof(A[0]) << " " << endl;
  Nth_max_in_array(A, size, 2);
  for (int i = 0; i < size; i++) {
      cout << "Descending order " << A[i] << " " << endl;
  }

  //printf (" The Nth Max element is %d", Nth_max_in_array(A, 2));
  return(0);
}