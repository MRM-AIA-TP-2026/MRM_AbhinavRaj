#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  string my_string = (argv[1]);

  //add code below this line

  int l = (my_string.length())/2;

  string first_half = my_string.substr(0, l);
  string second_half = my_string.substr(l);

  cout << first_half << endl;
  cout << second_half << endl;

  //add code above this line

  return 0;

}
