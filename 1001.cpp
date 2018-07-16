#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

void calc() {
  long long d;
  if (cin >> d) {
    calc();
    printf("%.5f\n", (double)sqrt(d));
  }
}

int main() {
  calc();
  return 0;
}
