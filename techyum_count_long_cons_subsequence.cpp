// Hello Ali
// write a function foo(char * s) which does the following: for each distinct char c in s prints the length of the longest consecutive
// sequence of c in s
// example: foo("###qwwwq####qqw11221")
// # : 4
// q : 2
// w : 3
// 1 : 2
// 2 : 2

#include <vector>

void foo (char* s) {
  
  int n = s.length();
  
  std::vector<char> v;
  v.push_back(s[0])
  
  // pushing into que only those ccuring
  // #, q, w ...
  
  
  // non repeated vectors in 
  for (int i = 1; i < n; i++) {
    if (s[i] != s[i-1])
      v.push_back(s[i]);
  }
  
  // maximum length
  // traversing the array
  for (int i=0; i < v.size; i++) {
    printf("length of the longest consecutive subsequence", v[i]) 
  }
  
}


int main() {
  
  foo("###qwwwq####qqw11221");

  return(0);
  
}
