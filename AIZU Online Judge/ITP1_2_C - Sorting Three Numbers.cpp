#include <iostream>
#include "stdio.h"

using namespace std;

int main() {
  int a,b,c;

  scanf("%d%d%d", &a, &b, &c);

  if (a > c) {
    swap(a,c);
  }

  if (b > c) {
    swap(b,c);
  }

  if (a > b) {
    swap(b,a);
  }

  printf("%d %d %d\n", a, b, c);

  return 0;
}
