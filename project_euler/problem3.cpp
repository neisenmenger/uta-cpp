#include <iostream>
#include <vector>

using namespace std;

int main(){
  long n = 600851475143;
  int p = 3;
  while (n%2 == 0) {
    cout << 2 << '\n';
    n = n/2;
    }
  while (n>1){
    while (n%p==0){
      cout << p << '\n';
      n = n/p;
    }
    p+=2;
  }
}