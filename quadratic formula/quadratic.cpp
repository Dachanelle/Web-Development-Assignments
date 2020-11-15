#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float a, b ,c;
  float root1, root2;
  cout << "Enter a\n";
  cin >> a;
  cout << "Enter b\n";
  cin >> b;
  cout << "Enter c\n";
  cin >> c;
  cout << "\n\n";

  root1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
  root2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);
  cout << "The square root of a:"<< a << ", b:" << b << " and c:" << c << " are :" << root1<< " and " << root2;
  
  
}
