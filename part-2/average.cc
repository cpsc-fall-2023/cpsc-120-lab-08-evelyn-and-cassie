// Cassandra Santillano
// CASantillano@csu.fullerton.edu
// @CASantillano
// Partners: @EvelynPena

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number \n";

    return 1;
  }
  double sum{0.0};
  int amt_num{0};
  bool first{true};
  for (std::string const& arguments : arguments) {
    if (first) {
      first = false;
      continue;
    }
    amt_num++;
    sum += stod(arguments);
  }
  double denom{static_cast<double>(arguments.size()) - 1};
  std::cout << "average = " << sum / denom << "\n";

  return 0;
}