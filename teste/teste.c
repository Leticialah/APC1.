#include <stdio.h>

int main() {

  int x = 10;
  {
    int y = x * 2;
    {
      int y = x + 1;
      int x = 1;
      ++x;
    }
    printf("%d, %d\n", x, y);
  }
}