#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  string original = (argv[1]);
  string modified;
  char ch;

  //add code below this line

  for (int i = 0; i < original.length(); i++) {

  ch = original[i];
  char up = toupper(ch);
  char lo = tolower(ch);
  char side = '-';

    if (ch == up) {
        modified .append(1,'u');
    } else if (ch == lo) {
        modified.append(1,'l');
    } else {
        modified.append(1,side);
    }
  }
  cout << original << endl;
  cout << modified << endl;

  //add code above this line

  return 0;

}
