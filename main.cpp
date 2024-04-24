#include <iostream>
#include <string>

int main() {

  std::string code =
R"(#include <iostream>
#include <string>

int main() {
  std::string code =
  std::cout << code.substr(0, 53) << '\n';
  std::cout << code.substr(52, 21) << "R\"(" << code << ")\";\n  ";
  std::cout << code.substr(75);

  return 0;
}
)";
  std::cout << code.substr(0, 53) << '\n';
  std::cout << code.substr(52, 21) << "R\"(" << code << ")\";\n  ";
  std::cout << code.substr(75);

  return 0;
}