#include <iostream>

int main() {
  std::cout << "Enter the side of trapeze and height: " << std::endl;
  float x, y, h;
  std::cin >> x >> y >> h;
  if (x <= 0 || y <= 0 || h <= 0) {
    std::cout << "Incorrect input.";
    return 0;
  }
  std::cout << h * ((x + y) / 2.0);
}
