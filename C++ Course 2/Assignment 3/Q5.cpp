#include <iostream>
using namespace std;

int main(int argc, char** argv) {

  string my_string = (argv[1]);

  //add code below this line

  if (my_string.length() % 2 != 0) {
        cout << "Error" << endl;
        return 1;
    }

    for (int i = 0; i < my_string.length(); i += 2) {
      swap(my_string[i], my_string[i + 1]);
    }

  cout << my_string <<endl;

  //add code above this line

  return 0;

}
