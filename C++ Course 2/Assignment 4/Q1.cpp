#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////

  //add code below this line

ifstream file;
  string read;
  file.open(path);
  if(!file) {
    throw runtime_error ("File failed to open.");
  }

  int count;
  while (getline(file, read)) {
    count = count + 1;
  }

  file.close();

  char alpha;
  file.open(path);
  if(!file) {
    throw runtime_error ("File failed to open.");
  }
  int counter = 0;
  while (file.get(alpha)) {
    counter = counter + 1;
  }

  file.close();

  cout << count ;
  cout << " line(s)" << endl;
  cout << counter ;
  cout << " character(s)" << endl;

  //add code above this line

  return 0;

}
