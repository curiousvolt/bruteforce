#include <bits/stdc++.h>
using namespace std;

bool isSorted(const vector<int> &v){
    
    for (int i = 0; i < static_cast<int>(v.size()); ++i){
        if (v[i] < v[i-1]) return false;
    }

    return true;

}

int main(){

    vector <int> v;

    int x;
    while(cin >> x){
        v.push_back(x);
    }

    cout << isSorted(v);

    return 0;
}