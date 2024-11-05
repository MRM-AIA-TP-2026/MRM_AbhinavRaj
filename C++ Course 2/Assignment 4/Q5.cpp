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
    vector<string> southernCities;
    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string city, country;
        double latitude, longitude;

        if (getline(ss, city, ',') && getline(ss, country, ',') &&
            ss >> latitude && ss.ignore() && ss >> longitude) {
            if (latitude < 0) {
                southernCities.push_back(city);
            }
        }
    }

    if (!southernCities.empty()) {
        cout << "The following cities are in the Southern Hemisphere: ";
        for (size_t i = 0; i < southernCities.size(); ++i) {
            cout << southernCities[i];
            if (i < southernCities.size() - 1) {
                cout << ", ";
            }
        }
        cout << "." << endl;
    } else {
        cout << "No cities found in the Southern Hemisphere." << endl;
    }

    file.close();

  //add code above this line

  return 0;

}
