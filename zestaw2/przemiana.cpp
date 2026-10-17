#include <iostream>
int main() {
  int n = 0;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    unsigned long long x, y;
    int ox = 0, oy = 0, k = 0;
    int reszta = 0;
    std::cin >> x >> y;

    while (x > 0 or y > 0) {

      // ostatnia cyfra
      ox = x % 10;
      oy = y % 10;

      // Sprawdzanie przeskoku
      if (ox + oy + reszta >= 10) {
        // std::cout << "PRZESKOK" << std::endl;
        k += 1;
        reszta = 1;
      } else {
        reszta = 0;
      }

      // Usuwane ostatnia cyfre
      x /= 10;
      y /= 10;
    }
    std::cout << k << std::endl;
  }
}
