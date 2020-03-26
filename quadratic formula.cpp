#include <iostream>
#include <cmath>

int main() {
  
  double a, b, c;
  double root1, root2;
  double first, second, third, bottom;
  
  //User inputs a, b, and c
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;

  //-b, first
  first = b * -1;
  //b * b, second
  second = b * b;
  //4 * a * c, third
  third = 4 * a * c;
  //2 * a, bottom
  bottom = 2 * a;
  
  //sqrt = square root
  root1 = (first + (std::sqrt(second - third))) / bottom;
  
  root2 = (first - (std::sqrt(second - third))) / bottom;
  
  std::cout << "Root 1 is " << root1 << ".\n";
  std::cout << "Root 2 is " << root2 << ".\n";
}