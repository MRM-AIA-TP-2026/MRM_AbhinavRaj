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

    vector<double> sums(4, 0.0);
    int rowCount = 0;

    string line;
    while (getline(file, line) && rowCount < 3) {
        stringstream ss(line);
        string value;
        int colCount = 0;

        while (getline(ss, value, ',')) {
            if (colCount < 4) {
                sums[colCount] += stod(value);
                colCount++;
            }
        }
        rowCount++;
    }

    for (double sum : sums) {
        cout << (sum / rowCount) << " ";
    }
    cout << endl;

    file.close();

  //add code above this line

  return 0;

}
