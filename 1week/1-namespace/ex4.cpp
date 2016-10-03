#include <iostream>

int main(int argc, char const *argv[]) {
  int inputInt;
  std::cout << "数値を入力してください:";
  std::cin >> inputInt;
  std::cout << inputInt << "を2倍した数は、" << inputInt*2 << "です。" << std::endl;

  return 0;
}
