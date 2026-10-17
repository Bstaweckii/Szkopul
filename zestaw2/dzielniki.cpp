#include <cmath>
#include <iostream>
#include <vector>
int main() {

  long long n;
  std::vector<long long> male;
  std::vector<long long> duze;
  std::cin >> n;

  for (long long i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      // std::cout << i << std::endl;
      male.push_back(i);

      if (i != n / i) {
        // std::cout << n / i << std::endl;
        duze.insert(duze.begin(), (n / i));
      }
    }
  }
  for (int j = 0; j < male.size(); j++) {
    std::cout << male.at(j) << std::endl;
  }
  for (int j = 0; j < duze.size(); j++) {
    std::cout << duze.at(j) << std::endl;
  }
}
