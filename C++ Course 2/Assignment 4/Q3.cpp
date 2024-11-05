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

ifstream file(path);
    if (!file.is_open()) {
        cerr << "Error opening file: " << path << endl;
    }

    vector<string> lines;
    string line;

    // Read the file line by line
    while (getline(file, line)) {
        lines.push_back(line);
    }

    // Print lines in reverse order
    for (int i = lines.size() - 1; i >= 0; --i) {
        cout << lines[i] << endl;
    }

    file.close();

  //add code above this line

  return 0;

}
