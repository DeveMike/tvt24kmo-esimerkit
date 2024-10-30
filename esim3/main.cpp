#include "myfunctions.h"
#include <iostream>

using namespace std;

int main() {
  int num;
  int result;
  cout << "Lasketaan kertoma!" << endl;
  cout << "Anna positiivinen kokonaisluku" << endl;
  cin >> num;
  result = factorial(num);
  if (result == -1) {
    cout << "Kertomaa ei voi laskea negatiiviselle luvulle" << endl;
  } else {
    cout << "Luvun " << num << " kertoma = " << result << endl;
  }

  return 0;
}
