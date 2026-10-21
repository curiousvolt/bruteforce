#include <bits/stdc++.h>
using namespace std;

int largestElement(const vector<int> &v) {

    if (v.empty()) {
        return -1;
    }

    long long largest = LLONG_MIN, second = LLONG_MIN;

    for (int num : v) {
        if (num > largest) {
            second = largest;
            largest = num;
        }

        else if (num < largest && num > second){
            second = num;
        }
    }


    return second == LLONG_MIN ? -1 : static_cast<int>(second);
}

int main() {
    vector<int> v;

    // Approach 1: Read until End of File / Input Stream Ends (Standard)
    int x; 
    while (cin >> x) {
        v.push_back(x);
    }

  
    cout << largestElement(v) << endl;
    return 0;
}