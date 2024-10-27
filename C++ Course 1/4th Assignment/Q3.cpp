#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  int a = stoi(argv[1]);
  int b = stoi(argv[2]);

  if (a > b) {
    int c = b;
    b = a;
    a = c;
  }

  //add code below this line

  int i;
  int sum = 0;
  for (i = a; i <= b; i++) {
    sum = sum + i;
  }
  cout << sum << endl;

  //add code above this line

  return 0;

}
