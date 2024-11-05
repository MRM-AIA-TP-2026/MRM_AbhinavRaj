#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<string> oceans(0);

  //add code below this line

  string oc[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Arabian"};
  for (int i = 0 ; i < 5; i++) {
    oceans.push_back(oc [i]);
    }
  oceans.pop_back();
  oceans.push_back("South");
  oceans.at(4) = "Southern";

  //add code above this line

  for (auto a : oceans) {
    cout << a << endl;
  }

  return 0;

}
