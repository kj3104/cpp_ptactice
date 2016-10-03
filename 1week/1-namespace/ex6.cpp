#include <iostream>

int main(int argc, char const *argv[]) {
  std::string input1, input2;
  std::cout << "姓を入力:";
  std::cin >> input1;
  std::cout << "名を入力:";
  std::cin >> input2;
  std::cout << "名前は「"<< input1 + input2 <<"」です。" << std::endl;
  return 0;
}
