#include <iostream>

int main() {
  int a = 5;
  int *p;
  p = &a;
  std::cout << a << " " << &a << "\n";
  std::cout << p << " " << &p << "\n";
  std::cout << *p << "\n";
  int b = 20;
  p = &b;
  std::cout << b << " " << &b << "\n";
  std::cout << p << " " << &p << "\n";
  std::cout << *p << "\n";
  std::cout << a << " " << &a << "\n";
}