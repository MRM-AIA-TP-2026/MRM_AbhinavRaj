#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  string my_string = (argv[1]);

  //add code below this line

  cout << my_string[0] << " is the first character and " << my_string[my_string.length()-1] << " is the last character";

  //add code above this line

  return 0;

}