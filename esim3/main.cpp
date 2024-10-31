#include "myfunctions.h"
#include <iostream>

using namespace std;

int main() {
  int num;
  int result;
  int n, k;
  cout << "Lasketaan kertoma!" << endl;
  cout << "Anna positiivinen kokonaisluku" << endl;
  cin >> num;
  try {
      result = factorial(num);
      cout << "Luvun " << num << " kertoma = " << result << endl;
  } catch (runtime_error& e) {
      cout<<"Error: "<<e.what()<<endl;
  }

//  if (!result) {
//    cout << "Kertomaa ei voi laskea negatiiviselle luvulle" << endl;
//  } else {
//    cout << "Luvun " << num << " kertoma = " << result << endl;
//  }



//  cout<<"Anna n "<<endl;
//  cin>>n;
//  cout<<"Anna k"<<endl;
//  cin>>k;
//  result=coefficient(n,k);
//  cout<<n<<" yli "<<k<<" = "<<result<<endl;

  return 0;
}
