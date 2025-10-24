#include <iostream>

int main() {
  std::cout << "Enter the side of square" << std::endl;
  float storona;
  std::cin >> storona;
  if (storona <= 0.0) {
    std::cout << "Side is can't be negative";
    return 0;
  }
  std::cout << storona * storona;
}
