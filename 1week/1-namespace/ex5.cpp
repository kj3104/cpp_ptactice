#include <iostream>

int main(int argc, char const *argv[]) {
  int input1, input2;
  std::cout << "1つ目の数:";
  std::cin >> input1;
  std::cout << "2つ目の数:";
  std::cin >> input2;
  std::cout << input1 << "+" << input2 << "=" << input1+input2 << std::endl;
  std::cout << input1 << "-" << input2 << "=" << input1-input2 << std::endl;

  return 0;
}
