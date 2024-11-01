#include <iostream>

void mySum() {
    int x = 5;
    int y = 6;
    int sum = x + y;
    // This is how I write comment
    // To use std::cout you need to import iostream
    // std::cout stands for standard character output :)
    std::cout << sum;
} 


int main() {
  mySum();
  mySum();
  mySum();
  return 0;
}