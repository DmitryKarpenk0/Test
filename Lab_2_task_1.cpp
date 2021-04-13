/*
Author - Karpenko Dmitry

Lab 2
Task 1
Variant 6

This program streamlines values of x, y, z and displaying them

Tests:
| x | y | z | output |
|---|---|---|--------|
| 2 | 3 | 1 |  1 2 3 |
| 3 | 2 | 1 |  1 2 3 |
| 3 | 1 | 3 |  1 3 3 |

*/

#include <iostream>

using namespace std;

int main() {
  float x, y, z;
  float p;

  cout << "Enter x, y, z:" << endl;
  cin >> x >> y >> z;

  if (x > y) {
    // swapping
    p = x;
    x = y;
    y = p;
  }

  if (y > z) {
    // swapping
    p = y;
    y = z;
    z = p;
  }

  if (x > y) {
    // swapping
    p = x;
    x = y;
    y = p;
  }

  cout << x << " " << y << " " << z << endl;

  system("pause");
  return 0;
}