#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  do {
    cout << "Number: ";
    cin >> n;
  }while (n < 1 || n > 30);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << " * ";
    }
    cout << endl;
  }

  string stars = "";
  for (int i = 1; i <= n; i++) {
    stars += " * ";
    cout << stars << endl;
  }
  return 0;
}