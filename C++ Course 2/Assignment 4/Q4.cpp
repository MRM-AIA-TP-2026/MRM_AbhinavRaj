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

    string line;
    string oldestName;
    int oldestAge = -1;

    while (getline(file, line)) {
        stringstream ss(line);
        string name;
        int age;
        string occupation;

        if (getline(ss, name, '\t') && ss >> age ) {
            getline(ss, occupation);
            if (age > oldestAge) {
                oldestAge = age;
                oldestName = name;
            }
        }
    }

    if (!oldestName.empty()) {
        cout << "The oldest person is " << oldestName << "." << endl;
    } else {
        cout << "No valid data found." << endl;
    }

    file.close();

  //add code above this line

  return 0;

}
