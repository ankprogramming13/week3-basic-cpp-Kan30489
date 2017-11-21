#include <iostream>

using namespace std;

int main() {
  const float pi = 3.14315926536;
  float r;
  float h =15;
  cin >> r;

  cout << "Area : " << pi * r * r << endl;
  cout << "Round : " << pi * 2 * r << endl;
  cout << "volume : "<< pi * r * r *h << endl;

  return 0;
}
