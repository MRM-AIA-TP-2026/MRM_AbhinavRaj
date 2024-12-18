#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv) {

  vector<string> reverse(0);
  reverse.push_back(argv[1]);
  reverse.push_back(argv[2]);
  reverse.push_back(argv[3]);

  //add code below this line

  vector<string> forward(0);
  for (int i = 0; i < reverse.size(); i++) {
    forward.push_back(reverse.at(i));
  }
  reverse.pop_back();
  reverse.pop_back();
  reverse.pop_back();

  for (int n = 2; n >= 0; n--) {
    reverse.push_back(forward.at(n));
  }

  //add code above this line

  for (auto a : reverse) {
    cout << a << endl;
  }

  return 0;

}
