#include <iostream>

int main() {
  int a = 5;
  int *p;
  p = &a;
  for (int i; i <= 5; i++) {
    p++;
    std::cout << p << " " << &p << "\n";
  }
  return 0;
}