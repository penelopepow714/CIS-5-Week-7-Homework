#include <iostream>
#include <cstdlib>
#include <ctime>

// Homework 7 — Your Name
// CIS 5 Week 07 · Odd and Even

int main() {
  const int N = 20;
  int values[N];

  srand(static_cast<unsigned>(time(nullptr)));
  for (int i = 0; i < N; ++i) {
    values[i] = rand() % 100;
  }
  int evens[N];
  int odds[N];
  int evencount = 0;
  int oddcount = 0;

  for (int i = 0; i < N; ++i) {
    std::cout << "[" << i << "]" << values[i] << std::endl;
  }

  for (int i = 0; i < N; ++i) {
    if(values[i] % 2 == 0){
      evens[evencount] = values[i];
      evencount++;
    } else {
      odds[oddcount] = values[i];
      oddcount++;
    }
  }
  
  std::cout << "Even: ";
  for (int i = 0; i < evencount; ++i){
    std::cout <<" "<< evens[i];
  }
  
  std::cout << "Odd: ";
  for(int i = 0; i < oddcount; ++i){
    std::cout << " " << odds[i];
  }
  std::cout << std::endl;


  return 0;
}
