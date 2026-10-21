#include <bits/stdc++.h>
using namespace std;

int largestElement(const vector<int> &v) {

    // Idiomatic check for empty vector
    if (v.empty()) {
        return -1;
    }

    int largest = v[0];

    // Approach 1: Range-based for loop (Recommended)
    for (int num : v) {
        if (num > largest) {
            largest = num;
        }
    }

    // Approach 2: Using size_t loop index
    /* 
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] > largest) {
            largest = v[i];
        }
    }
    */

    // Approach 3: Casting v.size() to int
    /*
    for (int i = 1; i < static_cast<int>(v.size()); i++) {
        if (v[i] > largest) {
            largest = v[i];
        }
    }
    */

    return largest;
}

int main() {
    vector<int> v;

    // Approach 1: Read until End of File / Input Stream Ends (Standard)
    int x; 
    while (cin >> x) {
        v.push_back(x);
    }

    // Approach 2: Read a single line of inputs
    /*
    string line;
    getline(cin, line);

    stringstream ss(line); 

    int x;
    while (ss >> x) {
        v.push_back(x);
    }
    */
  
    cout << largestElement(v) << endl;
    return 0;
}