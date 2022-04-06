#include <iostream>

int main() {
  /*
  int a = 5;
  int *p;
  p = &a;
  std::cout << a << " " << &a << "\n";//val of a, address of a(abc)
  std::cout << p << " " << &p << "\n";//val of p(address of a(abc)),address of
  p(xyz) std::cout << *p << "\n";//val at address stored in p(val of a) int b =
  20; *p = b;//update value at a
  //p=&b update address of p and point to b now instead a
  std::cout << b << " " << &b << "\n";//val of b, address of b
  std::cout << p << " " << &p << "\n";//val of p(address of a),address of p
  std::cout << *p << "\n";//val at address stored in p
  std::cout << a << " " << &a << "\n";//val of a, address of a
  */
  char a = 'x';
  char *p1 = 0;
  p1 = &a;
  std::cout << &p1 << " " << a << ": " << (void *)p1 << "\n";
  int b = 5;
  int *p2 = 0;
  p2 = &b;
  std::cout << &p2 << " " << &b << " " << (void *)p2 << "\n";
}